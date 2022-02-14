
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINTN ;
typedef char CHAR8 ;


 scalar_t__ FUNC_0 (char*,char) ;

__attribute__((used)) static CHAR8 *FUNC_1(
                CHAR8 *VAR_0,
                CHAR8 *VAR_1,
                UINTN *VAR_2,
                CHAR8 **VAR_3,
                CHAR8 **VAR_4) {

        CHAR8 *VAR_5;
        UINTN VAR_6;
        CHAR8 *VAR_7;

skip:
        VAR_5 = VAR_0 + *VAR_2;
        if (*VAR_5 == '\0')
                return ((void*)0);

        VAR_6 = 0;
        while (VAR_5[VAR_6] && !FUNC_0((CHAR8 *)"\n\r", VAR_5[VAR_6]))
               VAR_6++;


        *VAR_2 += VAR_6;
        if (VAR_0[*VAR_2])
                (*VAR_2)++;


        if (VAR_6 == 0)
                goto skip;


        VAR_5[VAR_6] = '\0';


        while (FUNC_0((CHAR8 *)" \t", *VAR_5)) {
                VAR_5++;
                VAR_6--;
        }


        while (VAR_6 > 0 && FUNC_0((CHAR8 *)" \t", VAR_5[VAR_6-1]))
                VAR_6--;
        VAR_5[VAR_6] = '\0';

        if (*VAR_5 == '#')
                goto skip;


        VAR_7 = VAR_5;
        while (*VAR_7 && !FUNC_0(VAR_1, *VAR_7))
                VAR_7++;
        if (*VAR_7 == '\0')
                goto skip;
        *VAR_7 = '\0';
        VAR_7++;
        while (*VAR_7 && FUNC_0(VAR_1, *VAR_7))
                VAR_7++;


        if (VAR_7[0] == '"' && VAR_5[VAR_6-1] == '"') {
                VAR_7++;
                VAR_5[VAR_6-1] = '\0';
        }

        *VAR_3 = VAR_5;
        *VAR_4 = VAR_7;
        return VAR_5;
}
