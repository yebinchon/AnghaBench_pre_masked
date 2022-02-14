
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int clusterNode ;
struct TYPE_5__ {int * slaveof; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

void FUNC_10(void) {
    int VAR_3;
    clusterNode *VAR_4 = VAR_2->slaveof;

    if (FUNC_7(VAR_2) || VAR_4 == ((void*)0)) return;


    FUNC_5(VAR_2);
    FUNC_8();


    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        if (FUNC_3(VAR_4,VAR_3)) {
            FUNC_2(VAR_3);
            FUNC_0(VAR_2,VAR_3);
        }
    }


    FUNC_6();
    FUNC_4(1);



    FUNC_1(VAR_0);


    FUNC_9();
}
