
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINTN ;
typedef scalar_t__ INTN ;
typedef int CHAR8 ;
typedef char CHAR16 ;


 char* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*) ;

CHAR16 *FUNC_3(CHAR8 *VAR_0) {
        UINTN VAR_1;
        UINTN VAR_2;
        UINTN VAR_3;
        CHAR16 *VAR_4;

        VAR_2 = FUNC_1(VAR_0);
        VAR_4 = FUNC_0((VAR_2 + 1) * sizeof(CHAR16));

        VAR_1 = 0;
        VAR_3 = 0;
        while (VAR_3 < VAR_2) {
                INTN VAR_5;

                VAR_5 = FUNC_2(VAR_0 + VAR_3, VAR_4 + VAR_1);
                if (VAR_5 <= 0) {

                        VAR_3++;
                        continue;
                }

                VAR_1++;
                VAR_3 += VAR_5;
        }
        VAR_4[VAR_1] = '\0';
        return VAR_4;
}
