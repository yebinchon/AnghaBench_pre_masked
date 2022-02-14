
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* window; int cp_container; } ;
struct TYPE_10__ {scalar_t__ usermode; TYPE_5__ basedoc; int doc_object_service; scalar_t__ webbrowser; scalar_t__ view_sink; } ;
struct TYPE_8__ {int IHTMLWindow2_iface; } ;
struct TYPE_9__ {int load_flags; TYPE_1__ base; } ;
typedef TYPE_3__ HTMLDocumentObj ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (char*,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_6(HTMLDocumentObj *VAR_3)
{
    FUNC_2("(%p)\n", VAR_3);

    if(VAR_3->usermode == VAR_2)
        FUNC_5(&VAR_3->basedoc);

    FUNC_3(VAR_3);
    if(VAR_3->view_sink)
        FUNC_0(VAR_3->view_sink, VAR_1, -1);
    FUNC_4(&VAR_3->basedoc.cp_container, 1005);
    FUNC_3(VAR_3);

    if(VAR_3->webbrowser && VAR_3->usermode != VAR_2 && !(VAR_3->basedoc.window->load_flags & VAR_0))
        FUNC_1(VAR_3->doc_object_service, &VAR_3->basedoc.window->base.IHTMLWindow2_iface, 0);


}
