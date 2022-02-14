
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; } ;
typedef TYPE_1__ pdf_doc_event ;
struct TYPE_5__ {int alert; } ;
typedef TYPE_2__ pdf_alert_event_internal ;
typedef int pdf_alert_event ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;

pdf_alert_event *FUNC_0(fz_context *VAR_1, pdf_doc_event *VAR_2)
{
 pdf_alert_event *VAR_3 = ((void*)0);

 if (VAR_2->type == VAR_0)
  VAR_3 = &((pdf_alert_event_internal *)VAR_2)->alert;

 return VAR_3;
}
