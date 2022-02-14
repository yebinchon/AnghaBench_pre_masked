
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int private_buses; int * system_bus; int * api_bus; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef int sd_bus ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int **) ;
 int FUNC_5 (char*) ;
 int * FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(sd_bus_message *VAR_0, void *VAR_1, sd_bus_error *VAR_2) {
        Manager *VAR_3 = VAR_1;
        sd_bus *VAR_4;

        FUNC_0(VAR_0);
        FUNC_0(VAR_3);
        FUNC_1(VAR_4 = FUNC_6(VAR_0));

        if (VAR_4 == VAR_3->api_bus)
                FUNC_2(VAR_3);
        if (VAR_4 == VAR_3->system_bus)
                FUNC_3(VAR_3);

        if (FUNC_7(VAR_3->private_buses, VAR_4)) {
                FUNC_5("Got disconnect on private connection.");
                FUNC_4(VAR_3, &VAR_4);
        }

        return 0;
}
