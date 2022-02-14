
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_13__ {TYPE_6__* font_name; int doc; int structarray; scalar_t__ current_tags; scalar_t__ pending_tags; TYPE_6__* gstate; } ;
typedef TYPE_5__ pdf_filter_processor ;
typedef int fz_context ;
struct TYPE_11__ {int font; } ;
struct TYPE_12__ {TYPE_3__ text; } ;
struct TYPE_9__ {int font; } ;
struct TYPE_10__ {TYPE_1__ text; } ;
struct TYPE_14__ {TYPE_4__ sent; TYPE_2__ pending; struct TYPE_14__* next; } ;
typedef TYPE_6__ filter_gstate ;


 int FUNC_0 (int *,TYPE_6__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_5__*,scalar_t__*) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, pdf_processor *VAR_1)
{
 pdf_filter_processor *VAR_2 = (pdf_filter_processor*)VAR_1;
 filter_gstate *VAR_3 = VAR_2->gstate;
 while (VAR_3)
 {
  filter_gstate *VAR_4 = VAR_3->next;
  FUNC_2(VAR_0, VAR_3->pending.text.font);
  FUNC_2(VAR_0, VAR_3->sent.text.font);
  FUNC_0(VAR_0, VAR_3);
  VAR_3 = VAR_4;
 }
 while (VAR_2->pending_tags)
  FUNC_4(VAR_0, VAR_2, &VAR_2->pending_tags);
 while (VAR_2->current_tags)
  FUNC_4(VAR_0, VAR_2, &VAR_2->current_tags);
 FUNC_3(VAR_0, VAR_2->structarray);
 FUNC_1(VAR_0, VAR_2->doc);
 FUNC_0(VAR_0, VAR_2->font_name);
}
