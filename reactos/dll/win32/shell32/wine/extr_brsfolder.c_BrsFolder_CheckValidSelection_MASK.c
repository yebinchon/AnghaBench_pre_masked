
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int hWnd; TYPE_3__* lpBrowseInfo; } ;
typedef TYPE_1__ browse_info ;
struct TYPE_8__ {int ulFlags; } ;
struct TYPE_7__ {int lpi; int lpsfParent; } ;
typedef TYPE_2__* LPTV_ITEMDATA ;
typedef int LPCITEMIDLIST ;
typedef TYPE_3__* LPBROWSEINFOW ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,int,int *,int*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_6( browse_info *VAR_11, LPTV_ITEMDATA VAR_12 )
{
    LPBROWSEINFOW VAR_13 = VAR_11->lpBrowseInfo;
    LPCITEMIDLIST VAR_14 = VAR_12->lpi;
    BOOL VAR_15 = VAR_10;
    DWORD VAR_16;
    HRESULT VAR_17;

    if ((VAR_13->ulFlags & VAR_1) &&
        !FUNC_4(VAR_14, VAR_6))
        VAR_15 = VAR_4;
    if (VAR_13->ulFlags & VAR_2)
    {
        VAR_16 = VAR_7 | VAR_8;
        VAR_17 = FUNC_3(VAR_12->lpsfParent, 1,
                                (LPCITEMIDLIST*)&VAR_12->lpi, &VAR_16);
        if (FUNC_1(VAR_17) || !(VAR_16 & (VAR_7|VAR_8)))
            VAR_15 = VAR_4;
    }

    VAR_16 = VAR_9 | VAR_8;
    VAR_17 = FUNC_3(VAR_12->lpsfParent, 1,
            (LPCITEMIDLIST*)&VAR_12->lpi, &VAR_16);
    if (FUNC_1(VAR_17) ||
            ((VAR_16 & (VAR_9|VAR_8)) != (VAR_9|VAR_8)))
    {
        if (VAR_13->ulFlags & VAR_3)
            VAR_15 = VAR_4;
        FUNC_0(FUNC_2(VAR_11->hWnd, VAR_5), VAR_4);
    }
    else
        FUNC_0(FUNC_2(VAR_11->hWnd, VAR_5), VAR_10);

    FUNC_5(VAR_11->hWnd, VAR_0, 0, VAR_15);
}
