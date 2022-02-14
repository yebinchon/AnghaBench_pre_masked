
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ wmode; } ;
typedef TYPE_4__ pdf_font_desc ;
struct TYPE_8__ {void* tm; } ;
struct TYPE_12__ {TYPE_1__ tos; TYPE_6__* gstate; } ;
typedef TYPE_5__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_9__ {float scale; TYPE_4__* font; } ;
struct TYPE_10__ {TYPE_2__ text; } ;
struct TYPE_13__ {TYPE_3__ pending; } ;
typedef TYPE_6__ filter_gstate ;


 void* FUNC_0 (void*,float,float) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_filter_processor *VAR_1, float VAR_2)
{
 filter_gstate *VAR_3 = VAR_1->gstate;
 pdf_font_desc *VAR_4 = VAR_3->pending.text.font;

 if (VAR_4->wmode == 0)
  VAR_1->tos.tm = FUNC_0(VAR_1->tos.tm, VAR_2 * VAR_3->pending.text.scale, 0);
 else
  VAR_1->tos.tm = FUNC_0(VAR_1->tos.tm, 0, VAR_2);
}
