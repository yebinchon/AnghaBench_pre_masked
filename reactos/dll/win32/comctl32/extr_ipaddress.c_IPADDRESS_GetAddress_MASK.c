
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {TYPE_1__* Part; } ;
struct TYPE_4__ {int EditHwnd; } ;
typedef int* LPDWORD ;
typedef TYPE_2__ IPADDRESS_INFO ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ,int *,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3 (const IPADDRESS_INFO *VAR_0, LPDWORD VAR_1)
{
    WCHAR VAR_2[5];
    int VAR_3, VAR_4 = 0;
    DWORD VAR_5 = 0;

    FUNC_1("\n");

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
        VAR_5 *= 256;
        if (FUNC_0 (VAR_0->Part[VAR_3].EditHwnd, VAR_2, 4))
       VAR_5 += FUNC_2(VAR_2);
 else
     VAR_4++;
    }
    *VAR_1 = VAR_5;

    return 4 - VAR_4;
}
