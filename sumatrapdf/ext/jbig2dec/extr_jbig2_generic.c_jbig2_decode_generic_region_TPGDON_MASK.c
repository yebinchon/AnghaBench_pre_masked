
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int GBTEMPLATE; } ;
struct TYPE_13__ {int number; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef int Jbig2Image ;
typedef TYPE_2__ Jbig2GenericRegionParams ;
typedef int Jbig2Ctx ;
typedef int Jbig2ArithState ;
typedef int Jbig2ArithCx ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,TYPE_2__ const*,int *,int *,int *) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_2__ const*,int *,int *,int *) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_2__ const*,int *,int *,int *) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_2__ const*,int *,int *,int *) ;
 int FUNC_4 (int *,int ,int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(Jbig2Ctx *VAR_1,
                                   Jbig2Segment *VAR_2,
                                   const Jbig2GenericRegionParams *VAR_3, Jbig2ArithState *VAR_4, Jbig2Image *VAR_5, Jbig2ArithCx *VAR_6)
{
    switch (VAR_3->GBTEMPLATE) {
    case 0:
        return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    case 1:
        return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    case 2:
        return FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    case 3:
        return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    }

    return FUNC_4(VAR_1, VAR_0, VAR_2->number, "unsupported GBTEMPLATE (%d)", VAR_3->GBTEMPLATE);
}
