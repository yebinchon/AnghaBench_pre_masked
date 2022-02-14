
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int lfWidth; } ;
struct TYPE_6__ {int tmAscent; int tmDescent; int tmInternalLeading; } ;
struct TYPE_7__ {scalar_t__ otmEMSquare; TYPE_1__ otmTextMetrics; } ;
typedef TYPE_2__ OUTLINETEXTMETRICW ;
typedef TYPE_3__ LOGFONTW ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int ) ;

__attribute__((used)) static void FUNC_2(const OUTLINETEXTMETRICW *VAR_0, const LOGFONTW *VAR_1,
        int VAR_2, int VAR_3, double *VAR_4, double *VAR_5)
{
    int VAR_6 = VAR_0->otmTextMetrics.tmAscent + VAR_0->otmTextMetrics.tmDescent - VAR_0->otmTextMetrics.tmInternalLeading;

    FUNC_1("emHeight %i lfWidth %i\n",VAR_6, VAR_1->lfWidth);
    *VAR_4 = (VAR_2 * VAR_6) / (double)VAR_0->otmEMSquare;
    *VAR_5 = (VAR_3 * VAR_6) / (double)VAR_0->otmEMSquare;
    if (VAR_1->lfWidth)
        FUNC_0("Font with lfWidth set not handled properly.\n");
}
