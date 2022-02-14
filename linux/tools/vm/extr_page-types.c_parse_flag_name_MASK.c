
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;


 size_t FUNC_0 (char**) ;
 unsigned long long VAR_0 ;
 char** VAR_1 ;
 unsigned long long FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static uint64_t FUNC_3(const char *VAR_2, int VAR_3)
{
 size_t VAR_4;

 if (!*VAR_2 || !VAR_3)
  return 0;

 if (VAR_3 <= 8 && !FUNC_2(VAR_2, "compound", VAR_3))
  return VAR_0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  if (!VAR_1[VAR_4])
   continue;
  if (!FUNC_2(VAR_2, VAR_1[VAR_4] + 2, VAR_3))
   return 1ULL << VAR_4;
 }

 return FUNC_1(VAR_2);
}
