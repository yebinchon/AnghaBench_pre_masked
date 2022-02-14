
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* item; } ;
typedef TYPE_1__ pdf_exec_menu_item_event_internal ;
struct TYPE_5__ {scalar_t__ type; } ;
typedef TYPE_2__ pdf_doc_event ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;

const char *FUNC_0(fz_context *VAR_1, pdf_doc_event *VAR_2)
{
 const char *VAR_3 = ((void*)0);

 if (VAR_2->type == VAR_0)
  VAR_3 = ((pdf_exec_menu_item_event_internal *)VAR_2)->item;

 return VAR_3;
}
