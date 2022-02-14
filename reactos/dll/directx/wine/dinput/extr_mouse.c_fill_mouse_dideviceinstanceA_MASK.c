
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
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (char*,int,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(LPDIDEVICEINSTANCEA VAR_5, DWORD VAR_6) {
    DWORD VAR_7;
    DIDEVICEINSTANCEA VAR_8;

    VAR_7 = VAR_5->dwSize;

    FUNC_0("%d %p\n", VAR_7, VAR_5);

    FUNC_2(VAR_5, 0, VAR_7);
    FUNC_2(&VAR_8, 0, sizeof(VAR_8));

    VAR_8.dwSize = VAR_7;
    VAR_8.guidInstance = VAR_4;
    VAR_8.guidProduct = VAR_4;
    if (VAR_6 >= 0x0800)
        VAR_8.dwDevType = VAR_1 | (VAR_0 << 8);
    else
        VAR_8.dwDevType = VAR_3 | (VAR_2 << 8);
    FUNC_3(VAR_8.tszInstanceName, "Mouse");
    FUNC_3(VAR_8.tszProductName, "Wine Mouse");

    FUNC_1(VAR_5, &VAR_8, (VAR_7 < sizeof(VAR_8) ? VAR_7 : sizeof(VAR_8)));
}
