
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* buf; TYPE_1__* script_elem; } ;
struct TYPE_5__ {int IHTMLScriptElement_iface; } ;
typedef TYPE_2__ ScriptBSC ;
typedef int BSCallback ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(BSCallback *VAR_0)
{
    ScriptBSC *VAR_1 = FUNC_2(VAR_0);

    if(VAR_1->script_elem) {
        FUNC_0(&VAR_1->script_elem->IHTMLScriptElement_iface);
        VAR_1->script_elem = ((void*)0);
    }

    FUNC_1(VAR_1->buf);
    FUNC_1(VAR_1);
}
