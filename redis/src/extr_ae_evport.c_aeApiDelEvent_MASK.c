
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* events; TYPE_3__* apidata; } ;
typedef TYPE_2__ aeEventLoop ;
struct TYPE_8__ {int* pending_masks; int* pending_fds; int portfd; } ;
typedef TYPE_3__ aeApiState ;
struct TYPE_6__ {int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,int ,int,int) ;
 int FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(aeEventLoop *VAR_4, int VAR_5, int VAR_6) {
    aeApiState *VAR_7 = VAR_4->apidata;
    int VAR_8, VAR_9;

    if (VAR_2)
        FUNC_3(VAR_3, "del fd %d mask 0x%x\n", VAR_5, VAR_6);

    VAR_9 = FUNC_2(VAR_7, VAR_5);

    if (VAR_9 != -1) {
        if (VAR_2)
            FUNC_3(VAR_3, "deleting event from pending fd %d\n", VAR_5);






        VAR_7->pending_masks[VAR_9] &= ~VAR_6;

        if (VAR_7->pending_masks[VAR_9] == VAR_0)
            VAR_7->pending_fds[VAR_9] = -1;

        return;
    }
    VAR_8 = VAR_4->events[VAR_5].mask;
    if (VAR_8 == VAR_0) {




        if (VAR_2)
            FUNC_3(VAR_3, "aeApiDelEvent: port_dissociate(%d)\n", VAR_5);

        if (FUNC_5(VAR_7->portfd, VAR_1, VAR_5) != 0) {
            FUNC_4("aeApiDelEvent: port_dissociate");
            FUNC_0();
        }
    } else if (FUNC_1("aeApiDelEvent", VAR_7->portfd, VAR_5,
        VAR_8) != 0) {







        FUNC_0();
    }
}
