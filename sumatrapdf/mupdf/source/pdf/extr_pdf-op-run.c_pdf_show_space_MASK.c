
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* tm; } ;
struct TYPE_9__ {int gtop; TYPE_1__ tos; TYPE_4__* gstate; } ;
typedef TYPE_3__ pdf_run_processor ;
struct TYPE_8__ {float scale; TYPE_5__* font; } ;
struct TYPE_10__ {TYPE_2__ text; } ;
typedef TYPE_4__ pdf_gstate ;
struct TYPE_11__ {scalar_t__ wmode; } ;
typedef TYPE_5__ pdf_font_desc ;
typedef int fz_context ;


 void* FUNC_0 (void*,float,float) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_run_processor *VAR_1, float VAR_2)
{
 pdf_gstate *VAR_3 = VAR_1->gstate + VAR_1->gtop;
 pdf_font_desc *VAR_4 = VAR_3->text.font;

 if (VAR_4->wmode == 0)
  VAR_1->tos.tm = FUNC_0(VAR_1->tos.tm, VAR_2 * VAR_3->text.scale, 0);
 else
  VAR_1->tos.tm = FUNC_0(VAR_1->tos.tm, 0, VAR_2);
}
