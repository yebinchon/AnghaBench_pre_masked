
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int item ;
struct TYPE_8__ {int hwndTreeView; TYPE_1__* lpBrowseInfo; } ;
typedef TYPE_2__ browse_info ;
struct TYPE_10__ {scalar_t__ lpi; } ;
struct TYPE_9__ {void* hItem; scalar_t__ lParam; int mask; } ;
struct TYPE_7__ {scalar_t__ pidlRoot; } ;
typedef TYPE_3__ TVITEMEXW ;
typedef scalar_t__ LPVOID ;
typedef TYPE_4__* LPTV_ITEMDATA ;
typedef scalar_t__ LPITEMIDLIST ;
typedef scalar_t__ LPCITEMIDLIST ;
typedef int LPARAM ;
typedef int IShellFolder ;
typedef void* HTREEITEM ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,int *,scalar_t__,int *,scalar_t__*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,int ,int) ;

__attribute__((used)) static BOOL FUNC_10(browse_info *VAR_10, LPVOID VAR_11,
    BOOL VAR_12, HTREEITEM *VAR_13)
{
    LPITEMIDLIST VAR_14 = VAR_11;
    LPCITEMIDLIST VAR_15, VAR_16;
    TVITEMEXW VAR_17;
    BOOL VAR_18 = VAR_0;

    FUNC_9(&VAR_17, 0, sizeof(VAR_17));


    if (VAR_12) {
        IShellFolder *VAR_19;
        HRESULT VAR_20;

        VAR_20 = FUNC_5(&VAR_19);
        if (FUNC_0(VAR_20))
            goto done;

        VAR_20 = FUNC_3(VAR_19, ((void*)0), ((void*)0),
                     VAR_11, ((void*)0), &VAR_14, ((void*)0));
        FUNC_4(VAR_19);
        if (FUNC_0(VAR_20))
            goto done;
    }



    VAR_16 = VAR_10->lpBrowseInfo->pidlRoot;
    VAR_15 = VAR_14;
    while (!FUNC_7(VAR_16) && FUNC_8(VAR_16, VAR_15)) {
        VAR_16 = FUNC_2(VAR_16);
        VAR_15 = FUNC_2(VAR_15);
    }


    if (!FUNC_7(VAR_16))
        goto done;


    VAR_17.mask = VAR_6;
    VAR_17.hItem = (HTREEITEM)FUNC_6(VAR_10->hwndTreeView, VAR_9, VAR_5, 0);

    if (VAR_17.hItem)
        VAR_17.hItem = (HTREEITEM)FUNC_6(VAR_10->hwndTreeView, VAR_9, VAR_3,
                                             (LPARAM)VAR_17.hItem);


    while (VAR_17.hItem && !FUNC_7(VAR_15)) {
        LPTV_ITEMDATA VAR_21;

        FUNC_6(VAR_10->hwndTreeView, VAR_8, 0, (LPARAM)&VAR_17);
        VAR_21 = (LPTV_ITEMDATA)VAR_17.lParam;

        if (FUNC_8(VAR_21->lpi, VAR_15)) {
            VAR_15 = FUNC_2(VAR_15);
            if (!FUNC_7(VAR_15)) {


                FUNC_6(VAR_10->hwndTreeView, VAR_7, VAR_2, (LPARAM)VAR_17.hItem);
                VAR_17.hItem = (HTREEITEM)FUNC_6(VAR_10->hwndTreeView, VAR_9, VAR_3,
                                             (LPARAM)VAR_17.hItem);
            }
        } else {
            VAR_17.hItem = (HTREEITEM)FUNC_6(VAR_10->hwndTreeView, VAR_9, VAR_4,
                                             (LPARAM)VAR_17.hItem);
        }
    }

    if (FUNC_7(VAR_15) && VAR_17.hItem)
        VAR_18 = VAR_1;

done:
    if (VAR_14 && VAR_14 != VAR_11)
        FUNC_1(VAR_14);

    if (VAR_13)
        *VAR_13 = VAR_17.hItem;

    return VAR_18;
}
