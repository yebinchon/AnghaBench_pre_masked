
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VARTYPE ;
struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int result; int vt; TYPE_1__ IDispatch_iface; } ;
typedef TYPE_2__ DummyDispatch ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(VARTYPE VAR_2, DummyDispatch *VAR_3)
{
    VAR_3->IDispatch_iface.lpVtbl = &VAR_0;
    VAR_3->vt = VAR_2;
    VAR_3->result = VAR_1;
}
