
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(const char **VAR_2, const char **VAR_3, size_t *VAR_4)
{
 *VAR_3 = *VAR_2;






 while ((**VAR_2 >= 'a' && **VAR_2 <= 'z') ||
   (**VAR_2 >= 'A' && **VAR_2 <= 'Z') ||
   (**VAR_2 >= '0' && **VAR_2 <= '9')) {
  (*VAR_2)++;
 }

 if (**VAR_2 != ';')
  return VAR_0;


 *VAR_4 = *VAR_2 - *VAR_3;

 if (*VAR_4 == 0)
  return VAR_0;

 return VAR_1;
}
