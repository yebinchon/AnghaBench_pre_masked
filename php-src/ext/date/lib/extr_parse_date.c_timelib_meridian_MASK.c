
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_sll ;


 int FUNC_0 (char*,char) ;

__attribute__((used)) static timelib_sll FUNC_1(char **VAR_0, timelib_sll VAR_1)
{
 timelib_sll VAR_2 = 0;

 while (!FUNC_0("AaPp", **VAR_0)) {
  ++*VAR_0;
 }
 if (**VAR_0 == 'a' || **VAR_0 == 'A') {
  if (VAR_1 == 12) {
   VAR_2 = -12;
  }
 } else if (VAR_1 != 12) {
  VAR_2 = 12;
 }
 ++*VAR_0;
 if (**VAR_0 == '.') {
  ++*VAR_0;
 }
 if (**VAR_0 == 'M' || **VAR_0 == 'm') {
  ++*VAR_0;
 }
 if (**VAR_0 == '.') {
  ++*VAR_0;
 }
 return VAR_2;
}
