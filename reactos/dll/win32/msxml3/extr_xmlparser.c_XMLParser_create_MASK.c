
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; TYPE_1__ IXMLParser_iface; int state; scalar_t__ flags; int * input; int * nodefactory; } ;
typedef TYPE_2__ xmlparser ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,void*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int) ;
 int VAR_3 ;

HRESULT FUNC_2(void **VAR_4)
{
    xmlparser *VAR_5;

    FUNC_0("(%p)\n", VAR_4);

    VAR_5 = FUNC_1( sizeof(xmlparser) );
    if(!VAR_5)
        return VAR_0;

    VAR_5->IXMLParser_iface.lpVtbl = &VAR_3;
    VAR_5->nodefactory = ((void*)0);
    VAR_5->input = ((void*)0);
    VAR_5->flags = 0;
    VAR_5->state = VAR_2;
    VAR_5->ref = 1;

    *VAR_4 = &VAR_5->IXMLParser_iface;

    FUNC_0("returning iface %p\n", *VAR_4);

    return VAR_1;
}
