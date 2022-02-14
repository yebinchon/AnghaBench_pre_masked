
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int hWndListView; } ;
struct TYPE_4__ {int iItem; scalar_t__ lParam; int mask; } ;
typedef TYPE_1__ LVITEMW ;
typedef int LPARAM ;
typedef int CPlItem ;
typedef TYPE_2__ CPanel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static CPlItem* FUNC_1(CPanel *VAR_5)
{
    LVITEMW VAR_6;
    int VAR_7;

    VAR_7 = FUNC_0(VAR_5->hWndListView, VAR_2, -1, VAR_3
        | VAR_4);

    if (VAR_7 != -1)
    {
        VAR_6.iItem = VAR_7;
        VAR_6.mask = VAR_0;

        if (FUNC_0(VAR_5->hWndListView, VAR_1, 0, (LPARAM) &VAR_6))
            return (CPlItem *) VAR_6.lParam;
    }

    return ((void*)0);
}
