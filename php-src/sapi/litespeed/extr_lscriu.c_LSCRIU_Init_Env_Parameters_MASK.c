
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ GlobalCounterType_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (char const*) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int VAR_4 ;
 int FUNC_8 (char*,int ,...) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_9(void)
{
    const char *VAR_6;
    int VAR_7;

    VAR_6 = FUNC_4("LSAPI_INITIAL_START");
    if (!VAR_6)
        VAR_6 = FUNC_4("LSAPI_BACKEND_INITIAL_START");
    if (VAR_6) {
        VAR_7 = FUNC_3(VAR_6);

        if (VAR_7 > 0) {
            FUNC_8("LSCRIU (%d): Set start requests based on environment (%d)\n",
                       FUNC_5(), VAR_7);
            FUNC_2(VAR_7);
        } else {
            FUNC_8("LSCRIU (%d): LSAPI_INITIAL_START set to 0 disabled\n",
                       FUNC_5());
            return 0;
        }
    } else {
        FUNC_8("LSCRIU (%d): LSAPI_INITIAL_START NOT set - disabled\n",
                   FUNC_5());
        return 0;
    }
    if (FUNC_0()) {
        FUNC_8("LSCRIU (%d): Listening...\n", FUNC_5());
        GlobalCounterType_t VAR_8 = VAR_1;
        char *VAR_9;
        if ((VAR_9 = FUNC_4("LSAPI_CRIU_USE_SHM"))) {




            if ((*VAR_9 == 'S') || (*VAR_9 == 's'))
                VAR_8 = VAR_2;

        }
        else if ((VAR_9 = FUNC_4("LSAPI_SIGNALS"))) {
            if ((*VAR_9 == '1') ||
                (*VAR_9 == 'Y') ||
                (*VAR_9 == 'y') ||
                (*VAR_9 == 'T') ||
                (*VAR_9 == 't') ||
                (((*VAR_9 == 'O') || (*VAR_9 == 'o')) &&
                 ((*(VAR_9 + 1) == 'N') || (*(VAR_9 + 1) == 'n'))))
                VAR_8 = VAR_2;
            else if (*VAR_9 == 2)
                VAR_8 = VAR_0;

        }
        if (VAR_8 != VAR_1) {
            FUNC_8("LSCRIU (%d): Use %s\n", FUNC_5(),
                       VAR_8 == VAR_2 ? "signals" : "pipe");
            FUNC_7(VAR_3, VAR_4);
        }
        else
            FUNC_8("LSCRIU (%d): Use shared memory\n", FUNC_5());
        FUNC_1(VAR_8);
    }
    else
        FUNC_8("LSCRIU (%d): NOT Listening\n", FUNC_5());

    char *VAR_10 = ((void*)0);
    VAR_10 = FUNC_4("LSAPI_CRIU");



    if (VAR_10) {
        if (*VAR_10 == '0') {
             FUNC_8("LSCRIU (%d): Disabled by environment.\n", FUNC_5());
             FUNC_2(0);
        }
        else if (*VAR_10 == '2') {
            FUNC_8("LSCRIU (%d): Disabled by environment.\n", FUNC_5());
            VAR_5 = 1;
        }
    }

    if (VAR_5 && FUNC_6() == -1)
        FUNC_2(0);


    return 0;
}
