
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,unsigned long,...) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_1)
{
 unsigned long VAR_2;

 if (VAR_0) {
  if (VAR_1 > 1000000)
   FUNC_0("%u.%06u ms", ((unsigned int) VAR_1/1000000),
    ((unsigned int) VAR_1%1000000));
  else if (VAR_1 > 100000)
   FUNC_0("%u us", ((unsigned int) VAR_1/1000));
  else if (VAR_1 > 1000)
   FUNC_0("%u.%03u us", ((unsigned int) VAR_1/1000),
    ((unsigned int) VAR_1%1000));
  else
   FUNC_0("%lu ns", VAR_1);
 } else {
  if (VAR_1 > 1000000) {
   VAR_2 = VAR_1%10000;
   if (VAR_2 >= 5000)
    VAR_1 += 10000;
   FUNC_0("%u.%02u ms", ((unsigned int) VAR_1/1000000),
    ((unsigned int) (VAR_1%1000000)/10000));
  } else if (VAR_1 > 100000) {
   VAR_2 = VAR_1%1000;
   if (VAR_2 >= 500)
    VAR_1 += 1000;
   FUNC_0("%u us", ((unsigned int) VAR_1 / 1000));
  } else if (VAR_1 > 1000) {
   VAR_2 = VAR_1%100;
   if (VAR_2 >= 50)
    VAR_1 += 100;
   FUNC_0("%u.%01u us", ((unsigned int) VAR_1/1000),
    ((unsigned int) (VAR_1%1000)/100));
  } else
   FUNC_0("%lu ns", VAR_1);
 }
 return;
}
