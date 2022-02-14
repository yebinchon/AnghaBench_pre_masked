
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_4__ {int ndigits; int dscale; int weight; int num_uncarried; void* neg_digits; void* pos_digits; } ;
typedef TYPE_1__ NumericSumAccum ;


 int FUNC_0 (void*,void*,int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(NumericSumAccum *VAR_0, NumericSumAccum *VAR_1)
{
 VAR_0->pos_digits = FUNC_1(VAR_1->ndigits * sizeof(int32));
 VAR_0->neg_digits = FUNC_1(VAR_1->ndigits * sizeof(int32));

 FUNC_0(VAR_0->pos_digits, VAR_1->pos_digits, VAR_1->ndigits * sizeof(int32));
 FUNC_0(VAR_0->neg_digits, VAR_1->neg_digits, VAR_1->ndigits * sizeof(int32));
 VAR_0->num_uncarried = VAR_1->num_uncarried;
 VAR_0->ndigits = VAR_1->ndigits;
 VAR_0->weight = VAR_1->weight;
 VAR_0->dscale = VAR_1->dscale;
}
