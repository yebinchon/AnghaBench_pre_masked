
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dbus_job_queue; } ;
struct TYPE_7__ {int in_dbus_queue; int sent_dbus_new_signal; int id; int bus_track; TYPE_3__* manager; int unit; } ;
typedef TYPE_1__ Job ;


 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,int ,int ,TYPE_1__*) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int FUNC_4 (int,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_5(Job *VAR_3) {
        int VAR_4;

        FUNC_1(VAR_3);


        FUNC_3(VAR_3->unit, 1);

        if (VAR_3->in_dbus_queue) {
                FUNC_0(VAR_0, VAR_3->manager->dbus_job_queue, VAR_3);
                VAR_3->in_dbus_queue = 0;
        }

        VAR_4 = FUNC_2(VAR_3->manager, VAR_3->bus_track, VAR_3->sent_dbus_new_signal ? VAR_1 : VAR_2, VAR_3);
        if (VAR_4 < 0)
                FUNC_4(VAR_4, "Failed to send job change signal for %u: %m", VAR_3->id);

        VAR_3->sent_dbus_new_signal = 1;
}
