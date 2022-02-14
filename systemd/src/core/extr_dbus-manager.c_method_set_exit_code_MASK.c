
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int return_value; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Manager ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,char*,int *) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (TYPE_1__*,char,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_7(sd_bus_message *VAR_1, void *VAR_2, sd_bus_error *VAR_3) {
        Manager *VAR_4 = VAR_2;
        uint8_t VAR_5;
        int VAR_6;

        FUNC_1(VAR_1);
        FUNC_1(VAR_4);

        VAR_6 = FUNC_3(VAR_1, "exit", VAR_3);
        if (VAR_6 < 0)
                return VAR_6;

        VAR_6 = FUNC_5(VAR_1, 'y', &VAR_5);
        if (VAR_6 < 0)
                return VAR_6;

        if (FUNC_0(VAR_4) && FUNC_2() <= 0)
                return FUNC_4(VAR_3, VAR_0, "ExitCode can only be set for user service managers or in containers.");

        VAR_4->return_value = VAR_5;

        return FUNC_6(VAR_1, ((void*)0));
}
