
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {TYPE_1__* Part; } ;
struct TYPE_4__ {int EditHwnd; } ;
typedef TYPE_2__ IPADDRESS_INFO ;


 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2 (const IPADDRESS_INFO *VAR_0)
{
    static const WCHAR VAR_1[] = { 0 };
    int VAR_2;

    FUNC_1("\n");

    for (VAR_2 = 0; VAR_2 < 4; VAR_2++)
        FUNC_0 (VAR_0->Part[VAR_2].EditHwnd, VAR_1);
}
