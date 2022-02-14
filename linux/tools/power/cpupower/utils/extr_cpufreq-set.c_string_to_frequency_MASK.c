
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct freq_units {scalar_t__* str_unit; int power_of_ten; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct freq_units* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (char const) ;
 unsigned long FUNC_1 (char*,char**,int) ;
 scalar_t__ FUNC_2 (char const) ;

__attribute__((used)) static unsigned long FUNC_3(const char *VAR_4)
{
 char VAR_5[VAR_0];
 const struct freq_units *VAR_6;
 const char *VAR_7;
 char *VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0, VAR_11 = 0, VAR_12, VAR_13, VAR_14;

 while (*VAR_4 == '0')
  VAR_4++;

 for (VAR_7 = VAR_4; FUNC_0(*VAR_7) || *VAR_7 == '.'; VAR_7++) {
  if (*VAR_7 == '.' && VAR_11 == 0)
   VAR_11 = 1;
  else if (*VAR_7 == '.' && VAR_11 == 1)
   return 0;
 }

 if (*VAR_7) {
  VAR_11 = 0;
  for (VAR_6 = VAR_2; VAR_6->str_unit; VAR_6++) {
   for (VAR_12 = 0;
        VAR_7[VAR_12] && FUNC_2(VAR_7[VAR_12]) == VAR_6->str_unit[VAR_12];
        ++VAR_12)
    continue;
   if (VAR_7[VAR_12])
    continue;
   VAR_11++;
   VAR_10 = VAR_6->power_of_ten;
  }
  if (VAR_11 != 1)
   return 0;
 }


 for (VAR_13 = 0; FUNC_0(VAR_4[VAR_13]); VAR_13++)
  continue;

 if (VAR_4[VAR_13] == '.') {
  while (VAR_10 > -1 && FUNC_0(VAR_4[VAR_13+1]))
   VAR_13++, VAR_10--;
 }
 if (VAR_10 >= -1)
  VAR_14 = VAR_10 + 1;
 else
  VAR_14 = 0, VAR_13 += VAR_10 + 1;

 if (VAR_13 <= 0 || VAR_13 + VAR_14 > VAR_0 - 1)
  return 0;


 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++, VAR_4++) {
  if (*VAR_4 == '.')
   VAR_4++;
  VAR_5[VAR_12] = *VAR_4;
 }

 for (; VAR_12 < VAR_13 + VAR_14; VAR_12++)
  VAR_5[VAR_12] = '0';


 VAR_11 = (VAR_5[VAR_12-1] >= '5');

 VAR_5[VAR_12-1] = 0;


 VAR_3 = 0;
 VAR_9 = FUNC_1(VAR_5, &VAR_8, 10);
 if (VAR_3)
  return 0;
 else {
  if (VAR_11 && VAR_9 != VAR_1)
   VAR_9++;
  return VAR_9;
 }
}
