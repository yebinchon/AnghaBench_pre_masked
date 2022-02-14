
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(fz_context *VAR_0, pdf_obj *VAR_1)
{
 if (FUNC_4(VAR_0, VAR_1))
  return FUNC_0(VAR_1);
 if (FUNC_3(VAR_0, VAR_1))
 {
  int VAR_2, VAR_3;
  VAR_3 = FUNC_2(VAR_0, VAR_1);
  for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
   if (FUNC_0(FUNC_1(VAR_0, VAR_1, VAR_2)))
    return 1;
 }
 return 0;
}
