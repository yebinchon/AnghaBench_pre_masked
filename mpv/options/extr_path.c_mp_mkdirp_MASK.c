
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int *,char const*) ;

void FUNC_4(const char *VAR_0)
{
    char *VAR_1 = FUNC_3(((void*)0), VAR_0);
    char *VAR_2 = VAR_1 + 1;

    while (VAR_2) {
        VAR_2 = FUNC_1(VAR_2, '/');
        if (VAR_2)
            *VAR_2 = 0;

        FUNC_0(VAR_1, 0700);

        if (VAR_2)
            *VAR_2++ = '/';
    }

    FUNC_2(VAR_1);
}
