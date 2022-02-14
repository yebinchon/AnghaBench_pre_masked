
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int header; TYPE_3__* pending_window; int * window; } ;
typedef TYPE_2__ start_doc_binding_task_t ;
struct TYPE_7__ {int IHTMLWindow2_iface; } ;
struct TYPE_9__ {int task_magic; TYPE_1__ base; } ;
typedef int HTMLOuterWindow ;
typedef TYPE_3__ HTMLInnerWindow ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,TYPE_3__*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

HRESULT FUNC_4(HTMLOuterWindow *VAR_3, HTMLInnerWindow *VAR_4)
{
    start_doc_binding_task_t *VAR_5;

    FUNC_1("%p\n", VAR_4);

    VAR_5 = FUNC_2(sizeof(start_doc_binding_task_t));
    if(!VAR_5)
        return VAR_0;

    VAR_5->window = VAR_3;
    VAR_5->pending_window = VAR_4;
    FUNC_0(&VAR_4->base.IHTMLWindow2_iface);

    return FUNC_3(&VAR_5->header, VAR_1, VAR_2, VAR_4->task_magic);
}
