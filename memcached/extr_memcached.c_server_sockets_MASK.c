
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum network_transport { ____Placeholder_network_transport } network_transport ;
struct TYPE_2__ {int ssl_enabled; char* inter; } ;
typedef int FILE ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int*) ;
 int FUNC_3 (char*,int,int,int *,int) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (char*,char const*,scalar_t__) ;
 char* FUNC_9 (char*,char*,char**) ;

__attribute__((used)) static int FUNC_10(int VAR_2, enum network_transport VAR_3,
                          FILE *VAR_4) {
    bool VAR_5 = 0;






    if (VAR_0.inter == ((void*)0)) {
        return FUNC_3(VAR_0.inter, VAR_2, VAR_3, VAR_4, VAR_5);
    } else {

        char *VAR_6;
        int VAR_7 = 0;
        char *VAR_8 = FUNC_6(VAR_0.inter);

        if (VAR_8 == ((void*)0)) {
            FUNC_0(VAR_1, "Failed to allocate memory for parsing server interface string\n");
            return 1;
        }
        for (char *VAR_9 = FUNC_9(VAR_8, ";,", &VAR_6);
            VAR_9 != ((void*)0);
            VAR_9 = FUNC_9(((void*)0), ";,", &VAR_6)) {
            int VAR_10 = VAR_2;
            char *VAR_11 = ((void*)0);
            if (*VAR_9 == '[') {


                char *VAR_12 = FUNC_4(VAR_9, ']');
                if (VAR_12 == ((void*)0)) {
                    FUNC_0(VAR_1, "Invalid IPV6 address: \"%s\"", VAR_9);
                    FUNC_1(VAR_8);
                    return 1;
                }
                VAR_11 = ++VAR_9;
                *VAR_12 = '\0';
                VAR_9 = ++VAR_12;
            }

            char *VAR_13 = FUNC_4(VAR_9, ':');
            if (VAR_13 != ((void*)0)) {




                if (FUNC_4(VAR_13 + 1, ':') == ((void*)0) || VAR_11 != ((void*)0)) {
                    *VAR_13 = '\0';
                    ++VAR_13;
                    if (!FUNC_2(VAR_13, &VAR_10)) {
                        FUNC_0(VAR_1, "Invalid port number: \"%s\"", VAR_13);
                        FUNC_1(VAR_8);
                        return 1;
                    }
                }
            }

            if (VAR_11 != ((void*)0))
                VAR_9 = VAR_11;

            if (FUNC_5(VAR_9, "*") == 0) {
                VAR_9 = ((void*)0);
            }
            VAR_7 |= FUNC_3(VAR_9, VAR_10, VAR_3, VAR_4, VAR_5);
        }
        FUNC_1(VAR_8);
        return VAR_7;
    }
}
