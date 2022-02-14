
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 scalar_t__ FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_1, const char *VAR_2, void *VAR_3) {
        if (FUNC_8(VAR_1, "debug") && !VAR_2)
                FUNC_0(VAR_0);

        else if (FUNC_6(VAR_1, "systemd.log_target")) {

                if (FUNC_7(VAR_1, VAR_2))
                        return 0;

                if (FUNC_2(VAR_2) < 0)
                        FUNC_5("Failed to parse log target '%s'. Ignoring.", VAR_2);

        } else if (FUNC_6(VAR_1, "systemd.log_level")) {

                if (FUNC_7(VAR_1, VAR_2))
                        return 0;

                if (FUNC_1(VAR_2) < 0)
                        FUNC_5("Failed to parse log level '%s'. Ignoring.", VAR_2);

        } else if (FUNC_6(VAR_1, "systemd.log_color")) {

                if (FUNC_3(VAR_2 ?: "1") < 0)
                        FUNC_5("Failed to parse log color setting '%s'. Ignoring.", VAR_2);

        } else if (FUNC_6(VAR_1, "systemd.log_location")) {

                if (FUNC_4(VAR_2 ?: "1") < 0)
                        FUNC_5("Failed to parse log location setting '%s'. Ignoring.", VAR_2);
        }

        return 0;
}
