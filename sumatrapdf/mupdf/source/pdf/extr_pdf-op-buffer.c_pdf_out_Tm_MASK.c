
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_2__ {int * out; } ;
typedef TYPE_1__ pdf_output_processor ;
typedef int fz_output ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,char*,float,float,float,float,float,float) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_processor *VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7)
{
 fz_output *VAR_8 = ((pdf_output_processor*)VAR_1)->out;
 FUNC_0(VAR_0, VAR_8, "%g %g %g %g %g %g Tm\n", VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
