
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IHTMLEventObj_iface; } ;
typedef int IHTMLEventObj ;
typedef TYPE_1__ HTMLEventObj ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;

HRESULT FUNC_1(IHTMLEventObj **VAR_2)
{
    HTMLEventObj *VAR_3;

    VAR_3 = FUNC_0();
    if(!VAR_3)
        return VAR_0;

    *VAR_2 = &VAR_3->IHTMLEventObj_iface;
    return VAR_1;
}
