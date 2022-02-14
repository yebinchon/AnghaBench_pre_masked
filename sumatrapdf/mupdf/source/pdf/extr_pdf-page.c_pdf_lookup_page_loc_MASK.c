
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char*,...) ;
 int * FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int *,int *,int *,int*,int **,int*) ;
 int * FUNC_4 (int *,int *) ;

pdf_obj *
FUNC_5(fz_context *VAR_3, pdf_document *VAR_4, int VAR_5, pdf_obj **VAR_6, int *VAR_7)
{
 pdf_obj *VAR_8 = FUNC_2(VAR_3, FUNC_4(VAR_3, VAR_4), FUNC_0(VAR_2));
 pdf_obj *VAR_9 = FUNC_2(VAR_3, VAR_8, FUNC_0(VAR_1));
 int VAR_10 = VAR_5;
 pdf_obj *VAR_11;

 if (!VAR_9)
  FUNC_1(VAR_3, VAR_0, "cannot find page tree");

 VAR_11 = FUNC_3(VAR_3, VAR_4, VAR_9, &VAR_10, VAR_6, VAR_7);
 if (!VAR_11)
  FUNC_1(VAR_3, VAR_0, "cannot find page %d in page tree", VAR_5+1);
 return VAR_11;
}
