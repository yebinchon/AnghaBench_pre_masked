
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ndigits; int weight; int* digits; } ;
typedef TYPE_1__ NumericVar ;


 int FUNC_0 (double) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (double) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__ const*,int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(const NumericVar *VAR_5)
{
 int VAR_6;

 if (FUNC_1(VAR_5, &VAR_4) >= 0 &&
  FUNC_1(VAR_5, &VAR_3) <= 0)
 {






  NumericVar VAR_7;

  FUNC_3(&VAR_7);
  FUNC_6(VAR_5, &VAR_2, &VAR_7);

  if (VAR_7.ndigits > 0)
  {

   VAR_6 = VAR_7.weight * VAR_0 + (int) FUNC_5(VAR_7.digits[0]);
  }
  else
  {

   VAR_6 = 0;
  }

  FUNC_2(&VAR_7);
 }
 else
 {





  if (VAR_5->ndigits > 0)
  {
   int VAR_8;
   int VAR_9;
   double VAR_10;

   VAR_8 = VAR_5->digits[0];
   VAR_9 = VAR_5->weight * VAR_0;

   if (VAR_5->ndigits > 1)
   {
    VAR_8 = VAR_8 * VAR_1 + VAR_5->digits[1];
    VAR_9 -= VAR_0;
   }






   VAR_10 = FUNC_4((double) VAR_8) + VAR_9 * 2.302585092994046;
   VAR_6 = (int) FUNC_5(FUNC_0(VAR_10));
  }
  else
  {

   VAR_6 = 0;
  }
 }

 return VAR_6;
}
