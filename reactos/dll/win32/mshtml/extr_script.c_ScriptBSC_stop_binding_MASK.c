
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ readystate; int IHTMLScriptElement_iface; } ;
struct TYPE_4__ {TYPE_2__* script_elem; scalar_t__ size; int * buf; int hres; } ;
typedef TYPE_1__ ScriptBSC ;
typedef int HRESULT ;
typedef int BSCallback ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ) ;

__attribute__((used)) static HRESULT FUNC_6(BSCallback *VAR_3, HRESULT VAR_4)
{
    ScriptBSC *VAR_5 = FUNC_4(VAR_3);

    VAR_5->hres = VAR_4;

    if(FUNC_2(VAR_4)) {
        if(VAR_5->script_elem->readystate == VAR_1)
            FUNC_5(VAR_5->script_elem, VAR_0);
    }else {
        FUNC_0("binding failed %08x\n", VAR_4);
        FUNC_3(VAR_5->buf);
        VAR_5->buf = ((void*)0);
        VAR_5->size = 0;
    }

    FUNC_1(&VAR_5->script_elem->IHTMLScriptElement_iface);
    VAR_5->script_elem = ((void*)0);
    return VAR_2;
}
