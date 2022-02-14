
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sync_bus_names_event_source; int event; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,scalar_t__*,int ,TYPE_1__*) ;
 int FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;

int FUNC_6(Manager *VAR_3) {
        int VAR_4;

        FUNC_0(VAR_3);





        if (VAR_3->sync_bus_names_event_source)
                return 0;

        VAR_4 = FUNC_2(VAR_3->event, &VAR_3->sync_bus_names_event_source, VAR_2, VAR_3);
        if (VAR_4 < 0)
                return FUNC_1(VAR_4, "Failed to create bus name synchronization event: %m");

        VAR_4 = FUNC_5(VAR_3->sync_bus_names_event_source, VAR_1);
        if (VAR_4 < 0)
                return FUNC_1(VAR_4, "Failed to set event priority: %m");

        VAR_4 = FUNC_4(VAR_3->sync_bus_names_event_source, VAR_0);
        if (VAR_4 < 0)
                return FUNC_1(VAR_4, "Failed to set even to oneshot: %m");

        (void) FUNC_3(VAR_3->sync_bus_names_event_source, "manager-sync-bus-names");
        return 0;
}
