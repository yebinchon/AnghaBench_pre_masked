
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ INTN ;
typedef scalar_t__ CHAR16 ;


 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static INTN FUNC_3(CHAR16 *VAR_0, CHAR16 *VAR_1) {
        CHAR16 *VAR_2 = VAR_0;
        CHAR16 *VAR_3 = VAR_1;

        while (*VAR_0 || *VAR_1) {
                INTN VAR_4;

                while ((*VAR_0 && !FUNC_2(*VAR_0)) || (*VAR_1 && !FUNC_2(*VAR_1))) {
                        INTN VAR_5;

                        VAR_5 = FUNC_1(*VAR_0) - FUNC_1(*VAR_1);
                        if (VAR_5 != 0)
                                return VAR_5;
                        VAR_0++;
                        VAR_1++;
                }

                while (*VAR_0 == '0')
                        VAR_0++;
                while (*VAR_1 == '0')
                        VAR_1++;

                VAR_4 = 0;
                while (FUNC_2(*VAR_0) && FUNC_2(*VAR_1)) {
                        if (VAR_4 == 0)
                                VAR_4 = *VAR_0 - *VAR_1;
                        VAR_0++;
                        VAR_1++;
                }

                if (FUNC_2(*VAR_0))
                        return 1;
                if (FUNC_2(*VAR_1))
                        return -1;

                if (VAR_4 != 0)
                        return VAR_4;
        }

        return FUNC_0(VAR_2, VAR_3);
}
