
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,int *,int *) ;

__attribute__((used)) static pdf_obj *
FUNC_8(fz_context *VAR_1, pdf_document *VAR_2, pdf_obj *VAR_3, int VAR_4)
{
 if (VAR_4 > 10)
  return ((void*)0);

 if (FUNC_5(VAR_1, VAR_3) || FUNC_6(VAR_1, VAR_3))
 {
  VAR_3 = FUNC_7(VAR_1, VAR_2, VAR_3);
  VAR_3 = FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4+1);
  return VAR_3;
 }

 else if (FUNC_2(VAR_1, VAR_3))
 {
  return VAR_3;
 }

 else if (FUNC_3(VAR_1, VAR_3))
 {
  VAR_3 = FUNC_1(VAR_1, VAR_3, FUNC_0(VAR_0));
  return FUNC_8(VAR_1, VAR_2, VAR_3, VAR_4+1);
 }

 else if (FUNC_4(VAR_1, VAR_3))
  return VAR_3;

 return ((void*)0);
}
