
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (char*,size_t,char*,char*) ;

size_t FUNC_2(const char *VAR_1, char *VAR_2, size_t VAR_3)
{
 size_t VAR_4 = VAR_3 < VAR_0 ? VAR_3 : VAR_0;
 char VAR_5[VAR_0];
 int VAR_6;

 if (!VAR_2)
  return 0;

 if (!FUNC_0(VAR_1, VAR_5))
  return 0;

 VAR_6 = FUNC_1(VAR_2, VAR_4, "%s", VAR_5);
 return VAR_6 >= 0 ? VAR_6 : 0;
}
