
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ pidlRet; int hWnd; int lpBrowseInfo; } ;
typedef TYPE_2__ browse_info ;
typedef int WCHAR ;
struct TYPE_12__ {int lpi; int lpsfParent; int lpifq; } ;
struct TYPE_9__ {int lParam; } ;
struct TYPE_11__ {TYPE_1__ itemNew; } ;
typedef TYPE_3__ NMTREEVIEWW ;
typedef TYPE_4__* LPTV_ITEMDATA ;
typedef int LPARAM ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static HRESULT FUNC_7( browse_info *VAR_5, NMTREEVIEWW *VAR_6 )
{
    LPTV_ITEMDATA VAR_7 = (LPTV_ITEMDATA) VAR_6->itemNew.lParam;
    WCHAR VAR_8[VAR_2];

    FUNC_4(VAR_5->pidlRet);
    VAR_5->pidlRet = FUNC_3(VAR_7->lpifq);

    if (FUNC_2(VAR_7->lpsfParent, VAR_7->lpi, VAR_3, VAR_8))
            FUNC_5( FUNC_1(VAR_5->hWnd, VAR_1), VAR_8 );

    FUNC_6( VAR_5->lpBrowseInfo, VAR_5->hWnd, VAR_0,
                           (LPARAM)VAR_5->pidlRet );
    FUNC_0( VAR_5, VAR_7 );
    return VAR_4;
}
