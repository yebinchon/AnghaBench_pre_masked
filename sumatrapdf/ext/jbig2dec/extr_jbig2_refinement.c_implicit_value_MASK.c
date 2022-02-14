
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int GRREFERENCEDX; int GRREFERENCEDY; int * GRREFERENCE; } ;
typedef TYPE_1__ Jbig2RefinementRegionParams ;
typedef int Jbig2Image ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static int
FUNC_1(const Jbig2RefinementRegionParams *VAR_0, Jbig2Image *VAR_1, int VAR_2, int VAR_3)
{
    Jbig2Image *VAR_4 = VAR_0->GRREFERENCE;
    int VAR_5 = VAR_2 - VAR_0->GRREFERENCEDX;
    int VAR_6 = VAR_3 - VAR_0->GRREFERENCEDY;
    int VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);

    return ((FUNC_0(VAR_4, VAR_5 - 1, VAR_6 - 1) == VAR_7) &&
            (FUNC_0(VAR_4, VAR_5, VAR_6 - 1) == VAR_7) &&
            (FUNC_0(VAR_4, VAR_5 + 1, VAR_6 - 1) == VAR_7) &&
            (FUNC_0(VAR_4, VAR_5 - 1, VAR_6) == VAR_7) &&
            (FUNC_0(VAR_4, VAR_5 + 1, VAR_6) == VAR_7) &&
            (FUNC_0(VAR_4, VAR_5 - 1, VAR_6 + 1) == VAR_7) &&
            (FUNC_0(VAR_4, VAR_5, VAR_6 + 1) == VAR_7) &&
            (FUNC_0(VAR_4, VAR_5 + 1, VAR_6 + 1) == VAR_7)
           )? VAR_7 : -1;
}
