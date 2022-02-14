
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char const* url; int new_frame; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_9__ {TYPE_2__ launch_url; TYPE_1__ base; } ;
typedef TYPE_3__ pdf_launch_url_event_internal ;
struct TYPE_10__ {int event_cb_data; int (* event_cb ) (int *,TYPE_4__*,int *,int ) ;} ;
typedef TYPE_4__ pdf_document ;
typedef int pdf_doc_event ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*,int *,int ) ;

void FUNC_1(fz_context *VAR_1, pdf_document *VAR_2, const char *VAR_3, int VAR_4)
{
 if (VAR_2->event_cb)
 {
  pdf_launch_url_event_internal VAR_5;

  VAR_5.base.type = VAR_0;
  VAR_5.launch_url.url = VAR_3;
  VAR_5.launch_url.new_frame = VAR_4;
  VAR_2->event_cb(VAR_1, VAR_2, (pdf_doc_event *)&VAR_5, VAR_2->event_cb_data);
 }
}
