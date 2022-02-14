
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int
FUNC_5(fz_context *VAR_2, pdf_obj *VAR_3)
{
 pdf_obj *VAR_4 = FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_0));
 if (FUNC_3(VAR_2, FUNC_2(VAR_2, VAR_3, "Group/S"), FUNC_0(VAR_1)))
  return 1;
 return FUNC_4(VAR_2, VAR_4);
}
