
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ priceType; int const litSumBasePrice; int * litFreq; } ;
typedef TYPE_1__ optState_t ;
typedef int U32 ;
typedef size_t BYTE ;


 int const VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static U32 FUNC_2(const BYTE* const VAR_2, U32 const VAR_3,
                                const optState_t* const VAR_4,
                                int VAR_5)
{
    if (VAR_3 == 0) return 0;
    if (VAR_4->priceType == VAR_1)
        return (VAR_3*6) * VAR_0;


    { U32 VAR_6 = VAR_3 * VAR_4->litSumBasePrice;
        U32 VAR_7;
        for (VAR_7=0; VAR_7 < VAR_3; VAR_7++) {
            FUNC_1(FUNC_0(VAR_4->litFreq[VAR_2[VAR_7]], VAR_5) <= VAR_4->litSumBasePrice);
            VAR_6 -= FUNC_0(VAR_4->litFreq[VAR_2[VAR_7]], VAR_5);
        }
        return VAR_6;
    }
}
