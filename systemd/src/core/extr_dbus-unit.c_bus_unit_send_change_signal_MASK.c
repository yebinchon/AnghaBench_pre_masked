
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int in_dbus_queue; int sent_dbus_new_signal; int id; int bus_track; TYPE_4__* manager; } ;
typedef TYPE_1__ Unit ;
struct TYPE_9__ {int dbus_unit_queue; } ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_4__*,int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_4(Unit *VAR_3) {
        int VAR_4;
        FUNC_1(VAR_3);

        if (VAR_3->in_dbus_queue) {
                FUNC_0(VAR_0, VAR_3->manager->dbus_unit_queue, VAR_3);
                VAR_3->in_dbus_queue = 0;
        }

        if (!VAR_3->id)
                return;

        VAR_4 = FUNC_2(VAR_3->manager, VAR_3->bus_track, VAR_3->sent_dbus_new_signal ? VAR_1 : VAR_2, VAR_3);
        if (VAR_4 < 0)
                FUNC_3(VAR_3, VAR_4, "Failed to send unit change signal for %s: %m", VAR_3->id);

        VAR_3->sent_dbus_new_signal = 1;
}
