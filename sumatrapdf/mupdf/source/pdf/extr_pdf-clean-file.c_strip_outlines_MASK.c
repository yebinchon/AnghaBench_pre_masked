
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
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int ,int *) ;
 int FUNC_5 (int *,int *,int ,int) ;
 int FUNC_6 (int *,int *,int *,int,int*,int *,int **,int **) ;

__attribute__((used)) static int FUNC_7(fz_context *VAR_3, pdf_document *VAR_4, pdf_obj *VAR_5, int VAR_6, int *VAR_7, pdf_obj *VAR_8)
{
 int VAR_9;
 pdf_obj *VAR_10;
 pdf_obj *VAR_11;

 if (VAR_5 == ((void*)0))
  return 0;

 VAR_10 = FUNC_2(VAR_3, VAR_5, FUNC_0(VAR_1));
 if (VAR_10 == ((void*)0))
  VAR_9 = 0;
 else
  VAR_9 = FUNC_6(VAR_3, VAR_4, VAR_10, VAR_6, VAR_7, VAR_8, &VAR_10, &VAR_11);

 if (VAR_9 == 0)
 {
  FUNC_1(VAR_3, VAR_5, FUNC_0(VAR_1));
  FUNC_1(VAR_3, VAR_5, FUNC_0(VAR_2));
  FUNC_1(VAR_3, VAR_5, FUNC_0(VAR_0));
 }
 else
 {
  int VAR_12 = FUNC_3(VAR_3, VAR_5, FUNC_0(VAR_0));
  FUNC_4(VAR_3, VAR_5, FUNC_0(VAR_1), VAR_10);
  FUNC_4(VAR_3, VAR_5, FUNC_0(VAR_2), VAR_11);
  FUNC_5(VAR_3, VAR_5, FUNC_0(VAR_0), VAR_12 > 0 ? VAR_9 : -VAR_9);
 }

 return VAR_9;
}
