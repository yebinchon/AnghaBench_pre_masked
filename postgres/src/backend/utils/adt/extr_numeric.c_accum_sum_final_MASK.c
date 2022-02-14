
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* int16 ;
struct TYPE_13__ {int ndigits; scalar_t__* pos_digits; scalar_t__* neg_digits; int dscale; int weight; } ;
struct TYPE_12__ {int ndigits; void** digits; void** buf; int sign; int dscale; int weight; } ;
typedef TYPE_1__ NumericVar ;
typedef TYPE_2__ NumericSumAccum ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int VAR_3 ;
 void* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(NumericSumAccum *VAR_4, NumericVar *VAR_5)
{
 int VAR_6;
 NumericVar VAR_7;
 NumericVar VAR_8;

 if (VAR_4->ndigits == 0)
 {
  FUNC_5(&VAR_3, VAR_5);
  return;
 }


 FUNC_1(VAR_4);


 FUNC_4(&VAR_7);
 FUNC_4(&VAR_8);

 VAR_7.ndigits = VAR_8.ndigits = VAR_4->ndigits;
 VAR_7.weight = VAR_8.weight = VAR_4->weight;
 VAR_7.dscale = VAR_8.dscale = VAR_4->dscale;
 VAR_7.sign = VAR_2;
 VAR_8.sign = VAR_1;

 VAR_7.buf = VAR_7.digits = FUNC_3(VAR_4->ndigits);
 VAR_8.buf = VAR_8.digits = FUNC_3(VAR_4->ndigits);

 for (VAR_6 = 0; VAR_6 < VAR_4->ndigits; VAR_6++)
 {
  FUNC_0(VAR_4->pos_digits[VAR_6] < VAR_0);
  VAR_7.digits[VAR_6] = (int16) VAR_4->pos_digits[VAR_6];

  FUNC_0(VAR_4->neg_digits[VAR_6] < VAR_0);
  VAR_8.digits[VAR_6] = (int16) VAR_4->neg_digits[VAR_6];
 }


 FUNC_2(&VAR_7, &VAR_8, VAR_5);


 FUNC_6(VAR_5);
}
