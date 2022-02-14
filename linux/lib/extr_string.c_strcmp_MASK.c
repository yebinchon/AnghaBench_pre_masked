
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(const char *VAR_0, const char *VAR_1)
{
 unsigned char VAR_2, VAR_3;

 while (1) {
  VAR_2 = *VAR_0++;
  VAR_3 = *VAR_1++;
  if (VAR_2 != VAR_3)
   return VAR_2 < VAR_3 ? -1 : 1;
  if (!VAR_2)
   break;
 }
 return 0;
}
