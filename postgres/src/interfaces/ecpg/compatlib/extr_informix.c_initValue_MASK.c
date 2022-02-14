
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long val; char sign; int maxdigits; int digits; int remaining; char* val_string; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int
FUNC_2(long VAR_2)
{
 int VAR_3,
    VAR_4;
 long VAR_5,
    VAR_6;


 VAR_1.val = VAR_2 >= 0 ? VAR_2 : VAR_2 * (-1);
 VAR_1.sign = VAR_2 >= 0 ? '+' : '-';
 VAR_1.maxdigits = FUNC_0(2) * (8 * sizeof(long) - 1);


 VAR_3 = 0;
 VAR_5 = 1;
 do
 {
  VAR_3++;
  VAR_5 *= 10;
 }
 while ((VAR_5 - 1) < VAR_1.val && VAR_5 <= VAR_0 / 10);

 if (VAR_5 <= VAR_0 / 10)
 {
  VAR_1.digits = VAR_3;
  VAR_5 /= 10;
 }
 else
  VAR_1.digits = VAR_3 + 1;

 VAR_1.remaining = VAR_1.digits;


 if ((VAR_1.val_string = (char *) FUNC_1(VAR_1.digits + 1)) == ((void*)0))
  return -1;
 VAR_6 = VAR_1.val;
 for (VAR_3 = VAR_1.digits, VAR_4 = 0; VAR_3 > 0; VAR_3--, VAR_4++)
 {
  VAR_1.val_string[VAR_4] = VAR_6 / VAR_5 + '0';
  VAR_6 = VAR_6 % VAR_5;
  VAR_5 /= 10;
 }
 VAR_1.val_string[VAR_1.digits] = '\0';
 return 0;
}
