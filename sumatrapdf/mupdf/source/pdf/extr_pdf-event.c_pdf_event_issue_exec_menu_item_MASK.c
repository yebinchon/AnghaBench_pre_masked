
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct TYPE_7__ {char const* item; TYPE_1__ base; } ;
typedef TYPE_2__ pdf_exec_menu_item_event_internal ;
struct TYPE_8__ {int event_cb_data; int (* event_cb ) (int *,TYPE_3__*,int *,int ) ;} ;
typedef TYPE_3__ pdf_document ;
typedef int pdf_doc_event ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*,int *,int ) ;

void FUNC_1(fz_context *VAR_1, pdf_document *VAR_2, const char *VAR_3)
{
 if (VAR_2->event_cb)
 {
  pdf_exec_menu_item_event_internal VAR_4;
  VAR_4.base.type = VAR_0;
  VAR_4.item = VAR_3;

  VAR_2->event_cb(VAR_1, VAR_2, (pdf_doc_event *)&VAR_4, VAR_2->event_cb_data);
 }
}
