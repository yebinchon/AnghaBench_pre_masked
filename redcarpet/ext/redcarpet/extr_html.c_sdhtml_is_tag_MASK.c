
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const) ;

int
FUNC_1(const uint8_t *VAR_3, size_t VAR_4, const char *VAR_5)
{
 size_t VAR_6;
 int VAR_7 = 0;

 if (VAR_4 < 3 || VAR_3[0] != '<')
  return VAR_1;

 VAR_6 = 1;

 if (VAR_3[VAR_6] == '/') {
  VAR_7 = 1;
  VAR_6++;
 }

 for (; VAR_6 < VAR_4; ++VAR_6, ++VAR_5) {
  if (*VAR_5 == 0)
   break;

  if (VAR_3[VAR_6] != *VAR_5)
   return VAR_1;
 }

 if (VAR_6 == VAR_4)
  return VAR_1;

 if (FUNC_0(VAR_3[VAR_6]) || VAR_3[VAR_6] == '>')
  return VAR_7 ? VAR_0 : VAR_2;

 return VAR_1;
}
