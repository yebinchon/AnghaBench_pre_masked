
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int reg_t ;
typedef int pattern ;
typedef int U32 ;
typedef scalar_t__ const BYTE ;


 int FUNC_0 (int const) ;
 scalar_t__ FUNC_1 () ;
 int const FUNC_2 (scalar_t__ const*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static unsigned
FUNC_4(const BYTE* VAR_0, const BYTE* const VAR_1, U32 const VAR_2)
{
    const BYTE* const VAR_3 = VAR_0;
    reg_t const VAR_4 = (sizeof(VAR_4)==8) ? (reg_t)VAR_2 + (((reg_t)VAR_2) << 32) : VAR_2;

    while (FUNC_3(VAR_0 < VAR_1-(sizeof(VAR_4)-1))) {
        reg_t const VAR_5 = FUNC_2(VAR_0) ^ VAR_4;
        if (!VAR_5) { VAR_0+=sizeof(VAR_4); continue; }
        VAR_0 += FUNC_0(VAR_5);
        return (unsigned)(VAR_0 - VAR_3);
    }

    if (FUNC_1()) {
        reg_t VAR_6 = VAR_4;
        while ((VAR_0<VAR_1) && (*VAR_0 == (BYTE)VAR_6)) {
            VAR_0++; VAR_6 >>= 8;
        }
    } else {
        U32 VAR_7 = (sizeof(VAR_4)*8) - 8;
        while (VAR_0 < VAR_1) {
            BYTE const VAR_8 = (BYTE)(VAR_4 >> VAR_7);
            if (*VAR_0 != VAR_8) break;
            VAR_0 ++; VAR_7 -= 8;
        }
    }

    return (unsigned)(VAR_0 - VAR_3);
}
