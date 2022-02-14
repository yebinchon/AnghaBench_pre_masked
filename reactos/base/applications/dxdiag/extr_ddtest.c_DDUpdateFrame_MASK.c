
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_24__ {int dwSize; scalar_t__ dwFillColor; } ;
struct TYPE_23__ {TYPE_1__* lpVtbl; } ;
struct TYPE_22__ {scalar_t__ bottom; scalar_t__ top; scalar_t__ right; scalar_t__ left; } ;
struct TYPE_21__ {scalar_t__ (* GetDC ) (TYPE_3__*,int *) ;int (* Blt ) (TYPE_3__*,TYPE_2__*,TYPE_3__*,int *,int,TYPE_4__*) ;int (* Flip ) (TYPE_3__*,int *,int ) ;int (* ReleaseDC ) (TYPE_3__*,int ) ;} ;
typedef TYPE_2__ RECT ;
typedef TYPE_3__* LPDIRECTDRAWSURFACE ;
typedef scalar_t__ INT ;
typedef int HDC ;
typedef int HBRUSH ;
typedef int DDBlitFx ;
typedef TYPE_4__ DDBLTFX ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,TYPE_3__*,int *,int,TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int *,int ) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*,TYPE_3__*,int *,int,TYPE_4__*) ;

VOID FUNC_9(LPDIRECTDRAWSURFACE VAR_7 ,LPDIRECTDRAWSURFACE VAR_8, BOOL VAR_9, INT *VAR_10, INT *VAR_11, INT *VAR_12, INT *VAR_13, RECT *VAR_14)
{
    HDC VAR_15;
    DDBLTFX VAR_16;


    FUNC_3(&VAR_16, sizeof(VAR_16));
    VAR_16.dwSize = sizeof(VAR_16);
    VAR_16.dwFillColor = 0;

    VAR_8->lpVtbl->Blt(VAR_8, ((void*)0), ((void*)0), ((void*)0), VAR_0 | VAR_1, &VAR_16);

    if (VAR_8->lpVtbl->GetDC(VAR_8, &VAR_15) == VAR_3)
    {
        RECT VAR_17;
        HBRUSH VAR_18;

        VAR_17.left = *VAR_10;
        VAR_17.right = *VAR_10+VAR_4;
        VAR_17.top = *VAR_11;
        VAR_17.bottom = *VAR_11+VAR_4;

        VAR_18 = FUNC_0(FUNC_2(255,255,255));
        FUNC_1(VAR_15, &VAR_17, VAR_18);

        if(*VAR_10 >= (VAR_6 - VAR_4)) *VAR_12 = -(*VAR_12);
        if(*VAR_11 >= (VAR_5 - VAR_4)) *VAR_13 = -(*VAR_13);
        if(*VAR_10 < 0) *VAR_12 = -1*(*VAR_12);
        if(*VAR_11 < 0) *VAR_13 = -1*(*VAR_13);

        *VAR_10 += *VAR_12;
        *VAR_11 += *VAR_13;

        VAR_8->lpVtbl->ReleaseDC(VAR_8, VAR_15);

        if(VAR_9)
        {
            VAR_7->lpVtbl->Flip(VAR_7, ((void*)0), VAR_2);
        }
        else
        {
            VAR_7->lpVtbl->Blt(VAR_7, VAR_14, VAR_8, ((void*)0), VAR_1, ((void*)0));
        }
    }
}
