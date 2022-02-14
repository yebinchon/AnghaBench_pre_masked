
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int robj ;
struct TYPE_8__ {int argc; TYPE_2__** argv; int db; } ;
typedef TYPE_1__ client ;
struct TYPE_9__ {int ptr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,double) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ) ;
 int FUNC_4 (double,double*) ;
 int * FUNC_5 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_6 (int *,int ,double*) ;

void FUNC_7(client *VAR_2) {
    int VAR_3;


    robj *VAR_4 = FUNC_5(VAR_2->db, VAR_2->argv[1]);
    if (VAR_4 && FUNC_3(VAR_2, VAR_4, VAR_1)) return;



    FUNC_0(VAR_2,VAR_2->argc-2);
    for (VAR_3 = 2; VAR_3 < VAR_2->argc; VAR_3++) {
        double VAR_5;
        if (!VAR_4 || FUNC_6(VAR_4, VAR_2->argv[VAR_3]->ptr, &VAR_5) == VAR_0) {
            FUNC_2(VAR_2);
        } else {

            double VAR_6[2];
            if (!FUNC_4(VAR_5,VAR_6)) {
                FUNC_2(VAR_2);
                continue;
            }
            FUNC_0(VAR_2,2);
            FUNC_1(VAR_2,VAR_6[0]);
            FUNC_1(VAR_2,VAR_6[1]);
        }
    }
}
