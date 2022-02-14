
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_ull ;


 int VAR_0 ;
 int FUNC_0 (char**,int) ;

__attribute__((used)) static timelib_ull FUNC_1(char **VAR_1, int VAR_2)
{
 timelib_ull VAR_3 = 1;

 while (((**VAR_1 < '0') || (**VAR_1 > '9')) && (**VAR_1 != '+') && (**VAR_1 != '-')) {
  if (**VAR_1 == '\0') {
   return VAR_0;
  }
  ++*VAR_1;
 }

 while (**VAR_1 == '+' || **VAR_1 == '-')
 {
  if (**VAR_1 == '-') {
   VAR_3 *= -1;
  }
  ++*VAR_1;
 }
 return VAR_3 * FUNC_0(VAR_1, VAR_2);
}
