
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ GRTEMPLATE; scalar_t__ TPGRON; int GRREFERENCEDY; int GRREFERENCEDX; } ;
struct TYPE_10__ {int number; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef TYPE_2__ Jbig2RefinementRegionParams ;
typedef int Jbig2Image ;
typedef int Jbig2Ctx ;
typedef int Jbig2ArithState ;
typedef int Jbig2ArithCx ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__ const*,int *,int *,int *) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_2__ const*,int *,int *,int *) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_2__ const*,int *,int *,int *) ;
 int FUNC_3 (int *,int ,int ,char*,int ,int ,scalar_t__,scalar_t__) ;

int
FUNC_4(Jbig2Ctx *VAR_1,
                               Jbig2Segment *VAR_2,
                               const Jbig2RefinementRegionParams *VAR_3, Jbig2ArithState *VAR_4, Jbig2Image *VAR_5, Jbig2ArithCx *VAR_6)
{
    FUNC_3(VAR_1, VAR_0, VAR_2->number,
                "decoding generic refinement region with offset %d,%x, GRTEMPLATE=%d, TPGRON=%d",
                VAR_3->GRREFERENCEDX, VAR_3->GRREFERENCEDY, VAR_3->GRTEMPLATE, VAR_3->TPGRON);

    if (VAR_3->TPGRON)
        return FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6);

    if (VAR_3->GRTEMPLATE)
        return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    else
        return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
