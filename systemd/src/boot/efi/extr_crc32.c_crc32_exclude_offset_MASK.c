
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ VOID ;
typedef scalar_t__ UINTN ;
typedef scalar_t__ UINT8 ;
typedef int UINT32 ;


 int FUNC_0 (int ,scalar_t__) ;

UINT32 FUNC_1(
                UINT32 VAR_0,
                const VOID *VAR_1,
                UINTN VAR_2,
                UINTN VAR_3,
                UINTN VAR_4) {

        const UINT8 *VAR_5 = VAR_1;
        UINT32 VAR_6 = VAR_0;
        UINTN VAR_7;

        for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
                UINT8 VAR_8 = *VAR_5++;

                if (VAR_7 >= VAR_3 && VAR_7 < VAR_3 + VAR_4)
                        VAR_8 = 0;

                VAR_6 = FUNC_0(VAR_6, VAR_8);
        }

        return VAR_6;
}
