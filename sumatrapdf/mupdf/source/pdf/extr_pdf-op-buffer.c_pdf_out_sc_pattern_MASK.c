
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdf_processor ;
typedef int pdf_pattern ;
struct TYPE_2__ {int * out; } ;
typedef TYPE_1__ pdf_output_processor ;
typedef int fz_output ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_processor *VAR_1, const char *VAR_2, pdf_pattern *VAR_3, int VAR_4, float *VAR_5)
{
 fz_output *VAR_6 = ((pdf_output_processor*)VAR_1)->out;
 int VAR_7;
 for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7)
  FUNC_0(VAR_0, VAR_6, "%g ", VAR_5[VAR_7]);
 FUNC_0(VAR_0, VAR_6, "%n scn\n", VAR_2);
}
