
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sa_family_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char) ;

__attribute__((used)) static sa_family_t FUNC_2(char *VAR_2, char **VAR_3, char **VAR_4)
{
    char *VAR_5 = FUNC_1(VAR_2, ':');
    if (!VAR_5)
        return VAR_1;

    if (*(VAR_5 - 1) == ']') {

        *(VAR_5 - 1) = '\0';
        *VAR_3 = VAR_2 + 1;
        *VAR_4 = VAR_5 + 1;
    } else {

        VAR_2[FUNC_0(VAR_2) - 1] = '\0';
        *VAR_3 = VAR_2 + 1;
        *VAR_4 = "8080";
    }

    return VAR_0;
}
