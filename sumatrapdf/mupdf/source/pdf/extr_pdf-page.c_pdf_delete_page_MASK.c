
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int) ;
 int * FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ,int) ;
 int FUNC_5 (int *,int *,int,int **,int*) ;

void
FUNC_6(fz_context *VAR_3, pdf_document *VAR_4, int VAR_5)
{
 pdf_obj *VAR_6, *VAR_7;
 int VAR_8;

 FUNC_5(VAR_3, VAR_4, VAR_5, &VAR_6, &VAR_8);
 VAR_7 = FUNC_2(VAR_3, VAR_6, FUNC_0(VAR_1));
 FUNC_1(VAR_3, VAR_7, VAR_8);

 while (VAR_6)
 {
  int VAR_9 = FUNC_3(VAR_3, VAR_6, FUNC_0(VAR_0));
  FUNC_4(VAR_3, VAR_6, FUNC_0(VAR_0), VAR_9 - 1);
  VAR_6 = FUNC_2(VAR_3, VAR_6, FUNC_0(VAR_2));
 }
}
