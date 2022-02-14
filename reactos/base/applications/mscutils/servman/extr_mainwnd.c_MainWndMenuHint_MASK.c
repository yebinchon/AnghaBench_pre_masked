
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int UINT ;
struct TYPE_6__ {scalar_t__ CmdId; int HintId; } ;
struct TYPE_5__ {int hStatus; } ;
typedef TYPE_1__* PMAIN_WND_INFO ;
typedef TYPE_2__ MENU_HINT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL
FUNC_1(PMAIN_WND_INFO VAR_4,
                WORD VAR_5,
                const MENU_HINT *VAR_6,
                DWORD VAR_7,
                UINT VAR_8)
{
    BOOL VAR_9 = VAR_0;
    const MENU_HINT *VAR_10;
    UINT VAR_11 = VAR_8;

    VAR_10 = VAR_6 + VAR_7;
    while (VAR_6 != VAR_10)
    {
        if (VAR_6->CmdId == VAR_5)
        {
            VAR_11 = VAR_6->HintId;
            VAR_9 = VAR_2;
            break;
        }
        VAR_6++;
    }

    FUNC_0(VAR_4->hStatus,
                        VAR_1,
                        VAR_3,
                        VAR_11);

    return VAR_9;
}
