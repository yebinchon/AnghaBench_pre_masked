
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;

__attribute__((used)) static int
FUNC_3(fz_context *VAR_1, pdf_obj *VAR_2)
{
 pdf_obj *VAR_3 = FUNC_1(VAR_1, VAR_2, FUNC_0(VAR_0));
 if (VAR_3 && FUNC_2(VAR_1, VAR_3))
  return 1;
 return 0;
}
