
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_font_desc ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (int *,int *,int *,int *,int *) ;
 int * FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (int *,int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ) ;

__attribute__((used)) static pdf_font_desc *
FUNC_7(fz_context *VAR_7, pdf_document *VAR_8, pdf_obj *VAR_9)
{
 pdf_obj *VAR_10;
 pdf_obj *VAR_11;
 pdf_obj *VAR_12;
 pdf_obj *VAR_13;
 pdf_obj *VAR_14;

 VAR_10 = FUNC_4(VAR_7, VAR_9, FUNC_0(VAR_2));
 if (!VAR_10)
  FUNC_1(VAR_7, VAR_4, "cid font is missing descendant fonts");

 VAR_11 = FUNC_3(VAR_7, VAR_10, 0);

 VAR_12 = FUNC_4(VAR_7, VAR_11, FUNC_0(VAR_5));
 VAR_13 = FUNC_4(VAR_7, VAR_9, FUNC_0(VAR_3));
 VAR_14 = FUNC_4(VAR_7, VAR_9, FUNC_0(VAR_6));

 if (FUNC_5(VAR_7, VAR_12) && FUNC_6(VAR_7, VAR_12, FUNC_0(VAR_0)))
  return FUNC_2(VAR_7, VAR_8, VAR_11, VAR_13, VAR_14);
 if (FUNC_5(VAR_7, VAR_12) && FUNC_6(VAR_7, VAR_12, FUNC_0(VAR_1)))
  return FUNC_2(VAR_7, VAR_8, VAR_11, VAR_13, VAR_14);
 FUNC_1(VAR_7, VAR_4, "unknown cid font type");
}
