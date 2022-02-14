
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U32 ;
typedef scalar_t__ BYTE ;


 scalar_t__ FUNC_0 (scalar_t__ const*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static unsigned
FUNC_2(const BYTE* VAR_0, const BYTE* const VAR_1, U32 VAR_2)
{
    const BYTE* const VAR_3 = VAR_0;

    while (FUNC_1(VAR_0 >= VAR_1+4)) {
        if (FUNC_0(VAR_0-4) != VAR_2) break;
        VAR_0 -= 4;
    }
    { const BYTE* VAR_4 = (const BYTE*)(&VAR_2) + 3;
        while (FUNC_1(VAR_0>VAR_1)) {
            if (VAR_0[-1] != *VAR_4) break;
            VAR_0--; VAR_4--;
    } }
    return (unsigned)(VAR_3 - VAR_0);
}
