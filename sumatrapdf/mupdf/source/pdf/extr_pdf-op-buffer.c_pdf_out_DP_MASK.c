
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_2__ {int ahxencode; int * out; } ;
typedef TYPE_1__ pdf_output_processor ;
typedef int pdf_obj ;
typedef int fz_output ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,char*,char const*) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,int *,int *,int,int) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_0, pdf_processor *VAR_1, const char *VAR_2, pdf_obj *VAR_3, pdf_obj *VAR_4)
{
 fz_output *VAR_5 = ((pdf_output_processor*)VAR_1)->out;
 int VAR_6 = ((pdf_output_processor*)VAR_1)->ahxencode;
 FUNC_0(VAR_0, VAR_5, "%n ", VAR_2);
 FUNC_2(VAR_0, VAR_5, VAR_3, 1, VAR_6);
 FUNC_1(VAR_0, VAR_5, " DP\n");
}
