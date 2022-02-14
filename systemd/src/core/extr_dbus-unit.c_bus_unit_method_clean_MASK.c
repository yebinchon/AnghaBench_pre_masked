
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int id; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ Unit ;
typedef unsigned int ExecDirectoryType ;
typedef unsigned int ExecCleanMask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char*,int ,int ,int,TYPE_1__*,int *) ;
 unsigned int FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,char*,int *) ;
 int FUNC_5 (int *,int ,char*,...) ;
 int FUNC_6 (TYPE_1__*,char,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*,char const**) ;
 int FUNC_9 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (TYPE_1__*,unsigned int) ;

int FUNC_12(sd_bus_message *VAR_9, void *VAR_10, sd_bus_error *VAR_11) {
        ExecCleanMask VAR_12 = 0;
        Unit *VAR_13 = VAR_10;
        int VAR_14;

        FUNC_1(VAR_9);
        FUNC_1(VAR_13);

        VAR_14 = FUNC_4(VAR_13, VAR_9, "stop", VAR_11);
        if (VAR_14 < 0)
                return VAR_14;

        VAR_14 = FUNC_6(VAR_9, 'a', "s");
        if (VAR_14 < 0)
                return VAR_14;

        for (;;) {
                const char *VAR_15;

                VAR_14 = FUNC_8(VAR_9, "s", &VAR_15);
                if (VAR_14 < 0)
                        return VAR_14;
                if (VAR_14 == 0)
                        break;

                if (FUNC_10(VAR_15, "all"))
                        VAR_12 |= VAR_6;
                else {
                        ExecDirectoryType VAR_16;

                        VAR_16 = FUNC_3(VAR_15);
                        if (VAR_16 < 0)
                                return FUNC_5(VAR_11, VAR_7, "Invalid resource type: %s", VAR_15);

                        VAR_12 |= 1U << VAR_16;
                }
        }

        VAR_14 = FUNC_7(VAR_9);
        if (VAR_14 < 0)
                return VAR_14;

        VAR_14 = FUNC_2(
                        VAR_13,
                        "clean",
                        VAR_2,
                        FUNC_0("Authentication is required to delete files and directories associated with '$(unit)'."),
                        1,
                        VAR_9,
                        VAR_11);
        if (VAR_14 < 0)
                return VAR_14;
        if (VAR_14 == 0)
                return 1;

        VAR_14 = FUNC_11(VAR_13, VAR_12);
        if (VAR_14 == -VAR_4)
                return FUNC_5(VAR_11, VAR_8, "Unit '%s' does not supporting cleaning.", VAR_13->id);
        if (VAR_14 == -VAR_5)
                return FUNC_5(VAR_11, VAR_0, "No matching resources found.");
        if (VAR_14 == -VAR_3)
                return FUNC_5(VAR_11, VAR_1, "Unit is not inactive or has pending job.");
        if (VAR_14 < 0)
                return VAR_14;

        return FUNC_9(VAR_9, ((void*)0));
}
