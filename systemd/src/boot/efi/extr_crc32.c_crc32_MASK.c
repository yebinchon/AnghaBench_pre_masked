
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ UINTN ;
typedef int UINT8 ;
typedef int UINT32 ;


 int FUNC_0 (int ,int ) ;

UINT32 FUNC_1(UINT32 VAR_0, const VOID *VAR_1, UINTN VAR_2) {
        const UINT8 *VAR_3 = VAR_1;
        UINT32 VAR_4 = VAR_0;

        while (VAR_2 > 0) {
                VAR_4 = FUNC_0(VAR_4, *VAR_3++);
                VAR_2--;
        }

        return VAR_4;
}
