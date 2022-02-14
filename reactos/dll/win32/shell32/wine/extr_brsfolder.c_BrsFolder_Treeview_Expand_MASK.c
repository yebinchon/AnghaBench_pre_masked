
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int hwndTreeView; } ;
typedef TYPE_2__ browse_info ;
struct TYPE_11__ {int lpi; int pEnumIL; int lpifq; int * lpsfParent; } ;
struct TYPE_8__ {int state; scalar_t__ hItem; int lParam; } ;
struct TYPE_10__ {TYPE_1__ itemNew; } ;
typedef TYPE_3__ NMTREEVIEWW ;
typedef int LRESULT ;
typedef TYPE_4__* LPTV_ITEMDATA ;
typedef int LPARAM ;
typedef int IShellFolder ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int ,scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int *,void**) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static LRESULT FUNC_9( browse_info *VAR_5, NMTREEVIEWW *VAR_6 )
{
    IShellFolder *VAR_7 = ((void*)0);
    LPTV_ITEMDATA VAR_8 = (LPTV_ITEMDATA) VAR_6->itemNew.lParam;
    HRESULT VAR_9;

    FUNC_6("TVN_ITEMEXPANDINGA/W\n");

    if ((VAR_6->itemNew.state & VAR_3))
        return 0;

    if (!FUNC_7(VAR_8->lpi)) {
        VAR_9 = FUNC_2( VAR_8->lpsfParent, VAR_8->lpi, 0,
                                       &VAR_1, (void**)&VAR_7 );
    } else {
        VAR_7 = VAR_8->lpsfParent;
        FUNC_1(VAR_7);
        VAR_9 = VAR_2;
    }

    if (FUNC_4(VAR_9))
    {
        FUNC_0( VAR_5, VAR_7, VAR_8->lpifq, VAR_6->itemNew.hItem, VAR_8->pEnumIL);
        FUNC_3( VAR_7 );
    }



    if (!FUNC_8(VAR_8->lpi))
        FUNC_5( VAR_5->hwndTreeView, VAR_4,
                      VAR_0, (LPARAM)VAR_6->itemNew.hItem );

    return 0;
}
