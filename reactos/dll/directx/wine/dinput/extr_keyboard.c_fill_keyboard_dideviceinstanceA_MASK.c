
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int ddi ;
struct TYPE_8__ {int dwSize; int dwDevType; int tszProductName; int tszInstanceName; void* guidProduct; void* guidInstance; } ;
typedef TYPE_1__* LPDIDEVICEINSTANCEA ;
typedef int DWORD ;
typedef TYPE_1__ DIDEVICEINSTANCEA ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (char*,int,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(LPDIDEVICEINSTANCEA VAR_3, DWORD VAR_4, DWORD VAR_5) {
    DWORD VAR_6;
    DIDEVICEINSTANCEA VAR_7;

    VAR_6 = VAR_3->dwSize;

    FUNC_0("%d %p\n", VAR_6, VAR_3);

    FUNC_2(VAR_3, 0, VAR_6);
    FUNC_2(&VAR_7, 0, sizeof(VAR_7));

    VAR_7.dwSize = VAR_6;
    VAR_7.guidInstance = VAR_2;
    VAR_7.guidProduct = VAR_2;
    if (VAR_4 >= 0x0800)
        VAR_7.dwDevType = VAR_0 | (VAR_5 << 8);
    else
        VAR_7.dwDevType = VAR_1 | (VAR_5 << 8);
    FUNC_3(VAR_7.tszInstanceName, "Keyboard");
    FUNC_3(VAR_7.tszProductName, "Wine Keyboard");

    FUNC_1(VAR_3, &VAR_7, (VAR_6 < sizeof(VAR_7) ? VAR_6 : sizeof(VAR_7)));
}
