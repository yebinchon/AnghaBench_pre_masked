
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (char const* const,char*) ;
 char* FUNC_2 (char*,char*) ;

int
FUNC_3(const char *const VAR_1)
{
 char VAR_2[256];
 char *VAR_3, *VAR_4;

 FUNC_0(VAR_2, VAR_0, sizeof(VAR_2));
 for (VAR_3 = VAR_2; (VAR_4 = FUNC_2(VAR_3, ",\n")) != ((void*)0); VAR_3 = ((void*)0)) {
  if (FUNC_1(VAR_1, VAR_4) == 0)
   return (1);
 }
 return (0);
}
