
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nsresult ;
typedef int nsIDOMStyleSheet ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IHTMLStyleSheet_iface; int * nsstylesheet; int dispex; } ;
typedef int IUnknown ;
typedef TYPE_1__ IHTMLStyleSheet ;
typedef TYPE_2__ HTMLStyleSheet ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,void**) ;

IHTMLStyleSheet *FUNC_5(nsIDOMStyleSheet *VAR_3)
{
    HTMLStyleSheet *VAR_4 = FUNC_2(sizeof(HTMLStyleSheet));
    nsresult VAR_5;

    VAR_4->IHTMLStyleSheet_iface.lpVtbl = &VAR_0;
    VAR_4->ref = 1;
    VAR_4->nsstylesheet = ((void*)0);

    FUNC_3(&VAR_4->dispex, (IUnknown*)&VAR_4->IHTMLStyleSheet_iface, &VAR_1);

    if(VAR_3) {
        VAR_5 = FUNC_4(VAR_3, &VAR_2,
                (void**)&VAR_4->nsstylesheet);
        if(FUNC_1(VAR_5))
            FUNC_0("Could not get nsICSSStyleSheet interface: %08x\n", VAR_5);
    }

    return &VAR_4->IHTMLStyleSheet_iface;
}
