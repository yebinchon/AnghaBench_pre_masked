
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_6__ {int nSplitPos; int * hListWnd; int * hTreeWnd; int * hAddressBtnWnd; int * hAddressBarWnd; } ;
struct TYPE_5__ {int bottom; int top; int const left; int const right; } ;
typedef TYPE_1__ RECT ;
typedef scalar_t__ HDWP ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int *,int const,int,int const,int const,int const) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,int ,int ,int,int) ;
 TYPE_2__* VAR_4 ;
 int * VAR_5 ;

extern void FUNC_6(int VAR_6, int VAR_7)
{
    HDWP VAR_8 = FUNC_0(4);
    RECT VAR_9, VAR_10, VAR_11;
    const int VAR_12 = 44;
    const int VAR_13 = 22;
    int VAR_14 = FUNC_3(VAR_0);
    const UINT VAR_15 = VAR_3 | VAR_2;
    FUNC_5(&VAR_9, 0, 0, VAR_6, VAR_7);
    VAR_7 = 0;
    if (VAR_5 != ((void*)0))
    {
        FUNC_4(VAR_5, &VAR_10);
        VAR_7 = VAR_10.bottom - VAR_10.top;
    }
    FUNC_4(VAR_4->hAddressBtnWnd, &VAR_11);
    VAR_6 = VAR_4->nSplitPos + VAR_1 / 2;
    if (VAR_8)
        VAR_8 = FUNC_1(VAR_8, VAR_4->hAddressBarWnd, ((void*)0),
                              VAR_9.left, VAR_9.top,
                              VAR_9.right - VAR_9.left - VAR_12, VAR_13,
                              VAR_15);
    if (VAR_8)
        VAR_8 = FUNC_1(VAR_8, VAR_4->hAddressBtnWnd, ((void*)0),
                              VAR_9.right - VAR_12, VAR_9.top,
                              VAR_12, VAR_13,
                              VAR_15);
    if (VAR_8)
        VAR_8 = FUNC_1(VAR_8, VAR_4->hTreeWnd, ((void*)0),
                              VAR_9.left,
                              VAR_9.top + VAR_13 + VAR_14,
                              VAR_4->nSplitPos - VAR_1/2 - VAR_9.left,
                              VAR_9.bottom - VAR_9.top - VAR_7 - 2 * VAR_14,
                              VAR_15);
    if (VAR_8)
        VAR_8 = FUNC_1(VAR_8, VAR_4->hListWnd, ((void*)0),
                              VAR_9.left + VAR_6,
                              VAR_9.top + VAR_13 + VAR_14,
                              VAR_9.right - VAR_6,
                              VAR_9.bottom - VAR_9.top - VAR_7 - 2 * VAR_14,
                              VAR_15);
    if (VAR_8)
        FUNC_2(VAR_8);
}
