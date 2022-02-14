
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_22__ {int dwCaps; } ;
struct TYPE_28__ {int dwSize; scalar_t__ dwBackBufferCount; TYPE_1__ ddsCaps; int dwFlags; } ;
struct TYPE_27__ {TYPE_3__* lpVtbl; } ;
struct TYPE_26__ {TYPE_2__* lpVtbl; } ;
struct TYPE_25__ {scalar_t__ message; scalar_t__ wParam; } ;
struct TYPE_24__ {scalar_t__ (* SetCooperativeLevel ) (TYPE_6__*,int ,int ) ;scalar_t__ (* CreateSurface ) (TYPE_6__*,TYPE_7__*,TYPE_5__**,int *) ;int (* Release ) (TYPE_6__*) ;} ;
struct TYPE_23__ {int (* Release ) (TYPE_5__*) ;} ;
typedef TYPE_4__ MSG ;
typedef TYPE_5__* LPDIRECTDRAWSURFACE ;
typedef TYPE_6__* LPDIRECTDRAW ;
typedef int HWND ;
typedef int DDSurfaceDesc ;
typedef TYPE_7__ DDSURFACEDESC ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *,TYPE_6__**,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_4__*,int *,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int,scalar_t__,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (TYPE_7__*,int) ;
 scalar_t__ FUNC_8 (TYPE_6__*,int ,int ) ;
 int FUNC_9 (TYPE_6__*) ;
 scalar_t__ FUNC_10 (TYPE_6__*,TYPE_7__*,TYPE_5__**,int *) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (TYPE_6__*) ;

BOOL FUNC_14(HWND VAR_11){
    UINT VAR_12;
    MSG VAR_13;

    LPDIRECTDRAW VAR_14 = ((void*)0);
    LPDIRECTDRAWSURFACE VAR_15 = ((void*)0);
    DDSURFACEDESC VAR_16;

    if(FUNC_1(((void*)0), &VAR_14, ((void*)0)) != VAR_4)
        return VAR_5;

    if(VAR_14->lpVtbl->SetCooperativeLevel(VAR_14, VAR_11, VAR_2) != VAR_4)
    {
        VAR_14->lpVtbl->Release(VAR_14);
        return VAR_5;
    }


    FUNC_7(&VAR_16, sizeof(VAR_16));
    VAR_16.dwSize = sizeof(VAR_16);
    VAR_16.dwFlags = VAR_3;
    VAR_16.ddsCaps.dwCaps = VAR_1 | VAR_0;
    VAR_16.dwBackBufferCount = 0;

    if(VAR_14->lpVtbl->CreateSurface(VAR_14, &VAR_16, &VAR_15, ((void*)0)) != VAR_4)
    {
        VAR_14->lpVtbl->Release(VAR_14);
        return VAR_5;
    }

    VAR_12 = FUNC_5(VAR_11, -1, (UINT)VAR_7, ((void*)0));

    while (VAR_8)
    {
        if (FUNC_4(&VAR_13, ((void*)0), 0, 0, VAR_6))
        {
            if (VAR_13.message == VAR_10 && VAR_12 == VAR_13.wParam)
                break;
            FUNC_6(&VAR_13);
            FUNC_2(&VAR_13);
            if (VAR_13.message == VAR_9)
                FUNC_0(VAR_15);
        }
    }
    FUNC_3(VAR_11, VAR_12);
    VAR_15->lpVtbl->Release(VAR_15);
    VAR_14->lpVtbl->Release(VAR_14);

return VAR_8;
}
