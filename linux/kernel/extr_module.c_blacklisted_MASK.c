
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,size_t) ;
 char* VAR_0 ;
 size_t FUNC_1 (char const*,char*) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_1)
{
 const char *VAR_2;
 size_t VAR_3;

 if (!VAR_0)
  return 0;

 for (VAR_2 = VAR_0; *VAR_2; VAR_2 += VAR_3) {
  VAR_3 = FUNC_1(VAR_2, ",");
  if (FUNC_2(VAR_1) == VAR_3 && !FUNC_0(VAR_1, VAR_2, VAR_3))
   return 1;
  if (VAR_2[VAR_3] == ',')
   VAR_3++;
 }
 return 0;
}
