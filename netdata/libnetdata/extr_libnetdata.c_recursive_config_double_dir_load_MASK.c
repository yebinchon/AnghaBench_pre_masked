
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; char* d_name; } ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,char*,...) ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 struct dirent* FUNC_7 (int *) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char const*,char const*) ;
 size_t FUNC_10 (char*) ;

void FUNC_11(const char *VAR_5, const char *VAR_6, const char *VAR_7, int (*VAR_8)(const char *VAR_9, void *VAR_10), void *VAR_11, size_t VAR_12) {
    if(VAR_12 > 3) {
        FUNC_2("CONFIG: Max directory depth reached while reading user path '%s', stock path '%s', subpath '%s'", VAR_5, VAR_6, VAR_7);
        return;
    }

    char *VAR_13 = FUNC_9(VAR_5, VAR_7);
    char *VAR_14 = FUNC_9(VAR_6, VAR_7);

    FUNC_1(VAR_4, "CONFIG traversing user-config directory '%s', stock config directory '%s'", VAR_13, VAR_14);

    DIR *VAR_15 = FUNC_4(VAR_13);
    if (!VAR_15) {
        FUNC_2("CONFIG cannot open user-config directory '%s'.", VAR_13);
    }
    else {
        struct dirent *VAR_16 = ((void*)0);
        while((VAR_16 = FUNC_7(VAR_15))) {
            if(VAR_16->d_type == VAR_0 || VAR_16->d_type == VAR_1) {
                if( !VAR_16->d_name[0] ||
                    (VAR_16->d_name[0] == '.' && VAR_16->d_name[1] == '\0') ||
                    (VAR_16->d_name[0] == '.' && VAR_16->d_name[1] == '.' && VAR_16->d_name[2] == '\0')
                        ) {
                    FUNC_1(VAR_4, "CONFIG ignoring user-config directory '%s/%s'", VAR_13, VAR_16->d_name);
                    continue;
                }

                if(FUNC_5(VAR_13, VAR_16->d_name)) {
                    FUNC_11(VAR_13, VAR_14, VAR_16->d_name, VAR_8, VAR_11, VAR_12 + 1);
                    continue;
                }
            }

            if(VAR_16->d_type == VAR_3 || VAR_16->d_type == VAR_2 || VAR_16->d_type == VAR_1) {
                size_t VAR_17 = FUNC_10(VAR_16->d_name);
                if(FUNC_6(VAR_13, VAR_16->d_name) &&
                   VAR_17 > 5 && !FUNC_8(&VAR_16->d_name[VAR_17 - 5], ".conf")) {
                    char *VAR_18 = FUNC_9(VAR_13, VAR_16->d_name);
                    FUNC_1(VAR_4, "CONFIG calling callback for user file '%s'", VAR_18);
                    VAR_8(VAR_18, VAR_11);
                    FUNC_3(VAR_18);
                    continue;
                }
            }

            FUNC_1(VAR_4, "CONFIG ignoring user-config file '%s/%s' of type %d", VAR_13, VAR_16->d_name, (int)VAR_16->d_type);
        }

        FUNC_0(VAR_15);
    }

    FUNC_1(VAR_4, "CONFIG traversing stock config directory '%s', user config directory '%s'", VAR_14, VAR_13);

    VAR_15 = FUNC_4(VAR_14);
    if (!VAR_15) {
        FUNC_2("CONFIG cannot open stock config directory '%s'.", VAR_14);
    }
    else {
        struct dirent *VAR_19 = ((void*)0);
        while((VAR_19 = FUNC_7(VAR_15))) {
            if(VAR_19->d_type == VAR_0 || VAR_19->d_type == VAR_1) {
                if( !VAR_19->d_name[0] ||
                    (VAR_19->d_name[0] == '.' && VAR_19->d_name[1] == '\0') ||
                    (VAR_19->d_name[0] == '.' && VAR_19->d_name[1] == '.' && VAR_19->d_name[2] == '\0')
                        ) {
                    FUNC_1(VAR_4, "CONFIG ignoring stock config directory '%s/%s'", VAR_14, VAR_19->d_name);
                    continue;
                }

                if(FUNC_5(VAR_14, VAR_19->d_name)) {



                    if(!FUNC_5(VAR_13, VAR_19->d_name))
                        FUNC_11(VAR_13, VAR_14, VAR_19->d_name, VAR_8, VAR_11, VAR_12 + 1);

                    continue;
                }
            }

            if(VAR_19->d_type == VAR_3 || VAR_19->d_type == VAR_2 || VAR_19->d_type == VAR_1) {
                size_t VAR_20 = FUNC_10(VAR_19->d_name);
                if(FUNC_6(VAR_14, VAR_19->d_name) && !FUNC_6(VAR_13, VAR_19->d_name) &&
                   VAR_20 > 5 && !FUNC_8(&VAR_19->d_name[VAR_20 - 5], ".conf")) {
                    char *VAR_21 = FUNC_9(VAR_14, VAR_19->d_name);
                    FUNC_1(VAR_4, "CONFIG calling callback for stock file '%s'", VAR_21);
                    VAR_8(VAR_21, VAR_11);
                    FUNC_3(VAR_21);
                    continue;
                }

            }

            FUNC_1(VAR_4, "CONFIG ignoring stock-config file '%s/%s' of type %d", VAR_13, VAR_19->d_name, (int)VAR_19->d_type);
        }

        FUNC_0(VAR_15);
    }

    FUNC_1(VAR_4, "CONFIG done traversing user-config directory '%s', stock config directory '%s'", VAR_13, VAR_14);

    FUNC_3(VAR_13);
    FUNC_3(VAR_14);
}
