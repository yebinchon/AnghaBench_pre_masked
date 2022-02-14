
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svg_document ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (char const*,char*,int) ;
 char* FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const) ;
 int FUNC_3 (int *,int *,char const*,float*) ;

void
FUNC_4(fz_context *VAR_0, svg_document *VAR_1, const char *VAR_2,
 int *VAR_3, float VAR_4[3],
 int *VAR_5, float VAR_6[3])
{
 const char *VAR_7;

 VAR_7 = FUNC_1(VAR_2, "fill:");
 if (VAR_7)
 {
  VAR_7 += 5;
  while (*VAR_7 && FUNC_2(*VAR_7))
   ++VAR_7;
  if (FUNC_0(VAR_7, "none", 4) != 0)
  {
   FUNC_3(VAR_0, VAR_1, VAR_7, VAR_4);
   *VAR_3 = 1;
  }
 }

 VAR_7 = FUNC_1(VAR_2, "stroke:");
 if (VAR_7)
 {
  VAR_7 += 7;
  while (*VAR_7 && FUNC_2(*VAR_7))
   ++VAR_7;
  if (FUNC_0(VAR_7, "none", 4) != 0)
  {
   FUNC_3(VAR_0, VAR_1, VAR_7, VAR_6);
   *VAR_5 = 1;
  }
 }
}
