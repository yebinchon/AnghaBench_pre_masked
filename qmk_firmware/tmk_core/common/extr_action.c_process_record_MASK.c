
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int key; int pressed; } ;
struct TYPE_6__ {TYPE_5__ event; } ;
typedef TYPE_1__ keyrecord_t ;
typedef int action_t ;


 scalar_t__ FUNC_0 (TYPE_5__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ) ;

void FUNC_9(keyrecord_t *VAR_0) {
    if (FUNC_0(VAR_0->event)) {
        return;
    }

    if (!FUNC_7(VAR_0)) return;

    action_t VAR_1 = FUNC_8(VAR_0->event.pressed, VAR_0->event.key);
    FUNC_3("ACTION: ");
    FUNC_1(VAR_1);

    FUNC_3(" layer_state: ");
    FUNC_5();
    FUNC_3(" default_layer_state: ");
    FUNC_2();

    FUNC_4();

    FUNC_6(VAR_0, VAR_1);
}
