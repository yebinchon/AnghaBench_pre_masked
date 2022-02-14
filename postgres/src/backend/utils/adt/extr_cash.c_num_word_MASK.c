
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Cash ;


 int FUNC_0 (char*,char*,char const* const,...) ;

__attribute__((used)) static const char *
FUNC_1(Cash VAR_0)
{
 static char VAR_1[128];
 static const char *const VAR_2[] = {
  "zero", "one", "two", "three", "four", "five", "six", "seven",
  "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen",
  "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty",
  "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"
 };
 const char *const *VAR_3 = VAR_2 + 18;
 int VAR_4 = VAR_0 % 100;


 if (VAR_0 <= 20)
  return VAR_2[VAR_0];


 if (!VAR_4)
 {
  FUNC_0(VAR_1, "%s hundred", VAR_2[VAR_0 / 100]);
  return VAR_1;
 }


 if (VAR_0 > 99)
 {

  if (VAR_0 % 10 == 0 && VAR_4 > 10)
   FUNC_0(VAR_1, "%s hundred %s",
     VAR_2[VAR_0 / 100], VAR_3[VAR_4 / 10]);
  else if (VAR_4 < 20)
   FUNC_0(VAR_1, "%s hundred and %s",
     VAR_2[VAR_0 / 100], VAR_2[VAR_4]);
  else
   FUNC_0(VAR_1, "%s hundred %s %s",
     VAR_2[VAR_0 / 100], VAR_3[VAR_4 / 10], VAR_2[VAR_4 % 10]);
 }
 else
 {

  if (VAR_0 % 10 == 0 && VAR_4 > 10)
   FUNC_0(VAR_1, "%s", VAR_3[VAR_4 / 10]);
  else if (VAR_4 < 20)
   FUNC_0(VAR_1, "%s", VAR_2[VAR_4]);
  else
   FUNC_0(VAR_1, "%s %s", VAR_3[VAR_4 / 10], VAR_2[VAR_4 % 10]);
 }

 return VAR_1;
}
