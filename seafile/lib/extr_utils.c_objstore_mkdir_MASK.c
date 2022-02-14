
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;

int
FUNC_3 (const char *VAR_2)
{
    int VAR_3;
    int VAR_4, VAR_5, VAR_6;
    static const char VAR_7[] = "0123456789abcdef";
    char VAR_8[VAR_1];

    if ( (VAR_3 = FUNC_0(VAR_2)) < 0)
        return VAR_3;

    VAR_6 = FUNC_2(VAR_2);
    FUNC_1(VAR_8, VAR_2, VAR_6);
    VAR_8[VAR_6] = VAR_0;
    VAR_8[VAR_6+3] = '\0';

    for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
        VAR_8[VAR_6+1] = VAR_7[VAR_4];
        for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
            VAR_8[VAR_6+2] = VAR_7[VAR_5];
            if ( (VAR_3 = FUNC_0(VAR_8)) < 0)
                return VAR_3;
        }
    }
    return 0;
}
