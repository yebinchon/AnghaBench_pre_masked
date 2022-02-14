
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ hwndNavigation; } ;
struct TYPE_8__ {int hwndTabCtrl; TYPE_1__ WinType; } ;
struct TYPE_7__ {scalar_t__ bottom; scalar_t__ right; } ;
typedef TYPE_2__ RECT ;
typedef int LRESULT ;
typedef scalar_t__ HWND ;
typedef TYPE_3__ HHInfo ;


 int FUNC_0 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,int ,int ,scalar_t__,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static LRESULT FUNC_4(HWND VAR_7)
{
    HHInfo *VAR_8 = (HHInfo*)FUNC_1(VAR_7, 0);
    RECT VAR_9;

    if(!VAR_8 || VAR_7 != VAR_8->WinType.hwndNavigation)
        return 0;

    FUNC_0(VAR_7, &VAR_9);
    FUNC_3(VAR_8->hwndTabCtrl, VAR_0, 0, 0,
                 VAR_9.right - VAR_4,
                 VAR_9.bottom - VAR_6, VAR_1);

    FUNC_2(VAR_8, VAR_2);
    FUNC_2(VAR_8, VAR_3);
    FUNC_2(VAR_8, VAR_5);
    return 0;
}
