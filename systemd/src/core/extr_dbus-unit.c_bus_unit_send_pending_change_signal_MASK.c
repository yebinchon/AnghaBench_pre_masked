
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int manager; int sent_dbus_new_signal; int in_dbus_queue; } ;
typedef TYPE_1__ Unit ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(Unit *VAR_0, bool VAR_1) {





        if (!VAR_0->in_dbus_queue)
                return;

        if (!VAR_0->sent_dbus_new_signal && !VAR_1)


                return;

        if (FUNC_0(VAR_0->manager))

                return;

        FUNC_1(VAR_0);
}
