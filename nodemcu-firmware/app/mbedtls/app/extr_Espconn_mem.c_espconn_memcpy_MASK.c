
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void *FUNC_0(void *VAR_0, const void *VAR_1, size_t VAR_2, char *VAR_3, int VAR_4)
{
 char *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);

 if(((void*)0) == VAR_0 || ((void*)0) == VAR_1)
 {
  return ((void*)0);
 }

 if((VAR_1 < VAR_0) && (char *)VAR_1 + VAR_2 > (char *)VAR_0)
 {
  VAR_5 = (char *)VAR_1 + VAR_2 - 1;
  VAR_6 = (char *)VAR_0 + VAR_2 - 1;
  while(VAR_2--)
  {
   *VAR_6-- = *VAR_5--;
  }
 }
 else
 {
  VAR_5 = (char *)VAR_1;
  VAR_6 = (char *)VAR_0;
  while(VAR_2--)
  {
   *VAR_6++ = *VAR_5++;
  }
 }

 return VAR_0;

}
