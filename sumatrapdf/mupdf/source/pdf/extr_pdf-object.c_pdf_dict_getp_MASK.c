
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char*) ;
 int * FUNC_3 (int *,int *,char*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char const*) ;

pdf_obj *
FUNC_6(fz_context *VAR_1, pdf_obj *VAR_2, const char *VAR_3)
{
 char VAR_4[256];
 char *VAR_5, *VAR_6;

 FUNC_1(VAR_2);
 if (!FUNC_0(VAR_2))
  return ((void*)0);
 if (FUNC_5(VAR_3)+1 > 256)
  FUNC_2(VAR_1, VAR_0, "path too long");

 FUNC_4(VAR_4, VAR_3);

 VAR_6 = VAR_4;
 while (*VAR_6 && VAR_2)
 {
  VAR_5 = VAR_6;
  while (*VAR_6 != '/' && *VAR_6 != '\0')
   VAR_6++;

  if (*VAR_6 == '/')
  {
   *VAR_6 = '\0';
   VAR_6++;
  }

  VAR_2 = FUNC_3(VAR_1, VAR_2, VAR_5);
 }

 return VAR_2;
}
