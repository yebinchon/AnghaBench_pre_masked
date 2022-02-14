
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* Part; } ;
struct TYPE_4__ {scalar_t__ EditHwnd; } ;
typedef TYPE_2__ IPADDRESS_INFO ;
typedef scalar_t__ HWND ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(const IPADDRESS_INFO *VAR_0, HWND VAR_1)
{
    int VAR_2;

    FUNC_1("(hwnd=%p)\n", VAR_1);

    for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
        if (VAR_0->Part[VAR_2].EditHwnd == VAR_1) return VAR_2;

    FUNC_0("We subclassed the wrong window! (hwnd=%p)\n", VAR_1);
    return -1;
}
