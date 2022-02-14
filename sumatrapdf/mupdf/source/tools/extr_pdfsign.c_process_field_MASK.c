
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *,scalar_t__) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (int *,int *,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *,int *,int *) ;

__attribute__((used)) static void FUNC_8(fz_context *VAR_6, pdf_document *VAR_7, pdf_obj *VAR_8)
{
 if (FUNC_4(VAR_6, VAR_8, FUNC_0(VAR_0)) != FUNC_0(VAR_1))
  FUNC_2(VAR_6, "%d is not a signature, skipping", FUNC_5(VAR_6, VAR_8));
 else
 {
  if (VAR_3)
   FUNC_3(VAR_6, VAR_7, VAR_8);
  if (VAR_5)
   FUNC_7(VAR_6, VAR_7, VAR_8);
  if (VAR_2)
   FUNC_1(VAR_6, VAR_7, VAR_8);
  if (VAR_4)
   FUNC_6(VAR_6, VAR_7, VAR_8);
 }
}
