
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char *FUNC_0(char *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned char *VAR_4 = ((void*)0);

 VAR_0 += 6;

 for(VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (!VAR_4 || (*VAR_0 < *VAR_4))
   VAR_4 = VAR_0;
  VAR_0 += 7;
 }

 if (!VAR_4)
  return ((void*)0);

 return (*VAR_4 < VAR_2) ? (VAR_4 - 6) : ((void*)0);
}
