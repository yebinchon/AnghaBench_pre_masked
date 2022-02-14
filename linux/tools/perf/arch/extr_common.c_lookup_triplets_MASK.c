
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,char const* const,char const*) ;

__attribute__((used)) static int FUNC_2(const char *const *VAR_1, const char *VAR_2)
{
 int VAR_3;
 char VAR_4[VAR_0];

 for (VAR_3 = 0; VAR_1[VAR_3] != ((void*)0); VAR_3++) {
  FUNC_1(VAR_4, sizeof(VAR_4), "%s%s", VAR_1[VAR_3], VAR_2);
  if (FUNC_0(VAR_4))
   return VAR_3;
 }
 return -1;
}
