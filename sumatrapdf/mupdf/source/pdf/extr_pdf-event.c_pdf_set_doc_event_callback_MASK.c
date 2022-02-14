
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* event_cb_data; int * event_cb; } ;
typedef TYPE_1__ pdf_document ;
typedef int pdf_doc_event_cb ;
typedef int fz_context ;



void FUNC_0(fz_context *VAR_0, pdf_document *VAR_1, pdf_doc_event_cb *VAR_2, void *VAR_3)
{
 VAR_1->event_cb = VAR_2;
 VAR_1->event_cb_data = VAR_3;
}
