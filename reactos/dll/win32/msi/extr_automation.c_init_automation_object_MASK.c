
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tid_t ;
struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; int tid; int msiHandle; TYPE_2__ IProvideMultipleClassInfo_iface; TYPE_1__ IDispatch_iface; } ;
typedef int MSIHANDLE ;
typedef int HRESULT ;
typedef TYPE_3__ AutomationObject ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_3__*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static HRESULT FUNC_3(AutomationObject *VAR_3, MSIHANDLE VAR_4, tid_t VAR_5)
{
    FUNC_0("(%p, %d, %s)\n", VAR_3, VAR_4, FUNC_1(FUNC_2(VAR_5)));

    VAR_3->IDispatch_iface.lpVtbl = &VAR_0;
    VAR_3->IProvideMultipleClassInfo_iface.lpVtbl = &VAR_1;
    VAR_3->ref = 1;

    VAR_3->msiHandle = VAR_4;
    VAR_3->tid = VAR_5;

    return VAR_2;
}
