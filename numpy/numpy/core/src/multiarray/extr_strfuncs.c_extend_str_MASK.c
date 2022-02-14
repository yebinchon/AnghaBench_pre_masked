
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Py_ssize_t ;


 char* FUNC_0 (char*,int) ;

__attribute__((used)) static char *
FUNC_1(char **VAR_0, Py_ssize_t VAR_1, Py_ssize_t *VAR_2)
{
    char *VAR_3 = *VAR_0;
    Py_ssize_t VAR_4;

    if (VAR_1 >= *VAR_2 - 16) {
        VAR_4 = *VAR_2 * 2;

        if (VAR_4 <= *VAR_2) {
            return ((void*)0);
        }
        VAR_3 = FUNC_0(*VAR_0, VAR_4);
        if (VAR_3 != ((void*)0)) {
            *VAR_0 = VAR_3;
            *VAR_2 = VAR_4;
        }
    }
    return VAR_3;
}
