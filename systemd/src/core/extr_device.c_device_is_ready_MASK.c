
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_device ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int *,char*,char const**) ;

__attribute__((used)) static bool FUNC_4(sd_device *VAR_0) {
        const char *VAR_1;

        FUNC_0(VAR_0);

        if (FUNC_1(VAR_0) > 0)
                return 0;

        if (FUNC_3(VAR_0, "SYSTEMD_READY", &VAR_1) < 0)
                return 1;

        return FUNC_2(VAR_1) != 0;
}
