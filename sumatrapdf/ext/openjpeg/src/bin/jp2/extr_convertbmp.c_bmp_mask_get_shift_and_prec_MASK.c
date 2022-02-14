
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int OPJ_UINT32 ;



__attribute__((used)) static void FUNC_0(OPJ_UINT32 VAR_0, OPJ_UINT32* VAR_1,
                                        OPJ_UINT32* VAR_2)
{
    OPJ_UINT32 VAR_3, VAR_4;

    VAR_3 = VAR_4 = 0U;

    if (VAR_0 != 0U) {
        while ((VAR_0 & 1U) == 0U) {
            VAR_0 >>= 1;
            VAR_3++;
        }
        while (VAR_0 & 1U) {
            VAR_0 >>= 1;
            VAR_4++;
        }
    }
    *VAR_1 = VAR_3;
    *VAR_2 = VAR_4;
}
