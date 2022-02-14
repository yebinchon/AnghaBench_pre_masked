
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int *,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int * FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *,int ,int *) ;
 int FUNC_7 (int *,int *,int ,int) ;
 int FUNC_8 (int *,int *,int,int **,int*) ;
 int * FUNC_9 (int *,int *) ;

void
FUNC_10(fz_context *VAR_7, pdf_document *VAR_8, int VAR_9, pdf_obj *VAR_10)
{
 int VAR_11 = FUNC_3(VAR_7, VAR_8);
 pdf_obj *VAR_12, *VAR_13;
 int VAR_14;

 if (VAR_9 < 0)
  VAR_9 = VAR_11;
 if (VAR_9 == VAR_2)
  VAR_9 = VAR_11;
 if (VAR_9 > VAR_11)
  FUNC_1(VAR_7, VAR_1, "cannot insert page beyond end of page tree");

 if (VAR_11 == 0)
 {
  pdf_obj *VAR_15 = FUNC_4(VAR_7, FUNC_9(VAR_7, VAR_8), FUNC_0(VAR_6));
  VAR_12 = FUNC_4(VAR_7, VAR_15, FUNC_0(VAR_4));
  if (!VAR_12)
   FUNC_1(VAR_7, VAR_1, "cannot find page tree");
  VAR_13 = FUNC_4(VAR_7, VAR_12, FUNC_0(VAR_3));
  if (!VAR_13)
   FUNC_1(VAR_7, VAR_1, "malformed page tree");
  FUNC_2(VAR_7, VAR_13, VAR_10, 0);
 }
 else if (VAR_9 == VAR_11)
 {

  FUNC_8(VAR_7, VAR_8, VAR_11 - 1, &VAR_12, &VAR_14);
  VAR_13 = FUNC_4(VAR_7, VAR_12, FUNC_0(VAR_3));
  FUNC_2(VAR_7, VAR_13, VAR_10, VAR_14 + 1);
 }
 else
 {

  FUNC_8(VAR_7, VAR_8, VAR_9, &VAR_12, &VAR_14);
  VAR_13 = FUNC_4(VAR_7, VAR_12, FUNC_0(VAR_3));
  FUNC_2(VAR_7, VAR_13, VAR_10, VAR_14);
 }

 FUNC_6(VAR_7, VAR_10, FUNC_0(VAR_5), VAR_12);


 while (VAR_12)
 {
  VAR_11 = FUNC_5(VAR_7, VAR_12, FUNC_0(VAR_0));
  FUNC_7(VAR_7, VAR_12, FUNC_0(VAR_0), VAR_11 + 1);
  VAR_12 = FUNC_4(VAR_7, VAR_12, FUNC_0(VAR_5));
 }
}
