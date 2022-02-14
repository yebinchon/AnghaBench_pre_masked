
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int sds ;
typedef int robj ;
struct TYPE_13__ {TYPE_2__* db; TYPE_3__** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_16__ {int dirty; } ;
struct TYPE_15__ {int ptr; } ;
struct TYPE_14__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 long long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*,long long) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_3__*,long long*,int *) ;
 scalar_t__ FUNC_3 (int *,int ,unsigned char**,unsigned int*,long long*) ;
 int * FUNC_4 (TYPE_1__*,TYPE_3__*) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int ,char*,TYPE_3__*,int ) ;
 int FUNC_7 (long long) ;
 TYPE_4__ VAR_5 ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_9 (char*,unsigned int,long long*) ;

void FUNC_10(client *VAR_6) {
    long long VAR_7, VAR_8, VAR_9;
    robj *VAR_10;
    sds VAR_11;
    unsigned char *VAR_12;
    unsigned int VAR_13;

    if (FUNC_2(VAR_6,VAR_6->argv[3],&VAR_8,((void*)0)) != VAR_0) return;
    if ((VAR_10 = FUNC_4(VAR_6,VAR_6->argv[1])) == ((void*)0)) return;
    if (FUNC_3(VAR_10,VAR_6->argv[2]->ptr,&VAR_12,&VAR_13,&VAR_7) == VAR_0) {
        if (VAR_12) {
            if (FUNC_9((char*)VAR_12,VAR_13,&VAR_7) == 0) {
                FUNC_0(VAR_6,"hash value is not an integer");
                return;
            }
        }
    } else {
        VAR_7 = 0;
    }

    VAR_9 = VAR_7;
    if ((VAR_8 < 0 && VAR_9 < 0 && VAR_8 < (VAR_3-VAR_9)) ||
        (VAR_8 > 0 && VAR_9 > 0 && VAR_8 > (VAR_2-VAR_9))) {
        FUNC_0(VAR_6,"increment or decrement would overflow");
        return;
    }
    VAR_7 += VAR_8;
    VAR_11 = FUNC_7(VAR_7);
    FUNC_5(VAR_10,VAR_6->argv[2]->ptr,VAR_11,VAR_1);
    FUNC_1(VAR_6,VAR_7);
    FUNC_8(VAR_6->db,VAR_6->argv[1]);
    FUNC_6(VAR_4,"hincrby",VAR_6->argv[1],VAR_6->db->id);
    VAR_5.dirty++;
}
