
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 int FUNC_2 () ;
 int VAR_9 ;

int FUNC_3(int VAR_10, char *VAR_11[])
{
    const char *VAR_12;

    if (VAR_10 != 5) {
        FUNC_0(VAR_8, "Incorrect number of arguments\n");
        return 1;
    }

    VAR_12 = VAR_11[1];

    if (FUNC_1(VAR_12, "-crypto_first") == 0) {
        VAR_9 = VAR_0;
    } else if (FUNC_1(VAR_12, "-ssl_first") == 0) {
        VAR_9 = VAR_4;
    } else if (FUNC_1(VAR_12, "-just_crypto") == 0) {
        VAR_9 = VAR_2;
    } else if (FUNC_1(VAR_12, "-dso_ref") == 0) {
        VAR_9 = VAR_1;
    } else if (FUNC_1(VAR_12, "-no_atexit") == 0) {
        VAR_9 = VAR_3;
    } else {
        FUNC_0(VAR_8, "Unrecognised argument\n");
        return 1;
    }
    VAR_6 = VAR_11[2];
    VAR_7 = VAR_11[3];
    VAR_5 = VAR_11[4];
    if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0)) {
        FUNC_0(VAR_8, "Invalid libcrypto/libssl path\n");
        return 1;
    }





    return 0;
}
