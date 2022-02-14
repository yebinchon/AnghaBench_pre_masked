
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_run_processor ;
typedef int pdf_processor ;
struct TYPE_4__ {int alpha; } ;
struct TYPE_5__ {TYPE_1__ fill; } ;
typedef TYPE_2__ pdf_gstate ;
typedef int fz_context ;


 int FUNC_0 (float,int ,int) ;
 TYPE_2__* FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, pdf_processor *VAR_1, float VAR_2)
{
 pdf_run_processor *VAR_3 = (pdf_run_processor *)VAR_1;
 pdf_gstate *VAR_4 = FUNC_1(VAR_0, VAR_3);
 VAR_4->fill.alpha = FUNC_0(VAR_2, 0, 1);
}
