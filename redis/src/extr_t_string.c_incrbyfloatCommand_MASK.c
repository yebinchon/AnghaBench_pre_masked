
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int robj ;
struct TYPE_13__ {TYPE_2__* db; int ** argv; } ;
typedef TYPE_1__ client ;
struct TYPE_15__ {int dirty; } ;
struct TYPE_14__ {int id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int ) ;
 int * FUNC_3 (char*,int) ;
 int * FUNC_4 (long double,int) ;
 int FUNC_5 (TYPE_2__*,int *,int *) ;
 int FUNC_6 (TYPE_2__*,int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int *,long double*,int *) ;
 scalar_t__ FUNC_9 (long double) ;
 scalar_t__ FUNC_10 (long double) ;
 int * FUNC_11 (TYPE_2__*,int *) ;
 int FUNC_12 (int ,char*,int *,int ) ;
 int FUNC_13 (TYPE_1__*,int,int *) ;
 TYPE_3__ VAR_3 ;
 int FUNC_14 (TYPE_2__*,int *) ;

void FUNC_15(client *VAR_4) {
    long double VAR_5, VAR_6;
    robj *VAR_7, *VAR_8, *VAR_9;

    VAR_7 = FUNC_11(VAR_4->db,VAR_4->argv[1]);
    if (VAR_7 != ((void*)0) && FUNC_2(VAR_4,VAR_7,VAR_2)) return;
    if (FUNC_8(VAR_4,VAR_7,&VAR_6,((void*)0)) != VAR_0 ||
        FUNC_8(VAR_4,VAR_4->argv[2],&VAR_5,((void*)0)) != VAR_0)
        return;

    VAR_6 += VAR_5;
    if (FUNC_10(VAR_6) || FUNC_9(VAR_6)) {
        FUNC_1(VAR_4,"increment would produce NaN or Infinity");
        return;
    }
    VAR_8 = FUNC_4(VAR_6,1);
    if (VAR_7)
        FUNC_6(VAR_4->db,VAR_4->argv[1],VAR_8);
    else
        FUNC_5(VAR_4->db,VAR_4->argv[1],VAR_8);
    FUNC_14(VAR_4->db,VAR_4->argv[1]);
    FUNC_12(VAR_1,"incrbyfloat",VAR_4->argv[1],VAR_4->db->id);
    VAR_3.dirty++;
    FUNC_0(VAR_4,VAR_8);




    VAR_9 = FUNC_3("SET",3);
    FUNC_13(VAR_4,0,VAR_9);
    FUNC_7(VAR_9);
    FUNC_13(VAR_4,2,VAR_8);
}
