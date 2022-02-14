
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; } ;
typedef TYPE_1__ keyrecord_t ;
typedef int keyevent_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_1__*) ;
 int VAR_3 ;

void FUNC_15(keyevent_t VAR_4) {
    if (!FUNC_0(VAR_4)) {
        FUNC_8("\n---- action_exec: start -----\n");
        FUNC_8("EVENT: ");
        FUNC_6(VAR_4);
        FUNC_9();



    }
    keyrecord_t VAR_5 = {.event = VAR_4};
    FUNC_3(VAR_5);
}
