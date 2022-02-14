
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int *,char*,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int,char*) ;

__attribute__((used)) static void FUNC_3(fz_context *VAR_0, pdf_document *VAR_1, pdf_obj *VAR_2)
{
 char VAR_3[500];
 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, sizeof VAR_3);
 FUNC_2("%5d: signature name: %s\n", FUNC_1(VAR_0, VAR_2), VAR_3);
}
