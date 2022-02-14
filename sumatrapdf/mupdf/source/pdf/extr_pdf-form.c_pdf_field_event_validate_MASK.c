
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_obj ;
typedef int pdf_js ;
struct TYPE_4__ {int * js; } ;
typedef TYPE_1__ pdf_document ;
typedef int fz_context ;


 int * FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,TYPE_1__*,int *,char*,int *) ;
 int FUNC_2 (int *,int *,char const*,int) ;
 int FUNC_3 (int *) ;

int FUNC_4(fz_context *VAR_0, pdf_document *VAR_1, pdf_obj *VAR_2, const char *VAR_3)
{
 pdf_js *VAR_4 = VAR_1->js;
 if (VAR_4)
 {
  pdf_obj *VAR_5 = FUNC_0(VAR_0, VAR_2, "AA/V/JS");
  if (VAR_5)
  {
   FUNC_2(VAR_4, VAR_2, VAR_3, 1);
   FUNC_1(VAR_0, VAR_1, VAR_2, "AA/V/JS", VAR_5);
   return FUNC_3(VAR_4);
  }
 }
 return 1;
}
