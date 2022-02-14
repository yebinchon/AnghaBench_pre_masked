
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int objective; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int *) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_5(sd_bus_message *VAR_2, void *VAR_3, sd_bus_error *VAR_4) {
        Manager *VAR_5 = VAR_3;
        int VAR_6;

        FUNC_1(VAR_2);
        FUNC_1(VAR_5);

        VAR_6 = FUNC_2(VAR_2, "reboot", VAR_4);
        if (VAR_6 < 0)
                return VAR_6;

        if (!FUNC_0(VAR_5))
                return FUNC_3(VAR_4, VAR_1, "Reboot is only supported for system managers.");

        VAR_5->objective = VAR_0;

        return FUNC_4(VAR_2, ((void*)0));
}
