
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
struct TYPE_6__ {int clients_paused; scalar_t__ clients_pause_end_time; scalar_t__ mstime; int clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__ VAR_2 ;

int FUNC_4(void) {
    if (VAR_2.clients_paused &&
        VAR_2.clients_pause_end_time < VAR_2.mstime)
    {
        listNode *VAR_3;
        listIter VAR_4;
        client *VAR_5;

        VAR_2.clients_paused = 0;



        FUNC_2(VAR_2.clients,&VAR_4);
        while ((VAR_3 = FUNC_0(&VAR_4)) != ((void*)0)) {
            VAR_5 = FUNC_1(VAR_3);



            if (VAR_5->flags & (VAR_1|VAR_0)) continue;
            FUNC_3(VAR_5);
        }
    }
    return VAR_2.clients_paused;
}
