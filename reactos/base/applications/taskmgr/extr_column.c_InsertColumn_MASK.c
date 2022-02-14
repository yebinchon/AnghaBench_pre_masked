
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mask; int fmt; int cx; int iSubItem; scalar_t__ pszText; } ;
typedef TYPE_1__ LVCOLUMN ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPCWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,TYPE_1__*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(int VAR_5, LPCWSTR VAR_6, int VAR_7, int VAR_8, int VAR_9)
{
    LVCOLUMN VAR_10;

    VAR_10.mask = VAR_2|VAR_0;
    VAR_10.pszText = (LPWSTR)VAR_6;
    VAR_10.fmt = VAR_7;

    if (VAR_8 != -1)
    {
        VAR_10.mask |= VAR_3;
        VAR_10.cx = VAR_8;
    }

    if (VAR_9 != -1)
    {
        VAR_10.mask |= VAR_1;
        VAR_10.iSubItem = VAR_9;
    }

    return FUNC_0(VAR_4, VAR_5, &VAR_10);
}
