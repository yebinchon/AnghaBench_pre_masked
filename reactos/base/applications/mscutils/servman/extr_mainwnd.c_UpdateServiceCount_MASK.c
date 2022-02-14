
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_3__ {int hStatus; int hListView; } ;
typedef TYPE_1__* PMAIN_WND_INFO ;
typedef int LPWSTR ;
typedef int LPARAM ;
typedef int INT ;


 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int *,int,int ,int ) ;
 int VAR_2 ;

VOID
FUNC_5(PMAIN_WND_INFO VAR_3)
{
    LPWSTR VAR_4;

    if (FUNC_0(&VAR_4,
                           VAR_2,
                           VAR_0))
    {
        WCHAR VAR_5[32];

        INT VAR_6 = FUNC_1(VAR_3->hListView);

        FUNC_4(VAR_5,
                   31,
                   VAR_4,
                   VAR_6);

        FUNC_3(VAR_3->hStatus,
                    VAR_1,
                    0,
                    (LPARAM)VAR_5);

        FUNC_2(VAR_4);
    }
}
