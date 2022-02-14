
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int refs; TYPE_2__ INetFwOpenPort_iface; scalar_t__ port; int protocol; int * name; } ;
typedef TYPE_1__ fw_port ;
typedef TYPE_2__* LPVOID ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,TYPE_2__*,...) ;
 int VAR_3 ;

HRESULT FUNC_3( IUnknown *VAR_4, LPVOID *VAR_5 )
{
    fw_port *VAR_6;

    FUNC_2("(%p,%p)\n", VAR_4, VAR_5);

    VAR_6 = FUNC_1( FUNC_0(), 0, sizeof(*VAR_6) );
    if (!VAR_6) return VAR_0;

    VAR_6->INetFwOpenPort_iface.lpVtbl = &VAR_3;
    VAR_6->refs = 1;
    VAR_6->name = ((void*)0);
    VAR_6->protocol = VAR_1;
    VAR_6->port = 0;

    *VAR_5 = &VAR_6->INetFwOpenPort_iface;

    FUNC_2("returning iface %p\n", *VAR_5);
    return VAR_2;
}
