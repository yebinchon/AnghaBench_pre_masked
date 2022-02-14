
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int int32_t ;
typedef int Unit ;
typedef scalar_t__ KillWho ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ,int ,int,int *,int *) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (int *,int *,char*,int *) ;
 int FUNC_7 (int *,int ,char*,...) ;
 int FUNC_8 (int *,char*,char const**,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,scalar_t__,int ,int *) ;

int FUNC_11(sd_bus_message *VAR_3, void *VAR_4, sd_bus_error *VAR_5) {
        Unit *VAR_6 = VAR_4;
        const char *VAR_7;
        int32_t VAR_8;
        KillWho VAR_9;
        int VAR_10;

        FUNC_2(VAR_3);
        FUNC_2(VAR_6);

        VAR_10 = FUNC_6(VAR_6, VAR_3, "stop", VAR_5);
        if (VAR_10 < 0)
                return VAR_10;

        VAR_10 = FUNC_8(VAR_3, "si", &VAR_7, &VAR_8);
        if (VAR_10 < 0)
                return VAR_10;

        if (FUNC_4(VAR_7))
                VAR_9 = VAR_1;
        else {
                VAR_9 = FUNC_5(VAR_7);
                if (VAR_9 < 0)
                        return FUNC_7(VAR_5, VAR_2, "Invalid who argument %s", VAR_7);
        }

        if (!FUNC_1(VAR_8))
                return FUNC_7(VAR_5, VAR_2, "Signal number out of range.");

        VAR_10 = FUNC_3(
                        VAR_6,
                        "kill",
                        VAR_0,
                        FUNC_0("Authentication is required to send a UNIX signal to the processes of '$(unit)'."),
                        1,
                        VAR_3,
                        VAR_5);
        if (VAR_10 < 0)
                return VAR_10;
        if (VAR_10 == 0)
                return 1;

        VAR_10 = FUNC_10(VAR_6, VAR_9, VAR_8, VAR_5);
        if (VAR_10 < 0)
                return VAR_10;

        return FUNC_9(VAR_3, ((void*)0));
}
