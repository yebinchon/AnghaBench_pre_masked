
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


 int FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (int *,int *,int *,int,int) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_processor *VAR_1, pdf_obj *VAR_2)
{
 fz_output *VAR_3 = ((pdf_output_processor*)VAR_1)->out;
 int VAR_4 = ((pdf_output_processor*)VAR_1)->ahxencode;
 FUNC_1(VAR_0, VAR_3, VAR_2, 1, VAR_4);
 FUNC_0(VAR_0, VAR_3, " TJ\n");
}
