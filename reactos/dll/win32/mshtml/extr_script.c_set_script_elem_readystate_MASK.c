
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int header; TYPE_5__* elem; } ;
typedef TYPE_4__ fire_readystatechange_task_t ;
struct TYPE_14__ {TYPE_1__* window; } ;
struct TYPE_10__ {int nsnode; TYPE_8__* doc; } ;
struct TYPE_11__ {TYPE_2__ node; } ;
struct TYPE_13__ {TYPE_3__ element; scalar_t__ pending_readystatechange_event; int IHTMLScriptElement_iface; scalar_t__ readystate; } ;
struct TYPE_9__ {int task_magic; int parser_callback_cnt; } ;
typedef scalar_t__ READYSTATE ;
typedef TYPE_5__ HTMLScriptElement ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_8__*,int ,scalar_t__,int ,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(HTMLScriptElement *VAR_6, READYSTATE VAR_7)
{
    VAR_6->readystate = VAR_7;

    if(VAR_7 != VAR_2) {
        if(!VAR_6->element.node.doc->window->parser_callback_cnt) {
            fire_readystatechange_task_t *VAR_8;
            HRESULT VAR_9;

            if(VAR_6->pending_readystatechange_event)
                return;

            VAR_8 = FUNC_3(sizeof(*VAR_8));
            if(!VAR_8)
                return;

            FUNC_0(&VAR_6->IHTMLScriptElement_iface);
            VAR_8->elem = VAR_6;

            VAR_9 = FUNC_4(&VAR_8->header, VAR_4, VAR_5,
                    VAR_6->element.node.doc->window->task_magic);
            if(FUNC_1(VAR_9))
                VAR_6->pending_readystatechange_event = VAR_3;
        }else {
            VAR_6->pending_readystatechange_event = VAR_1;
            FUNC_2(VAR_6->element.node.doc, VAR_0, VAR_1,
                    VAR_6->element.node.nsnode, ((void*)0), ((void*)0));
        }
    }
}
