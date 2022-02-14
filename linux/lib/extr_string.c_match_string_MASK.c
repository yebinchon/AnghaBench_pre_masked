
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char const*) ;

int FUNC_1(const char * const *VAR_1, size_t VAR_2, const char *VAR_3)
{
 int VAR_4;
 const char *VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = VAR_1[VAR_4];
  if (!VAR_5)
   break;
  if (!FUNC_0(VAR_5, VAR_3))
   return VAR_4;
 }

 return -VAR_0;
}
