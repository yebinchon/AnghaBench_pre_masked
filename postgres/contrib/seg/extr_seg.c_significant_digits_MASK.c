
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const char *VAR_0)
{
 const char *VAR_1 = VAR_0;
 int VAR_2,
    VAR_3,
    VAR_4;

 VAR_4 = 1;

 for (VAR_3 = *VAR_1; (VAR_3 == '0' || VAR_3 == '+' || VAR_3 == '-') && VAR_3 != 0; VAR_3 = *(++VAR_1));


 for (VAR_3 = *VAR_1; (VAR_3 == '0' || VAR_3 == '.') && VAR_3 != 0; VAR_3 = *(++VAR_1))
 {
  if (VAR_3 != '.')
   VAR_4++;
 }


 for (VAR_3 = *VAR_1, VAR_2 = 0; VAR_3 != 0; VAR_3 = *(++VAR_1))
 {
  if (!((VAR_3 >= '0' && VAR_3 <= '9') || (VAR_3 == '.')))
   break;
  if (VAR_3 != '.')
   VAR_2++;
 }

 if (!VAR_2)
  return VAR_4;

 return VAR_2;
}
