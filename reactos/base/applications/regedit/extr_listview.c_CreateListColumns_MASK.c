
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int mask; int iSubItem; int cx; int fmt; int * pszText; } ;
typedef TYPE_1__ LVCOLUMN ;
typedef int INT ;
typedef int HWND ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int,TYPE_1__*) ;
 int FUNC_2 (int ,scalar_t__,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static BOOL FUNC_3(HWND VAR_11, INT VAR_12)
{
    WCHAR VAR_13[50];
    int VAR_14;
    LVCOLUMN VAR_15;


    VAR_15.mask = VAR_2 | VAR_5 | VAR_4 | VAR_3;
    VAR_15.pszText = VAR_13;


    for (VAR_14 = 0; VAR_14 < VAR_6; VAR_14++)
    {
        VAR_15.iSubItem = VAR_14;
        VAR_15.cx = (VAR_12 * VAR_9[VAR_14]) / 100;
        VAR_15.fmt = VAR_8[VAR_14];
        FUNC_2(VAR_10, VAR_1 + VAR_14, VAR_13, FUNC_0(VAR_13));
        if (FUNC_1(VAR_11, VAR_14, &VAR_15) == -1) return VAR_0;
    }
    return VAR_7;
}
