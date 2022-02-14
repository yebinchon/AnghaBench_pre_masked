
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; TYPE_3__ IWshExec_iface; int classinfo; int info; } ;
typedef TYPE_1__ WshExecImpl ;
struct TYPE_9__ {int member_0; } ;
typedef TYPE_2__ STARTUPINFOW ;
typedef TYPE_3__ IWshExec ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int *,int ,int ,int *,int *,TYPE_2__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_6(BSTR VAR_5, IWshExec **VAR_6)
{
    STARTUPINFOW VAR_7 = {0};
    WshExecImpl *VAR_8;

    *VAR_6 = ((void*)0);

    VAR_8 = FUNC_3(sizeof(*VAR_8));
    if (!VAR_8)
        return VAR_1;

    VAR_8->IWshExec_iface.lpVtbl = &VAR_4;
    VAR_8->ref = 1;

    if (!FUNC_0(((void*)0), VAR_5, ((void*)0), ((void*)0), VAR_2, 0, ((void*)0), ((void*)0), &VAR_7, &VAR_8->info)) {
        FUNC_4(VAR_8);
        return FUNC_2(FUNC_1());
    }

    FUNC_5(&VAR_0, (IUnknown *)&VAR_8->IWshExec_iface, &VAR_8->classinfo);
    *VAR_6 = &VAR_8->IWshExec_iface;
    return VAR_3;
}
