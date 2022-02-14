
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_sll ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static timelib_sll FUNC_1(timelib_sll VAR_4)
{
 timelib_sll VAR_5;
 timelib_sll VAR_6 = 0;
 timelib_sll VAR_7;

 VAR_7 = (VAR_4 - 1970) / 40000;
 if (VAR_7 != 0) {
  VAR_4 = VAR_4 - (VAR_7 * 40000);
  VAR_6 += (VAR_3 * VAR_7 * 100);
 }

 if (VAR_4 >= 1970) {
  for (VAR_5 = VAR_4 - 1; VAR_5 >= 1970; VAR_5--) {
   if (FUNC_0(VAR_5)) {
    VAR_6 += (VAR_0 * VAR_2);
   } else {
    VAR_6 += (VAR_1 * VAR_2);
   }
  }
 } else {
  for (VAR_5 = 1969; VAR_5 >= VAR_4; VAR_5--) {
   if (FUNC_0(VAR_5)) {
    VAR_6 -= (VAR_0 * VAR_2);
   } else {
    VAR_6 -= (VAR_1 * VAR_2);
   }
  }
 }
 return VAR_6;
}
