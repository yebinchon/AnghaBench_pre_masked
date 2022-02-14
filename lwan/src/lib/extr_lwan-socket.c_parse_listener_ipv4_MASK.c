
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sa_family_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static sa_family_t FUNC_3(char *VAR_1, char **VAR_2, char **VAR_3)
{
    char *VAR_4 = FUNC_2(VAR_1, ':');
    if (!VAR_4) {
        *VAR_3 = "8080";
        if (!FUNC_0(VAR_1, '.')) {

            *VAR_2 = "0.0.0.0";
        } else {

            *VAR_2 = VAR_1;
        }
    } else {




        *VAR_4 = '\0';
        *VAR_2 = VAR_1;
        *VAR_3 = VAR_4 + 1;

        if (FUNC_1(*VAR_2, "*")) {

            *VAR_2 = "0.0.0.0";
        }
    }

    return VAR_0;
}
