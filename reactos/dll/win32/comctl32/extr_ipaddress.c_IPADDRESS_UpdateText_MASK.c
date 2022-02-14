
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_5__ {int Self; TYPE_1__* Part; } ;
struct TYPE_4__ {int EditHwnd; } ;
typedef TYPE_2__ IPADDRESS_INFO ;
typedef int INT ;


 scalar_t__ FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char const*) ;

__attribute__((used)) static void FUNC_3 (const IPADDRESS_INFO *VAR_0)
{
    static const WCHAR VAR_1[] = {'0', 0};
    static const WCHAR VAR_2[] = {'.', 0};
    WCHAR VAR_3[4];
    WCHAR VAR_4[16];
    INT VAR_5;

    VAR_4[0] = 0;

    for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
        if (FUNC_0 (VAR_0->Part[VAR_5].EditHwnd, VAR_3, 4))
            FUNC_2(VAR_4, VAR_3);
        else

            FUNC_2(VAR_4, VAR_1);
        if (VAR_5 != 3)
            FUNC_2(VAR_4, VAR_2);
    }

    FUNC_1(VAR_0->Self, VAR_4);
}
