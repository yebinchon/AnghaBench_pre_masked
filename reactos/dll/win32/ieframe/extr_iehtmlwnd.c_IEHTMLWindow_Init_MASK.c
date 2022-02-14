
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {TYPE_3__* doc_host; TYPE_1__ IHTMLWindow2_iface; } ;
struct TYPE_7__ {TYPE_2__ html_window; } ;
typedef TYPE_3__ DocHost ;


 int VAR_0 ;

void FUNC_0(DocHost *VAR_1)
{
    VAR_1->html_window.IHTMLWindow2_iface.lpVtbl = &VAR_0;
    VAR_1->html_window.doc_host = VAR_1;
}
