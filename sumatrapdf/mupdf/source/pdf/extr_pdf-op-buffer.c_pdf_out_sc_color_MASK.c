
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


 int FUNC_0 (int *,int *,char*,float) ;
 int FUNC_1 (int *,int *,char*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, pdf_processor *VAR_1, int VAR_2, float *VAR_3)
{
 fz_output *VAR_4 = ((pdf_output_processor*)VAR_1)->out;
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
  FUNC_0(VAR_0, VAR_4, "%g ", VAR_3[VAR_5]);
 FUNC_1(VAR_0, VAR_4, "scn\n");
}
