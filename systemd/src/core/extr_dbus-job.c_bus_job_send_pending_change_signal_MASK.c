
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* unit; int sent_dbus_new_signal; int in_dbus_queue; } ;
struct TYPE_6__ {int manager; } ;
typedef TYPE_2__ Job ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3(Job *VAR_0, bool VAR_1) {
        FUNC_1(VAR_0);

        if (!VAR_0->in_dbus_queue)
                return;

        if (!VAR_0->sent_dbus_new_signal && !VAR_1)
                return;

        if (FUNC_0(VAR_0->unit->manager))
                return;

        FUNC_2(VAR_0);
}
