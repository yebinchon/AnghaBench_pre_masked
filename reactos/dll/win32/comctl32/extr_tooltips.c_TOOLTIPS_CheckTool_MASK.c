
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* tools; int hwndSelf; } ;
struct TYPE_5__ {int uFlags; scalar_t__ hwnd; scalar_t__ uId; } ;
typedef TYPE_1__ TTTOOL_INFO ;
typedef TYPE_2__ TOOLTIPS_INFO ;
typedef int POINT ;
typedef int LPARAM ;
typedef int INT ;
typedef scalar_t__ HWND ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__ const*,scalar_t__,int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static INT
FUNC_9 (const TOOLTIPS_INFO *VAR_4, BOOL VAR_5)
{
    POINT VAR_6;
    HWND VAR_7;
    INT VAR_8;

    FUNC_1 (&VAR_6);
    VAR_7 = (HWND)FUNC_5 (VAR_4->hwndSelf, VAR_2, 0, (LPARAM)&VAR_6);
    if (VAR_7 == 0)
 return -1;

    FUNC_4 (VAR_7, &VAR_6);
    VAR_8 = FUNC_6 (VAR_4, VAR_7, &VAR_6);
    if (VAR_8 == -1)
 return -1;

    if (!(FUNC_3 (VAR_4->hwndSelf, VAR_0) & VAR_3) && VAR_5)
    {
        TTTOOL_INFO *VAR_9 = &VAR_4->tools[VAR_8];
        HWND VAR_10 = (VAR_9->uFlags & VAR_1) ? (HWND)VAR_9->uId : VAR_9->hwnd;

        if (!FUNC_7(VAR_10))
        {
            FUNC_8("not active: hwnd %p, parent %p, active %p\n",
                  VAR_10, FUNC_2(VAR_10), FUNC_0());
            return -1;
        }
    }

    FUNC_8("tool %d\n", VAR_8);

    return VAR_8;
}
