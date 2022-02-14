
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int buf ;


 scalar_t__ FUNC_0 (int ,char*,int) ;
 int * VAR_0 ;
 char* FUNC_1 (size_t) ;

char *FUNC_2(const char *VAR_1)
{
    char *VAR_2, *VAR_3;
    const char *VAR_4;
    size_t VAR_5;

    VAR_5 = 0;
    for (VAR_4 = VAR_1; *VAR_4; VAR_4++) {
        char VAR_6[4];
        VAR_5 += FUNC_0(VAR_0[(uint8_t)*VAR_4], VAR_6, sizeof(VAR_6));
    }

    if (VAR_5 == (size_t)-1)
        return ((void*)0);
    VAR_2 = FUNC_1(VAR_5 + 1);
    if (!VAR_2)
        return ((void*)0);

    for (VAR_4 = VAR_1, VAR_3 = VAR_2; *VAR_4; VAR_4++) {
        VAR_3 += FUNC_0(VAR_0[(uint8_t)*VAR_4], VAR_3, VAR_2 + VAR_5 - VAR_3);
    }
    *VAR_3 = '\0';

    return VAR_2;
}
