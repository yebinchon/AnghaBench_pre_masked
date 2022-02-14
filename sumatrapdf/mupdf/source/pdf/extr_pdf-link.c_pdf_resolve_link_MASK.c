
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_document ;
typedef int fz_context ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,char*,char const*) ;
 char* FUNC_2 (char const*,char) ;
 char* FUNC_3 (char const*,char) ;

int
FUNC_4(fz_context *VAR_0, pdf_document *VAR_1, const char *VAR_2, float *VAR_3, float *VAR_4)
{
 if (VAR_2 && VAR_2[0] == '#')
 {
  int VAR_5 = FUNC_0(VAR_2 + 1) - 1;
  if (VAR_3 || VAR_4)
  {
   const char *VAR_6 = FUNC_2(VAR_2, ',');
   const char *VAR_7 = FUNC_3(VAR_2, ',');
   if (VAR_6 && VAR_7)
   {
    if (VAR_3) *VAR_3 = FUNC_0(VAR_6 + 1);
    if (VAR_4) *VAR_4 = FUNC_0(VAR_7 + 1);
   }
  }
  return VAR_5;
 }
 FUNC_1(VAR_0, "unknown link uri '%s'", VAR_2);
 return -1;
}
