
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;

int FUNC_3(fz_context *VAR_3, pdf_obj *VAR_4)
{
 pdf_obj *VAR_5 = FUNC_1(VAR_3, VAR_4, FUNC_0(VAR_0));
 if (VAR_5)
  if (FUNC_2(VAR_3, FUNC_1(VAR_3, VAR_5, FUNC_0(VAR_1)), FUNC_0(VAR_2)))
   return 1;
 return 0;
}
