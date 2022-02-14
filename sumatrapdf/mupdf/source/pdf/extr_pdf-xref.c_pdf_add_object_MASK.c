
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *) ;
 int * FUNC_5 (int *,int *,int,int ) ;
 int FUNC_6 (int *,int *,int,int *) ;

pdf_obj *
FUNC_7(fz_context *VAR_1, pdf_document *VAR_2, pdf_obj *VAR_3)
{
 pdf_document *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1, VAR_3);
 if (VAR_4 && VAR_4 != VAR_2)
  FUNC_0(VAR_1, VAR_0, "tried to add an object belonging to a different document");
 if (FUNC_3(VAR_1, VAR_3))
  return FUNC_4(VAR_1, VAR_3);
 VAR_5 = FUNC_1(VAR_1, VAR_2);
 FUNC_6(VAR_1, VAR_2, VAR_5, VAR_3);
 return FUNC_5(VAR_1, VAR_2, VAR_5, 0);
}
