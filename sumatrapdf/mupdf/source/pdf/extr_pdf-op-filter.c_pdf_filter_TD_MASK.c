
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_8__ {int Tm_pending; TYPE_3__* gstate; int tos; scalar_t__ Tm_adjust; } ;
typedef TYPE_4__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_5__ {float leading; } ;
struct TYPE_6__ {TYPE_1__ text; } ;
struct TYPE_7__ {TYPE_2__ pending; } ;


 int FUNC_0 (int *,float,float) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, pdf_processor *VAR_1, float VAR_2, float VAR_3)
{
 pdf_filter_processor *VAR_4 = (pdf_filter_processor*)VAR_1;
 VAR_4->Tm_adjust = 0;
 FUNC_0(&VAR_4->tos, VAR_2, VAR_3);
 VAR_4->gstate->pending.text.leading = -VAR_3;
 VAR_4->Tm_pending = 1;
}
