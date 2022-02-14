
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_bus_message ;
typedef int sd_bus_error ;
typedef int UnitWriteFlags ;
typedef int Unit ;
typedef scalar_t__ ConditionType ;
typedef int Condition ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (char const*) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (scalar_t__,char const*,int,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (char const*) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (char const*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int *,int ,char*,char const*,...) ;
 int FUNC_11 (int *,char,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char*,char const**,int*,int*,char const**) ;
 int FUNC_14 (int *,int,char const*,char*,char const*,...) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(
                Unit *VAR_5,
                const char *VAR_6,
                Condition **VAR_7,
                bool VAR_8,
                sd_bus_message *VAR_9,
                UnitWriteFlags VAR_10,
                sd_bus_error *VAR_11) {

        const char *VAR_12, *VAR_13;
        int VAR_14, VAR_15, VAR_16;
        bool VAR_17 = 1;

        FUNC_2(VAR_7);

        VAR_16 = FUNC_11(VAR_9, 'a', "(sbbs)");
        if (VAR_16 < 0)
                return VAR_16;

        while ((VAR_16 = FUNC_13(VAR_9, "(sbbs)", &VAR_12, &VAR_14, &VAR_15, &VAR_13)) > 0) {
                ConditionType VAR_18;

                VAR_18 = VAR_8 ? FUNC_7(VAR_12) : FUNC_3(VAR_12);
                if (VAR_18 < 0)
                        return FUNC_10(VAR_11, VAR_2, "Invalid condition type: %s", VAR_12);

                if (VAR_18 != VAR_0) {
                        if (FUNC_8(VAR_13))
                                return FUNC_10(VAR_11, VAR_2, "Condition parameter in %s is empty", VAR_12);

                        if (FUNC_6(VAR_18) && !FUNC_9(VAR_13))
                                return FUNC_10(VAR_11, VAR_2, "Path in condition %s is not absolute: %s", VAR_12, VAR_13);
                } else
                        VAR_13 = ((void*)0);

                if (!FUNC_1(VAR_10)) {
                        Condition *VAR_19;

                        VAR_19 = FUNC_5(VAR_18, VAR_13, VAR_14, VAR_15);
                        if (!VAR_19)
                                return -VAR_1;

                        FUNC_0(VAR_4, *VAR_7, VAR_19);

                        if (VAR_18 != VAR_0)
                                FUNC_14(VAR_5, VAR_10|VAR_3, VAR_6,
                                                    "%s=%s%s%s", VAR_12,
                                                    VAR_14 ? "|" : "", VAR_15 ? "!" : "", VAR_13);
                        else
                                FUNC_14(VAR_5, VAR_10, VAR_6,
                                                    "%s=%s%s", VAR_12,
                                                    VAR_14 ? "|" : "", FUNC_15(!VAR_15));
                }

                VAR_17 = 0;
        }
        if (VAR_16 < 0)
                return VAR_16;

        VAR_16 = FUNC_12(VAR_9);
        if (VAR_16 < 0)
                return VAR_16;

        if (!FUNC_1(VAR_10) && VAR_17) {
                *VAR_7 = FUNC_4(*VAR_7);
                FUNC_14(VAR_5, VAR_10, VAR_6, "%sNull=", VAR_8 ? "Condition" : "Assert");
        }

        return 1;
}
