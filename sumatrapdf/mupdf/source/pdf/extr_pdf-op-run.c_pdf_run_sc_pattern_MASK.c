
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dev; } ;
typedef TYPE_2__ pdf_run_processor ;
typedef int pdf_processor ;
typedef int pdf_pattern ;
typedef int fz_context ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int ,int *,float*) ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_2, pdf_processor *VAR_3, const char *VAR_4, pdf_pattern *VAR_5, int VAR_6, float *VAR_7)
{
 pdf_run_processor *VAR_8 = (pdf_run_processor *)VAR_3;
 VAR_8->dev->flags &= ~VAR_0;
 FUNC_0(VAR_2, VAR_8, VAR_1, VAR_5, VAR_7);
}
