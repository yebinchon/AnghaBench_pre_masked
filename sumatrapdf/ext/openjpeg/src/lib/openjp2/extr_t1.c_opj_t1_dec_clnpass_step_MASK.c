
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ct; int c; int a; int curctx; } ;
struct TYPE_5__ {scalar_t__ w; TYPE_2__ mqc; } ;
typedef TYPE_1__ opj_t1_t ;
typedef TYPE_2__ opj_mqc_t ;
typedef int opj_flag_t ;
typedef int OPJ_UINT32 ;
typedef int OPJ_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *,scalar_t__,int *,int ,int ,TYPE_2__*,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(
    opj_t1_t *VAR_2,
    opj_flag_t *VAR_3,
    OPJ_INT32 *VAR_4,
    OPJ_INT32 VAR_5,
    OPJ_UINT32 VAR_6,
    OPJ_UINT32 VAR_7)
{
    OPJ_UINT32 VAR_8;

    opj_mqc_t *VAR_9 = &(VAR_2->mqc);
    FUNC_0(VAR_1, VAR_0,
                                  *VAR_3, VAR_3, VAR_2->w + 2U, VAR_4,
                                  0, VAR_6, VAR_9, VAR_9->curctx,
                                  VAR_8, VAR_9->a, VAR_9->c, VAR_9->ct, VAR_5, VAR_7);
}
