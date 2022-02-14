
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_sll ;


 int VAR_0 ;
 int FUNC_0 (char*,char) ;

__attribute__((used)) static timelib_sll FUNC_1(char **VAR_1, timelib_sll VAR_2)
{
 timelib_sll VAR_3 = 0;

 while (**VAR_1 && !FUNC_0("AaPp", **VAR_1)) {
  ++*VAR_1;
 }
 if(!**VAR_1) {
  return VAR_0;
 }
 if (**VAR_1 == 'a' || **VAR_1 == 'A') {
  if (VAR_2 == 12) {
   VAR_3 = -12;
  }
 } else if (VAR_2 != 12) {
  VAR_3 = 12;
 }
 ++*VAR_1;
 if (**VAR_1 == '.') {
  ++*VAR_1;
  if (**VAR_1 != 'm' && **VAR_1 != 'M') {
   return VAR_0;
  }
  ++*VAR_1;
  if (**VAR_1 != '.' ) {
   return VAR_0;
  }
  ++*VAR_1;
 } else if (**VAR_1 == 'm' || **VAR_1 == 'M') {
  ++*VAR_1;
 } else {
  return VAR_0;
 }
 return VAR_3;
}
