
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int column ;
typedef int VOID ;
struct TYPE_6__ {int dwAttributes; } ;
struct TYPE_5__ {int mask; int iSubItem; char* pszText; int cx; int fmt; } ;
typedef TYPE_1__ LV_COLUMN ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int,TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 TYPE_2__ VAR_13 ;

__attribute__((used)) static VOID
FUNC_7(HWND VAR_14)
{
    LV_COLUMN VAR_15;
    HWND VAR_16;

    FUNC_4();

    if (VAR_13.dwAttributes & VAR_5)
    {
        FUNC_0(VAR_14, VAR_4, VAR_0);
        FUNC_0(VAR_14, VAR_3, VAR_1);
    }
    else
    {
        FUNC_0(VAR_14, VAR_4, VAR_1);
        FUNC_0(VAR_14, VAR_3, VAR_0);
    }

    VAR_16 = FUNC_1(VAR_14, VAR_2);

    FUNC_3(VAR_16, VAR_12);

    FUNC_6(&VAR_15, sizeof(VAR_15));

    VAR_15.mask = VAR_8 | VAR_10 | VAR_11 | VAR_9;

    VAR_15.fmt = VAR_6;
    VAR_15.iSubItem = 0;
    VAR_15.pszText = L"";
    VAR_15.cx = 210;
    FUNC_2(VAR_16, 0, &VAR_15);

    VAR_15.fmt = VAR_7;
    VAR_15.cx = 145;
    VAR_15.iSubItem = 1;
    VAR_15.pszText = L"";
    FUNC_2(VAR_16, 1, &VAR_15);

    FUNC_5(VAR_16);
}
