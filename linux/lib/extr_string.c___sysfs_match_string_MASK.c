
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

int FUNC_1(const char * const *VAR_1, size_t VAR_2, const char *VAR_3)
{
 const char *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = VAR_1[VAR_5];
  if (!VAR_4)
   break;
  if (FUNC_0(VAR_4, VAR_3))
   return VAR_5;
 }

 return -VAR_0;
}
