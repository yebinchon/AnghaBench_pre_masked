
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,int*,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int *,int *,int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_7(fz_context *VAR_5, pdf_obj *VAR_6, int VAR_7, int *VAR_8, pdf_obj *VAR_9)
{
 pdf_obj *VAR_10;

 VAR_10 = FUNC_3(VAR_5, VAR_6, FUNC_0(VAR_0));
 if (FUNC_5(VAR_5, FUNC_3(VAR_5, VAR_10, FUNC_0(VAR_4)), FUNC_0(VAR_3)) &&
  !FUNC_6(VAR_5, FUNC_3(VAR_5, VAR_10, FUNC_0(VAR_1)), VAR_9))
  return 0;

 VAR_10 = FUNC_3(VAR_5, VAR_6, FUNC_0(VAR_2));
 if (VAR_10 == ((void*)0))
 {}
 else if (FUNC_4(VAR_5, VAR_10))
  return FUNC_6(VAR_5, VAR_10, VAR_9);
 else if (!FUNC_1(VAR_5, FUNC_2(VAR_5, VAR_10, 0), VAR_8, VAR_7))
  return 0;

 return 1;
}
