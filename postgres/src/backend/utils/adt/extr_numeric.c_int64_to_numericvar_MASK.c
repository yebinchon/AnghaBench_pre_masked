
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
typedef int int64 ;
struct TYPE_4__ {int ndigits; int weight; int* digits; scalar_t__ dscale; int sign; } ;
typedef TYPE_1__ NumericVar ;
typedef int NumericDigit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_1(int64 VAR_4, NumericVar *VAR_5)
{
 uint64 VAR_6,
    VAR_7;
 NumericDigit *VAR_8;
 int VAR_9;


 FUNC_0(VAR_5, 20 / VAR_0);
 if (VAR_4 < 0)
 {
  VAR_5->sign = VAR_2;
  VAR_6 = -VAR_4;
 }
 else
 {
  VAR_5->sign = VAR_3;
  VAR_6 = VAR_4;
 }
 VAR_5->dscale = 0;
 if (VAR_4 == 0)
 {
  VAR_5->ndigits = 0;
  VAR_5->weight = 0;
  return;
 }
 VAR_8 = VAR_5->digits + VAR_5->ndigits;
 VAR_9 = 0;
 do
 {
  VAR_8--;
  VAR_9++;
  VAR_7 = VAR_6 / VAR_1;
  *VAR_8 = VAR_6 - VAR_7 * VAR_1;
  VAR_6 = VAR_7;
 } while (VAR_6);
 VAR_5->digits = VAR_8;
 VAR_5->ndigits = VAR_9;
 VAR_5->weight = VAR_9 - 1;
}
