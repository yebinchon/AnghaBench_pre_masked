
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_2__ {int extgstate; int * out; } ;
typedef TYPE_1__ pdf_output_processor ;
typedef int pdf_font_desc ;
typedef int fz_output ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,char*,char const*,float) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_processor *VAR_1, const char *VAR_2, pdf_font_desc *VAR_3, float VAR_4)
{
 fz_output *VAR_5 = ((pdf_output_processor*)VAR_1)->out;
 if (!((pdf_output_processor*)VAR_1)->extgstate)
 {
  FUNC_0(VAR_0, VAR_5, "%n %g Tf\n", VAR_2, VAR_4);
 }
}
