
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_9__ {int num_uncarried; int weight; scalar_t__* neg_digits; scalar_t__* pos_digits; } ;
struct TYPE_8__ {scalar_t__ sign; int ndigits; int weight; scalar_t__* digits; } ;
typedef TYPE_1__ NumericVar ;
typedef TYPE_2__ NumericSumAccum ;
typedef scalar_t__ NumericDigit ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__ const*) ;

__attribute__((used)) static void
FUNC_2(NumericSumAccum *VAR_2, const NumericVar *VAR_3)
{
 int32 *VAR_4;
 int VAR_5,
    VAR_6;
 int VAR_7;
 NumericDigit *VAR_8;
 if (VAR_2->num_uncarried == VAR_0 - 1)
  FUNC_0(VAR_2);





 FUNC_1(VAR_2, VAR_3);


 if (VAR_3->sign == VAR_1)
  VAR_4 = VAR_2->pos_digits;
 else
  VAR_4 = VAR_2->neg_digits;


 VAR_7 = VAR_3->ndigits;
 VAR_8 = VAR_3->digits;

 VAR_5 = VAR_2->weight - VAR_3->weight;
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
 {
  VAR_4[VAR_5] += (int32) VAR_8[VAR_6];
  VAR_5++;
 }

 VAR_2->num_uncarried++;
}
