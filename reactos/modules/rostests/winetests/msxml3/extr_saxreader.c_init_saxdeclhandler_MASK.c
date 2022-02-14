
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * lpVtbl; } ;
struct saxdeclhandler {int ref; int qi_hr; TYPE_1__ ISAXDeclHandler_iface; } ;
typedef int HRESULT ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct saxdeclhandler *VAR_1, HRESULT VAR_2)
{
    VAR_1->ISAXDeclHandler_iface.lpVtbl = &VAR_0;
    VAR_1->ref = 1;
    VAR_1->qi_hr = VAR_2;
}
