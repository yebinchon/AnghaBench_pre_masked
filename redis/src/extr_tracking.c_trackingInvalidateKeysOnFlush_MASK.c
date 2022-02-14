
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int listNode ;
typedef int listIter ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ client ;
struct TYPE_6__ {scalar_t__ tracking_clients; int clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 int ** VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 TYPE_2__ VAR_4 ;
 int FUNC_5 (int **) ;

void FUNC_6(int VAR_5) {
    if (VAR_4.tracking_clients) {
        listNode *VAR_6;
        listIter VAR_7;
        FUNC_2(VAR_4.clients,&VAR_7);
        while ((VAR_6 = FUNC_0(&VAR_7)) != ((void*)0)) {
            client *VAR_8 = FUNC_1(VAR_6);
            if (VAR_8->flags & VAR_0) {
                FUNC_4(VAR_8,-1);
            }
        }
    }


    if (VAR_5 == -1 && VAR_2) {
        for (int VAR_9 = 0; VAR_9 < VAR_1 && VAR_3 > 0; VAR_9++) {
            if (VAR_2[VAR_9] != ((void*)0)) {
                FUNC_3(VAR_2[VAR_9]);
                VAR_2[VAR_9] = ((void*)0);
                VAR_3--;
            }
        }





        if (VAR_4.tracking_clients == 0) {
            FUNC_5(VAR_2);
            VAR_2 = ((void*)0);
        }
    }
}
