
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int *,int ) ;
 long FUNC_1 () ;
 long FUNC_2 (int ,char*,char*,long*) ;
 char* FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,int ,long*) ;
 int FUNC_5 (long,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_10(void)
{
    long VAR_3;
    long VAR_4;
    char *VAR_5;
    long VAR_6;

    if (!FUNC_6(FUNC_4(VAR_0, VAR_2, &VAR_3), 0)
        || !FUNC_5(VAR_6 = FUNC_1(), 0)) {
        if (VAR_1)
            return 1;
        FUNC_7("Failure loading the configuration at line %ld", VAR_3);
        return 0;
    }
    if (VAR_1) {
        FUNC_7("Failure expected but did not happen");
        return 0;
    }

    if (!FUNC_6(FUNC_0(VAR_0, ((void*)0), 0), 0)) {
        FUNC_7("Failed in CONF_modules_load");
        return 0;
    }


    VAR_5 = FUNC_3(VAR_0, "", "RANDFILE");
    if (!FUNC_8(VAR_5) || !FUNC_9(VAR_5, "./.rnd")) {
        FUNC_7("RANDFILE incorrect");
        return 0;
    }


    VAR_4 = 0;
    if (!FUNC_5(FUNC_2(VAR_0, "CA_default", "default_days", &VAR_4), 1)
        || !FUNC_5(VAR_4, 365)) {
        FUNC_7("default_days incorrect");
        return 0;
    }


    VAR_4 = 0;
    if (!FUNC_5(FUNC_2(VAR_0, "req", "default_bits", &VAR_4), 1)
        || !FUNC_5(VAR_4, 2048)) {
        FUNC_7("default_bits incorrect");
        return 0;
    }


    VAR_5 = FUNC_3(VAR_0, "req_distinguished_name", "countryName_default");
    if (!FUNC_8(VAR_5) || !FUNC_9(VAR_5, "AU")) {
        FUNC_7("countryName_default incorrect");
        return 0;
    }

    return 1;
}
