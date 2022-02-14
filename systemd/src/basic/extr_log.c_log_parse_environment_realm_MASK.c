
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LogRealm ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*) ;
 int FUNC_7 (char*,char const*) ;
 int VAR_1 ;
 int FUNC_8 (int ,int *,int ) ;

void FUNC_9(LogRealm VAR_2) {


        const char *VAR_3;

        if (FUNC_2() == 1 || FUNC_0(0, ((void*)0)) < 0)



                (void) FUNC_8(VAR_1, ((void*)0), VAR_0);

        VAR_3 = FUNC_1("SYSTEMD_LOG_TARGET");
        if (VAR_3 && FUNC_4(VAR_3) < 0)
                FUNC_7("Failed to parse log target '%s'. Ignoring.", VAR_3);

        VAR_3 = FUNC_1("SYSTEMD_LOG_LEVEL");
        if (VAR_3 && FUNC_3(VAR_2, VAR_3) < 0)
                FUNC_7("Failed to parse log level '%s'. Ignoring.", VAR_3);

        VAR_3 = FUNC_1("SYSTEMD_LOG_COLOR");
        if (VAR_3 && FUNC_5(VAR_3) < 0)
                FUNC_7("Failed to parse log color '%s'. Ignoring.", VAR_3);

        VAR_3 = FUNC_1("SYSTEMD_LOG_LOCATION");
        if (VAR_3 && FUNC_6(VAR_3) < 0)
                FUNC_7("Failed to parse log location '%s'. Ignoring.", VAR_3);
}
