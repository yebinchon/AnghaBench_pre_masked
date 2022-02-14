
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_14__ {TYPE_7__ IDirectInput7A_iface; TYPE_4__ IDirectInputJoyConfig8_iface; TYPE_3__ IDirectInput8W_iface; TYPE_2__ IDirectInput8A_iface; TYPE_1__ IDirectInput7W_iface; } ;
typedef int REFIID ;
typedef int LPVOID ;
typedef TYPE_5__ IDirectInputImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_2 ;
 TYPE_5__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_5__*) ;
 int FUNC_4 (TYPE_7__*,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static HRESULT FUNC_5(REFIID VAR_8, LPVOID *VAR_9, IDirectInputImpl **VAR_10)
{
    IDirectInputImpl *VAR_11 = FUNC_2( FUNC_1(), VAR_2, sizeof(IDirectInputImpl) );
    HRESULT VAR_12;

    if (!VAR_11)
        return VAR_1;

    VAR_11->IDirectInput7A_iface.lpVtbl = &VAR_4;
    VAR_11->IDirectInput7W_iface.lpVtbl = &VAR_5;
    VAR_11->IDirectInput8A_iface.lpVtbl = &VAR_6;
    VAR_11->IDirectInput8W_iface.lpVtbl = &VAR_7;
    VAR_11->IDirectInputJoyConfig8_iface.lpVtbl = &VAR_3;

    VAR_12 = FUNC_4( &VAR_11->IDirectInput7A_iface, VAR_8, VAR_9 );
    if (FUNC_0(VAR_12))
    {
        FUNC_3( FUNC_1(), 0, VAR_11 );
        return VAR_12;
    }

    if (VAR_10) *VAR_10 = VAR_11;
    return VAR_0;
}
