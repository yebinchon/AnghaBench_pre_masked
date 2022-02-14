
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int refCount; TYPE_1__ ITfEditSession_iface; } ;
typedef TYPE_1__ ITfEditSession ;
typedef int HRESULT ;
typedef TYPE_2__ EditSession ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static HRESULT FUNC_2(ITfEditSession **VAR_4)
{
    EditSession *VAR_5;

    *VAR_4 = ((void*)0);
    VAR_5 = FUNC_1(FUNC_0(),VAR_2,sizeof(EditSession));
    if (VAR_5 == ((void*)0))
        return VAR_0;

    VAR_5->ITfEditSession_iface.lpVtbl = &VAR_1;
    VAR_5->refCount = 1;

    *VAR_4 = &VAR_5->ITfEditSession_iface;
    return VAR_3;
}
