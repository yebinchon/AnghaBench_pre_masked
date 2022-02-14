
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int *,int *,void*,size_t,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int VAR_0 ;

void
FUNC_6(fz_context *VAR_1, pdf_obj *VAR_2, void *VAR_3, size_t VAR_4)
{
 void *VAR_5;

 FUNC_0(FUNC_5(VAR_1, VAR_2) || FUNC_2(VAR_1, VAR_2) || FUNC_3(VAR_1, VAR_2) || FUNC_4(VAR_1, VAR_2));
 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_0);
 FUNC_0(VAR_5 == ((void*)0));
 (void)VAR_5;
}
