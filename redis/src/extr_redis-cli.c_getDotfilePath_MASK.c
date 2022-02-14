
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * sds ;


 char* FUNC_0 (char*) ;
 int * FUNC_1 (int ,char*,char*,char*) ;
 int FUNC_2 () ;
 int * FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static sds FUNC_5(char *VAR_0, char *VAR_1) {
    char *VAR_2 = ((void*)0);
    sds VAR_3 = ((void*)0);


    VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 != ((void*)0) && *VAR_2 != '\0') {
        if (!FUNC_4("/dev/null", VAR_2)) {
            return ((void*)0);
        }


        VAR_3 = FUNC_3(VAR_2);
    } else {
        char *VAR_4 = FUNC_0("HOME");
        if (VAR_4 != ((void*)0) && *VAR_4 != '\0') {

            VAR_3 = FUNC_1(FUNC_2(), "%s/%s", VAR_4, VAR_1);
        }
    }
    return VAR_3;
}
