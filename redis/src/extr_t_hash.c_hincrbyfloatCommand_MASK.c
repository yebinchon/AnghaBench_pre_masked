
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int sds ;
typedef int robj ;
struct TYPE_14__ {TYPE_2__* db; TYPE_3__** argv; } ;
typedef TYPE_1__ client ;
typedef int buf ;
struct TYPE_17__ {int dirty; } ;
struct TYPE_16__ {int ptr; } ;
struct TYPE_15__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int * FUNC_2 (char*,int) ;
 int * FUNC_3 (char*,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_3__*,long double*,int *) ;
 scalar_t__ FUNC_6 (int *,int ,unsigned char**,unsigned int*,long long*) ;
 int * FUNC_7 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_8 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_9 (long double) ;
 scalar_t__ FUNC_10 (long double) ;
 int FUNC_11 (char*,int,long double,int ) ;
 int FUNC_12 (int ,char*,TYPE_3__*,int ) ;
 int FUNC_13 (TYPE_1__*,int,int *) ;
 int FUNC_14 (char*,int) ;
 TYPE_4__ VAR_5 ;
 int FUNC_15 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_16 (char*,unsigned int,long double*) ;

void FUNC_17(client *VAR_6) {
    long double VAR_7, VAR_8;
    long long VAR_9;
    robj *VAR_10;
    sds VAR_11;
    unsigned char *VAR_12;
    unsigned int VAR_13;

    if (FUNC_5(VAR_6,VAR_6->argv[3],&VAR_8,((void*)0)) != VAR_0) return;
    if ((VAR_10 = FUNC_7(VAR_6,VAR_6->argv[1])) == ((void*)0)) return;
    if (FUNC_6(VAR_10,VAR_6->argv[2]->ptr,&VAR_12,&VAR_13,&VAR_9) == VAR_0) {
        if (VAR_12) {
            if (FUNC_16((char*)VAR_12,VAR_13,&VAR_7) == 0) {
                FUNC_1(VAR_6,"hash value is not a float");
                return;
            }
        } else {
            VAR_7 = (long double)VAR_9;
        }
    } else {
        VAR_7 = 0;
    }

    VAR_7 += VAR_8;
    if (FUNC_10(VAR_7) || FUNC_9(VAR_7)) {
        FUNC_1(VAR_6,"increment would produce NaN or Infinity");
        return;
    }

    char VAR_14[VAR_3];
    int VAR_15 = FUNC_11(VAR_14,sizeof(VAR_14),VAR_7,VAR_2);
    VAR_11 = FUNC_14(VAR_14,VAR_15);
    FUNC_8(VAR_10,VAR_6->argv[2]->ptr,VAR_11,VAR_1);
    FUNC_0(VAR_6,VAR_14,VAR_15);
    FUNC_15(VAR_6->db,VAR_6->argv[1]);
    FUNC_12(VAR_4,"hincrbyfloat",VAR_6->argv[1],VAR_6->db->id);
    VAR_5.dirty++;




    robj *VAR_16, *VAR_17;
    VAR_16 = FUNC_3("HSET",4);
    VAR_17 = FUNC_2(VAR_14,VAR_15);
    FUNC_13(VAR_6,0,VAR_16);
    FUNC_4(VAR_16);
    FUNC_13(VAR_6,3,VAR_17);
    FUNC_4(VAR_17);
}
