
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timelib_sll ;



__attribute__((used)) static char *FUNC_0(timelib_sll VAR_0)
{
 if (VAR_0 >= 10 && VAR_0 <= 19) {
  return "th";
 } else {
  switch (VAR_0 % 10) {
   case 1: return "st";
   case 2: return "nd";
   case 3: return "rd";
  }
 }
 return "th";
}
