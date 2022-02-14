
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int IXSLTemplate_iface; } ;
typedef TYPE_3__ xsltemplate ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_10__ {scalar_t__ count; int list; } ;
struct TYPE_9__ {int * unk; } ;
struct TYPE_12__ {int ref; TYPE_5__ IXSLProcessor_iface; int dispex; TYPE_3__* stylesheet; TYPE_2__ params; int * outstr; int output_type; TYPE_1__ output; int * input; } ;
typedef TYPE_4__ xslprocessor ;
typedef TYPE_5__ IXSLProcessor ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;

HRESULT FUNC_5(xsltemplate *VAR_5, IXSLProcessor **VAR_6)
{
    xslprocessor *VAR_7;

    FUNC_1("(%p)\n", VAR_6);

    VAR_7 = FUNC_2( sizeof (*VAR_7) );
    if(!VAR_7)
        return VAR_0;

    VAR_7->IXSLProcessor_iface.lpVtbl = &VAR_3;
    VAR_7->ref = 1;
    VAR_7->input = ((void*)0);
    VAR_7->output.unk = ((void*)0);
    VAR_7->output_type = VAR_1;
    VAR_7->outstr = ((void*)0);
    FUNC_4(&VAR_7->params.list);
    VAR_7->params.count = 0;
    VAR_7->stylesheet = VAR_5;
    FUNC_0(&VAR_5->IXSLTemplate_iface);
    FUNC_3(&VAR_7->dispex, (IUnknown*)&VAR_7->IXSLProcessor_iface, &VAR_4);

    *VAR_6 = &VAR_7->IXSLProcessor_iface;

    FUNC_1("returning iface %p\n", *VAR_6);

    return VAR_2;
}
