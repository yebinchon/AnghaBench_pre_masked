
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; int bus_track; int manager; int unit; int sent_dbus_new_signal; } ;
typedef TYPE_1__ Job ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,char*,int ) ;
 int VAR_0 ;

void FUNC_5(Job *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        if (!VAR_1->sent_dbus_new_signal)
                FUNC_2(VAR_1);


        FUNC_3(VAR_1->unit, 1);

        VAR_2 = FUNC_1(VAR_1->manager, VAR_1->bus_track, VAR_0, VAR_1);
        if (VAR_2 < 0)
                FUNC_4(VAR_2, "Failed to send job remove signal for %u: %m", VAR_1->id);
}
