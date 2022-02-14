
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ cy; scalar_t__ cx; } ;
struct TYPE_12__ {TYPE_4__* lpBrowseInfo; scalar_t__ hwndTreeView; int * layout; TYPE_1__ szMin; int hWnd; } ;
typedef TYPE_2__ browse_info ;
struct TYPE_14__ {int ulFlags; scalar_t__ lpszTitle; } ;
struct TYPE_13__ {scalar_t__ bottom; scalar_t__ right; scalar_t__ top; scalar_t__ left; } ;
typedef TYPE_3__ RECT ;
typedef TYPE_4__* LPBROWSEINFOW ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_12 ;
 int * FUNC_6 (int ,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 (int ,int ,TYPE_2__*) ;
 int FUNC_8 (scalar_t__,int ,int ,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,int ) ;
 int VAR_16 ;
 int FUNC_11 (TYPE_4__*,int ,int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static BOOL FUNC_12( HWND VAR_19, browse_info *VAR_20 )
{
    LPBROWSEINFOW VAR_21 = VAR_20->lpBrowseInfo;

    VAR_20->hWnd = VAR_19;
    FUNC_7( VAR_19, VAR_18, VAR_20 );

    if (VAR_21->ulFlags & VAR_2)
        FUNC_1("flags BIF_NEWDIALOGSTYLE partially implemented\n");
    if (VAR_21->ulFlags & ~VAR_13)
 FUNC_1("flags %x not implemented\n", VAR_21->ulFlags & ~VAR_13);

    if (VAR_21->ulFlags & VAR_2)
    {
        RECT VAR_22;

        VAR_20->layout = FUNC_6(VAR_19, VAR_17, VAR_12);


        FUNC_4(VAR_19, &VAR_22);
        VAR_20->szMin.cx = VAR_22.right - VAR_22.left;
        VAR_20->szMin.cy = VAR_22.bottom - VAR_22.top;
    }
    else
    {
        VAR_20->layout = ((void*)0);
    }

    if (VAR_21->lpszTitle)
 FUNC_9( FUNC_3(VAR_19, VAR_10), VAR_21->lpszTitle );
    else
 FUNC_10( FUNC_3(VAR_19, VAR_10), VAR_15 );

    if (!(VAR_21->ulFlags & VAR_4)
        || (VAR_21->ulFlags & VAR_2))
 FUNC_10( FUNC_3(VAR_19, VAR_9), VAR_15 );


    if ((VAR_21->ulFlags & VAR_3)
        || !(VAR_21->ulFlags & VAR_2))
        FUNC_10( FUNC_3(VAR_19, VAR_8), VAR_15 );


    if (!(VAR_21->ulFlags & VAR_1))
    {
        FUNC_10( FUNC_3(VAR_19, VAR_6), VAR_15 );
        FUNC_10( FUNC_3(VAR_19, VAR_7), VAR_15 );
    }

    VAR_20->hwndTreeView = FUNC_3( VAR_19, VAR_11 );
    if (VAR_20->hwndTreeView)
    {
        FUNC_5( VAR_20 );


        if ((VAR_21->ulFlags & VAR_2)
            && !(VAR_21->ulFlags & VAR_1))
        {
            RECT VAR_23;
            FUNC_2(VAR_20->hwndTreeView, &VAR_23);
            FUNC_8(VAR_20->hwndTreeView, VAR_5, 0, 0,
                         VAR_23.right, VAR_23.bottom + 40, VAR_14);
        }
    }
    else
        FUNC_0("treeview control missing!\n");

    FUNC_11( VAR_20->lpBrowseInfo, VAR_19, VAR_0, 0 );

    return VAR_16;
}
