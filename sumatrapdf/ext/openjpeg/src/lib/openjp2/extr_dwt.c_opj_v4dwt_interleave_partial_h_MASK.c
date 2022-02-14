
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ win_l_x0; scalar_t__ win_l_x1; int win_h_x0; scalar_t__ win_h_x1; scalar_t__ cas; scalar_t__ wavelet; scalar_t__ sn; } ;
typedef TYPE_1__ opj_v4dwt_t ;
typedef int opj_sparse_array_int32_t ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(opj_v4dwt_t* VAR_1,
        opj_sparse_array_int32_t* VAR_2,
        OPJ_UINT32 VAR_3,
        OPJ_UINT32 VAR_4)
{
    OPJ_UINT32 VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        OPJ_BOOL VAR_6;
        VAR_6 = FUNC_2(VAR_2,
                                          VAR_1->win_l_x0, VAR_3 + VAR_5,
                                          VAR_1->win_l_x1, VAR_3 + VAR_5 + 1,

                                          (OPJ_INT32*)(VAR_1->wavelet + VAR_1->cas + 2 * VAR_1->win_l_x0) + VAR_5,
                                          8, 0, VAR_0);
        FUNC_1(VAR_6);
        VAR_6 = FUNC_2(VAR_2,
                                          (OPJ_UINT32)VAR_1->sn + VAR_1->win_h_x0, VAR_3 + VAR_5,
                                          (OPJ_UINT32)VAR_1->sn + VAR_1->win_h_x1, VAR_3 + VAR_5 + 1,

                                          (OPJ_INT32*)(VAR_1->wavelet + 1 - VAR_1->cas + 2 * VAR_1->win_h_x0) + VAR_5,
                                          8, 0, VAR_0);
        FUNC_1(VAR_6);
        FUNC_0(VAR_6);
    }
}
