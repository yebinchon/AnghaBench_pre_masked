
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int event_cb_data; int (* event_cb ) (int *,TYPE_1__*,TYPE_2__*,int ) ;} ;
typedef TYPE_1__ pdf_document ;
struct TYPE_7__ {int type; } ;
typedef TYPE_2__ pdf_doc_event ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*,TYPE_2__*,int ) ;

void FUNC_1(fz_context *VAR_1, pdf_document *VAR_2)
{
 pdf_doc_event VAR_3;

 VAR_3.type = VAR_0;

 if (VAR_2->event_cb)
  VAR_2->event_cb(VAR_1, VAR_2, &VAR_3, VAR_2->event_cb_data);
}
