
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus ;
typedef int Manager ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *,int *,int *,char*,char*,char*,int ,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(Manager *VAR_1, sd_bus *VAR_2) {
        int VAR_3;

        FUNC_1(VAR_1);
        FUNC_1(VAR_2);


        if (FUNC_0(VAR_1)) {
                VAR_3 = FUNC_4(
                                VAR_2,
                                ((void*)0),
                                ((void*)0),
                                "/org/freedesktop/systemd1/agent",
                                "org.freedesktop.systemd1.Agent",
                                "Released",
                                VAR_0, ((void*)0), VAR_1);
                if (VAR_3 < 0)
                        FUNC_3(VAR_3, "Failed to request Released match on system bus: %m");
        }

        FUNC_2("Successfully connected to system bus.");
        return 0;
}
