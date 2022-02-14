
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int * FUNC_0 (int *,char const*,int) ;
 int * FUNC_1 (int *,char const*) ;

pdf_obj *
FUNC_2(fz_context *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0;
 while (VAR_1[VAR_2] != 0)
 {
  if (((unsigned char)VAR_1[VAR_2]) >= 128)
   return FUNC_1(VAR_0, VAR_1);
  ++VAR_2;
 }
 return FUNC_0(VAR_0, VAR_1, VAR_2);
}
