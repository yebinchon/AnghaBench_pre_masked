
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int GRREFERENCEDX; int GRREFERENCEDY; int * GRREFERENCE; } ;
typedef TYPE_1__ Jbig2RefinementRegionParams ;
typedef int Jbig2Image ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static uint32_t
FUNC_1(const Jbig2RefinementRegionParams *VAR_0, Jbig2Image *VAR_1, int VAR_2, int VAR_3)
{
    Jbig2Image *VAR_4 = VAR_0->GRREFERENCE;
    const int VAR_5 = VAR_0->GRREFERENCEDX;
    const int VAR_6 = VAR_0->GRREFERENCEDY;
    uint32_t VAR_7;

    VAR_7 = FUNC_0(VAR_1, VAR_2 - 1, VAR_3 + 0);
    VAR_7 |= FUNC_0(VAR_1, VAR_2 + 1, VAR_3 - 1) << 1;
    VAR_7 |= FUNC_0(VAR_1, VAR_2 + 0, VAR_3 - 1) << 2;
    VAR_7 |= FUNC_0(VAR_1, VAR_2 - 1, VAR_3 - 1) << 3;
    VAR_7 |= FUNC_0(VAR_4, VAR_2 - VAR_5 + 1, VAR_3 - VAR_6 + 1) << 4;
    VAR_7 |= FUNC_0(VAR_4, VAR_2 - VAR_5 + 0, VAR_3 - VAR_6 + 1) << 5;
    VAR_7 |= FUNC_0(VAR_4, VAR_2 - VAR_5 + 1, VAR_3 - VAR_6 + 0) << 6;
    VAR_7 |= FUNC_0(VAR_4, VAR_2 - VAR_5 + 0, VAR_3 - VAR_6 + 0) << 7;
    VAR_7 |= FUNC_0(VAR_4, VAR_2 - VAR_5 - 1, VAR_3 - VAR_6 + 0) << 8;
    VAR_7 |= FUNC_0(VAR_4, VAR_2 - VAR_5 + 0, VAR_3 - VAR_6 - 1) << 9;
    return VAR_7;
}
