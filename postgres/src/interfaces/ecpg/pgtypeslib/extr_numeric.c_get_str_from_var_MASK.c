
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sign; int weight; int ndigits; int* digits; } ;
typedef TYPE_1__ numeric ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static char *
FUNC_4(numeric *VAR_2, int VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_2->sign == VAR_0)
 {
  VAR_4 = (char *) FUNC_2(4);
  if (VAR_4 == ((void*)0))
   return ((void*)0);
  FUNC_3(VAR_4, "NaN");
  return VAR_4;
 }




 VAR_6 = VAR_3 + VAR_2->weight + 1;
 if (VAR_6 >= 0 && VAR_2->ndigits > VAR_6)
 {
  int VAR_8 = (VAR_2->digits[VAR_6] > 4) ? 1 : 0;

  VAR_2->ndigits = VAR_6;

  while (VAR_8)
  {
   VAR_8 += VAR_2->digits[--VAR_6];
   VAR_2->digits[VAR_6] = VAR_8 % 10;
   VAR_8 /= 10;
  }

  if (VAR_6 < 0)
  {
   VAR_2->digits--;
   VAR_2->ndigits++;
   VAR_2->weight++;
  }
 }
 else
  VAR_2->ndigits = FUNC_0(0, FUNC_1(VAR_6, VAR_2->ndigits));




 if ((VAR_4 = (char *) FUNC_2(FUNC_0(0, VAR_3) + FUNC_0(0, VAR_2->weight) + 4)) == ((void*)0))
  return ((void*)0);
 VAR_5 = VAR_4;




 if (VAR_2->sign == VAR_1)
  *VAR_5++ = '-';




 VAR_6 = FUNC_0(VAR_2->weight, 0);
 VAR_7 = 0;

 while (VAR_6 >= 0)
 {
  if (VAR_6 <= VAR_2->weight && VAR_7 < VAR_2->ndigits)
   *VAR_5++ = VAR_2->digits[VAR_7++] + '0';
  else
   *VAR_5++ = '0';
  VAR_6--;
 }




 if (VAR_3 > 0)
 {
  *VAR_5++ = '.';
  while (VAR_6 >= -VAR_3)
  {
   if (VAR_6 <= VAR_2->weight && VAR_7 < VAR_2->ndigits)
    *VAR_5++ = VAR_2->digits[VAR_7++] + '0';
   else
    *VAR_5++ = '0';
   VAR_6--;
  }
 }




 *VAR_5 = '\0';
 return VAR_4;
}
