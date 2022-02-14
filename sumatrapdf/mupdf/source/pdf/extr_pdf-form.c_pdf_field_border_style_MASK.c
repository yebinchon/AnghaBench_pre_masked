
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ,int ,int *) ;
 char* FUNC_2 (int *,int ) ;

char *FUNC_3(fz_context *VAR_2, pdf_obj *VAR_3)
{
 const char *VAR_4 = FUNC_2(VAR_2, FUNC_1(VAR_2, VAR_3, FUNC_0(VAR_0), FUNC_0(VAR_1), ((void*)0)));
 switch (*VAR_4)
 {
 case 'S': return "Solid";
 case 'D': return "Dashed";
 case 'B': return "Beveled";
 case 'I': return "Inset";
 case 'U': return "Underline";
 }
 return "Solid";
}
