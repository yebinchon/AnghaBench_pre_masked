
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pending_reload_message; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,int *) ;

int FUNC_4(Manager *VAR_0) {
        int VAR_1;

        FUNC_0(VAR_0);

        if (!VAR_0->pending_reload_message)
                return 0;




        VAR_1 = FUNC_3(((void*)0), VAR_0->pending_reload_message, ((void*)0));
        if (VAR_1 < 0)
                FUNC_1(VAR_1, "Failed to send queued message, ignoring: %m");

        VAR_0->pending_reload_message = FUNC_2(VAR_0->pending_reload_message);

        return 0;
}
