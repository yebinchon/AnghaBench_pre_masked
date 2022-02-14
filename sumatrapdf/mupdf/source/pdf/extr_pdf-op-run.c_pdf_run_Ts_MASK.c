
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int gtop; TYPE_3__* gstate; } ;
typedef TYPE_2__ pdf_run_processor ;
typedef int pdf_processor ;
struct TYPE_4__ {float rise; } ;
struct TYPE_6__ {TYPE_1__ text; } ;
typedef TYPE_3__ pdf_gstate ;
typedef int fz_context ;



__attribute__((used)) static void FUNC_0(fz_context *VAR_0, pdf_processor *VAR_1, float VAR_2)
{
 pdf_run_processor *VAR_3 = (pdf_run_processor *)VAR_1;
 pdf_gstate *VAR_4 = VAR_3->gstate + VAR_3->gtop;
 VAR_4->text.rise = VAR_2;
}
