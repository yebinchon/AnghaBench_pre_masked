
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pdf_obj ;
typedef int pdf_document ;
typedef int fz_context ;


 int * FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(fz_context *VAR_0, void *VAR_1, void *VAR_2)
{
 pdf_document *VAR_3 = (pdf_document *)VAR_1;
 pdf_obj *VAR_4 = (pdf_obj *)VAR_2;
 pdf_document *VAR_5 = FUNC_0(VAR_0, VAR_4);

 return (VAR_3 == VAR_5);
}
