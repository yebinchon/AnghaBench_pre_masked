
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int mstime_t ;
typedef int listNode ;
typedef int client ;
struct TYPE_2__ {int hz; int clients; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 TYPE_1__ VAR_1 ;

void FUNC_8(void) {




    int VAR_2 = FUNC_4(VAR_1.clients);
    int VAR_3 = VAR_2/VAR_1.hz;
    mstime_t VAR_4 = FUNC_7();




    if (VAR_3 < VAR_0)
        VAR_3 = (VAR_2 < VAR_0) ?
                     VAR_2 : VAR_0;

    while(FUNC_4(VAR_1.clients) && VAR_3--) {
        client *VAR_5;
        listNode *VAR_6;




        FUNC_6(VAR_1.clients);
        VAR_6 = FUNC_3(VAR_1.clients);
        VAR_5 = FUNC_5(VAR_6);



        if (FUNC_0(VAR_5,VAR_4)) continue;
        if (FUNC_1(VAR_5)) continue;
        if (FUNC_2(VAR_5)) continue;
    }
}
