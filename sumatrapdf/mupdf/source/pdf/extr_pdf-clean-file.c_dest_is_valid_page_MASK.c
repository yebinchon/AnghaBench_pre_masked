
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(fz_context *VAR_0, pdf_obj *VAR_1, int *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5 = FUNC_0(VAR_0, VAR_1);

 if (VAR_5 == 0)
  return 0;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
  if (VAR_2[VAR_4] == VAR_5)
   return 1;
 }
 return 0;
}
