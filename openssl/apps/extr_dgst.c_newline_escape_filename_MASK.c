
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t,char const*) ;
 size_t FUNC_1 (char const*) ;

__attribute__((used)) static const char *FUNC_2(const char *VAR_0, int * VAR_1)
{
    size_t VAR_2, VAR_3 = 0, VAR_4 = FUNC_1(VAR_0), VAR_5 = 0, VAR_6 = 0;
    char *VAR_7 = ((void*)0);

    for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++)
        if (VAR_0[VAR_2] == '\n')
            VAR_5++;

    VAR_6 = VAR_4 + VAR_5 + 1;
    VAR_7 = FUNC_0(VAR_6, VAR_0);
    VAR_2 = 0;

    while(VAR_3 < VAR_4) {
        const char VAR_8 = VAR_0[VAR_3];
        if (VAR_8 == '\n') {
            VAR_7[VAR_2++] = '\\';
            VAR_7[VAR_2++] = 'n';
            *VAR_1 = 1;
        } else {
            VAR_7[VAR_2++] = VAR_8;
        }
        VAR_3++;
    }
    VAR_7[VAR_2] = '\0';
    return (const char*)VAR_7;
}
