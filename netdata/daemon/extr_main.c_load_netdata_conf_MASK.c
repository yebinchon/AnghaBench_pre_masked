
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(char *VAR_3, char VAR_4) {
    VAR_0 = 0;

    int VAR_5 = 0;

    if(VAR_3 && *VAR_3) {
        VAR_5 = FUNC_0(VAR_3, VAR_4);
        if(!VAR_5)
            FUNC_1("CONFIG: cannot load config file '%s'.", VAR_3);
    }
    else {
        VAR_3 = FUNC_4(VAR_2, "netdata.conf");

        VAR_5 = FUNC_0(VAR_3, VAR_4);
        if(!VAR_5) {
            FUNC_3("CONFIG: cannot load user config '%s'. Will try the stock version.", VAR_3);
            FUNC_2(VAR_3);

            VAR_3 = FUNC_4(VAR_1, "netdata.conf");
            VAR_5 = FUNC_0(VAR_3, VAR_4);
            if(!VAR_5)
                FUNC_3("CONFIG: cannot load stock config '%s'. Running with internal defaults.", VAR_3);
        }

        FUNC_2(VAR_3);
    }

    return VAR_5;
}
