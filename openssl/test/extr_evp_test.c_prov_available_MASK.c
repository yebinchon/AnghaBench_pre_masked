
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static int FUNC_2(char *VAR_0)
{
    char *VAR_1;
    int VAR_2 = 1;

    while (VAR_2) {
        for (; FUNC_1(*VAR_0); VAR_0++)
            continue;
        if (*VAR_0 == '\0')
            break;
        for (VAR_1 = VAR_0; *VAR_1 != '\0' && !FUNC_1(*VAR_1); VAR_1++)
            continue;
        if (*VAR_1 == '\0')
            VAR_2 = 0;
        else
            *VAR_1 = '\0';
        if (FUNC_0(((void*)0), VAR_0))
            return 1;
    }
    return 0;
}
