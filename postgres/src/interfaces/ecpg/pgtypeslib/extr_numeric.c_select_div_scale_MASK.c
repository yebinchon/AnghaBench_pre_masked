
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ndigits; scalar_t__* digits; int weight; int dscale; } ;
typedef TYPE_1__ numeric ;
typedef scalar_t__ NumericDigit ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(numeric *VAR_3, numeric *VAR_4, int *VAR_5)
{
 int VAR_6,
    VAR_7,
    VAR_8,
    VAR_9;
 NumericDigit VAR_10,
    VAR_11;
 int VAR_12;
 VAR_6 = 0;
 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_3->ndigits; VAR_9++)
 {
  VAR_10 = VAR_3->digits[VAR_9];
  if (VAR_10 != 0)
  {
   VAR_6 = VAR_3->weight - VAR_9;
   break;
  }
 }

 VAR_7 = 0;
 VAR_11 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_4->ndigits; VAR_9++)
 {
  VAR_11 = VAR_4->digits[VAR_9];
  if (VAR_11 != 0)
  {
   VAR_7 = VAR_4->weight - VAR_9;
   break;
  }
 }





 VAR_8 = VAR_6 - VAR_7;
 if (VAR_10 <= VAR_11)
  VAR_8--;


 VAR_12 = VAR_2 - VAR_8;
 VAR_12 = FUNC_0(VAR_12, VAR_3->dscale);
 VAR_12 = FUNC_0(VAR_12, VAR_4->dscale);
 VAR_12 = FUNC_0(VAR_12, VAR_1);
 VAR_12 = FUNC_1(VAR_12, VAR_0);


 *VAR_5 = VAR_12 + 4;

 return VAR_12;
}
