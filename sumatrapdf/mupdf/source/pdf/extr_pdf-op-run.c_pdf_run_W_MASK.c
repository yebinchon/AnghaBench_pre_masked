
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int clip; scalar_t__ clip_even_odd; } ;
typedef TYPE_1__ pdf_run_processor ;
typedef int pdf_processor ;
typedef int fz_context ;



__attribute__((used)) static void FUNC_0(fz_context *VAR_0, pdf_processor *VAR_1)
{
 pdf_run_processor *VAR_2 = (pdf_run_processor *)VAR_1;
 VAR_2->clip = 1;
 VAR_2->clip_even_odd = 0;
}
