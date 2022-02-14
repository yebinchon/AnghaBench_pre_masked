
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xps_document ;
typedef int list ;
typedef int fz_xml ;
typedef int fz_context ;


 int FUNC_0 (char*,scalar_t__,int) ;
 char* FUNC_1 (char**,char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (char*,char*) ;

fz_xml *
FUNC_7(fz_context *VAR_0, xps_document *VAR_1, fz_xml *VAR_2)
{
 for (VAR_2 = FUNC_3(VAR_2); VAR_2; VAR_2 = FUNC_5(VAR_2))
 {
  if (FUNC_4(VAR_2, "Choice") && FUNC_2(VAR_2, "Requires"))
  {
   char VAR_3[64];
   char *VAR_4 = VAR_3, *VAR_5;
   FUNC_0(VAR_3, FUNC_2(VAR_2, "Requires"), sizeof(VAR_3));
   while ((VAR_5 = FUNC_1(&VAR_4, " \t\r\n")) != ((void*)0) && (!*VAR_5 || !FUNC_6(VAR_5, "xps")));
   if (!VAR_5)
    return FUNC_3(VAR_2);
  }
  else if (FUNC_4(VAR_2, "Fallback"))
   return FUNC_3(VAR_2);
 }
 return ((void*)0);
}
