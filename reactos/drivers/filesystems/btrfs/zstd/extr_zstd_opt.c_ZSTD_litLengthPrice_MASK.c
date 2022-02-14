
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ priceType; size_t litLengthSumBasePrice; size_t const* litLengthFreq; } ;
typedef TYPE_1__ optState_t ;
typedef size_t U32 ;


 int VAR_0 ;
 int* VAR_1 ;
 size_t FUNC_0 (size_t const,int) ;
 size_t FUNC_1 (size_t const) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static U32 FUNC_2(U32 const VAR_3, const optState_t* const VAR_4, int VAR_5)
{
    if (VAR_4->priceType == VAR_2) return FUNC_0(VAR_3, VAR_5);


    { U32 const VAR_6 = FUNC_1(VAR_3);
        return (VAR_1[VAR_6] * VAR_0) + (VAR_4->litLengthSumBasePrice - FUNC_0(VAR_4->litLengthFreq[VAR_6], VAR_5));
    }
}
