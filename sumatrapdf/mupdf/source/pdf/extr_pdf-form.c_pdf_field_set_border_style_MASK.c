
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
 int * FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char const*,char*) ;

void FUNC_4(fz_context *VAR_6, pdf_obj *VAR_7, const char *VAR_8)
{
 pdf_obj *VAR_9;

 if (!FUNC_3(VAR_8, "Solid"))
  VAR_9 = FUNC_0(VAR_4);
 else if (!FUNC_3(VAR_8, "Dashed"))
  VAR_9 = FUNC_0(VAR_2);
 else if (!FUNC_3(VAR_8, "Beveled"))
  VAR_9 = FUNC_0(VAR_0);
 else if (!FUNC_3(VAR_8, "Inset"))
  VAR_9 = FUNC_0(VAR_3);
 else if (!FUNC_3(VAR_8, "Underline"))
  VAR_9 = FUNC_0(VAR_5);
 else
  return;

 FUNC_1(VAR_6, VAR_7, VAR_9, FUNC_0(VAR_1), FUNC_0(VAR_4), ((void*)0));
 FUNC_2(VAR_6, VAR_7);
}
