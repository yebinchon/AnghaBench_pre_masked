
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


struct TYPE_9__ {TYPE_1__* fontdesc; } ;
struct TYPE_13__ {float Tm_adjust; TYPE_5__* gstate; TYPE_2__ tos; } ;
typedef TYPE_6__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_10__ {float size; } ;
struct TYPE_11__ {TYPE_3__ text; } ;
struct TYPE_12__ {TYPE_4__ pending; } ;
struct TYPE_8__ {int wmode; } ;



__attribute__((used)) static void
FUNC_0(fz_context *VAR_0, pdf_filter_processor *VAR_1, float VAR_2, float VAR_3)
{
 float VAR_4 = VAR_1->tos.fontdesc->wmode == 1 ? -VAR_3 : -VAR_2;
 VAR_4 = VAR_4 / VAR_1->gstate->pending.text.size;
 VAR_1->Tm_adjust += VAR_4;
}
