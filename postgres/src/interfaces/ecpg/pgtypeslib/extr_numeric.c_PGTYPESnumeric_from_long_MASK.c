
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rscale; int dscale; int weight; long* digits; int sign; } ;
typedef TYPE_1__ numeric ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

int
FUNC_1(signed long int VAR_3, numeric *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 signed long int VAR_7 = VAR_3;
 signed long int VAR_8;
 signed long int VAR_9;

 if (VAR_7 < 0)
 {
  VAR_7 *= -1;
  VAR_4->sign = VAR_1;
 }
 else
  VAR_4->sign = VAR_2;

 VAR_9 = 1;
 do
 {
  VAR_5++;
  VAR_9 *= 10;
 } while (VAR_9 - 1 < VAR_7 && VAR_9 <= VAR_0 / 10);

 if (VAR_9 > VAR_0 / 10)
 {

  VAR_5 += 2;
 }
 else
 {

  VAR_5++;
  VAR_9 /= 10;
 }

 if (FUNC_0(VAR_4, VAR_5) < 0)
  return -1;

 VAR_4->rscale = 1;
 VAR_4->dscale = 1;
 VAR_4->weight = VAR_5 - 2;

 VAR_6 = 0;
 do
 {
  VAR_8 = VAR_7 - (VAR_7 % VAR_9);
  VAR_4->digits[VAR_6] = VAR_8 / VAR_9;
  VAR_7 -= VAR_8;
  VAR_6++;
  VAR_9 /= 10;






 } while (VAR_7 > 0);

 return 0;
}
