
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ numresolutions; } ;
typedef TYPE_1__ opj_tcd_tilecomp_t ;
typedef scalar_t__ OPJ_UINT32 ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(opj_tcd_tilecomp_t* VAR_0,
        OPJ_UINT32 VAR_1,
        OPJ_UINT32 VAR_2,
        OPJ_UINT32 VAR_3,
        OPJ_UINT32 VAR_4,
        OPJ_UINT32 VAR_5,
        OPJ_UINT32 VAR_6,
        OPJ_UINT32* VAR_7,
        OPJ_UINT32* VAR_8,
        OPJ_UINT32* VAR_9,
        OPJ_UINT32* VAR_10)
{

    OPJ_UINT32 VAR_11 = (VAR_1 == 0) ?
                    VAR_0->numresolutions - 1 :
                    VAR_0->numresolutions - VAR_1;


    OPJ_UINT32 VAR_12 = VAR_2 & 1;
    OPJ_UINT32 VAR_13 = VAR_2 >> 1;
    if (VAR_7) {
        *VAR_7 = (VAR_11 == 0) ? VAR_3 :
                (VAR_3 <= (1U << (VAR_11 - 1)) * VAR_12) ? 0 :
                FUNC_0(VAR_3 - (1U << (VAR_11 - 1)) * VAR_12, VAR_11);
    }
    if (VAR_8) {
        *VAR_8 = (VAR_11 == 0) ? VAR_4 :
                (VAR_4 <= (1U << (VAR_11 - 1)) * VAR_13) ? 0 :
                FUNC_0(VAR_4 - (1U << (VAR_11 - 1)) * VAR_13, VAR_11);
    }
    if (VAR_9) {
        *VAR_9 = (VAR_11 == 0) ? VAR_5 :
                (VAR_5 <= (1U << (VAR_11 - 1)) * VAR_12) ? 0 :
                FUNC_0(VAR_5 - (1U << (VAR_11 - 1)) * VAR_12, VAR_11);
    }
    if (VAR_10) {
        *VAR_10 = (VAR_11 == 0) ? VAR_6 :
                (VAR_6 <= (1U << (VAR_11 - 1)) * VAR_13) ? 0 :
                FUNC_0(VAR_6 - (1U << (VAR_11 - 1)) * VAR_13, VAR_11);
    }
}
