
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ numbps; } ;
typedef TYPE_1__ opj_tcd_cblk_enc_t ;
typedef int OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(opj_tcd_cblk_enc_t* VAR_4,
                                   OPJ_UINT32 VAR_5,
                                   OPJ_INT32 VAR_6,
                                   OPJ_UINT32 VAR_7)
{

    if (VAR_7 == 2 && VAR_6 == 0) {
        return VAR_3;
    }

    if (VAR_5 & VAR_1) {
        return VAR_3;
    }

    if ((VAR_5 & VAR_0)) {

        if ((VAR_6 == ((OPJ_INT32)VAR_4->numbps - 4)) && (VAR_7 == 2)) {
            return VAR_3;
        }


        if ((VAR_6 < ((OPJ_INT32)(VAR_4->numbps) - 4)) && (VAR_7 > 0)) {
            return VAR_3;
        }
    }

    return VAR_2;
}
