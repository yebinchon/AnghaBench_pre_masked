
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int event_cb_data; int (* event_cb ) (int *,TYPE_2__*,int *,int ) ;} ;
typedef TYPE_2__ pdf_document ;
typedef int pdf_doc_event ;
struct TYPE_6__ {int type; } ;
struct TYPE_8__ {int alert; TYPE_1__ base; } ;
typedef TYPE_3__ pdf_alert_event_internal ;
typedef int pdf_alert_event ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,int *,int ) ;

void FUNC_1(fz_context *VAR_1, pdf_document *VAR_2, pdf_alert_event *VAR_3)
{
 if (VAR_2->event_cb)
 {
  pdf_alert_event_internal VAR_4;
  VAR_4.base.type = VAR_0;
  VAR_4.alert = *VAR_3;

  VAR_2->event_cb(VAR_1, VAR_2, (pdf_doc_event *)&VAR_4, VAR_2->event_cb_data);

  *VAR_3 = VAR_4.alert;
 }
}
