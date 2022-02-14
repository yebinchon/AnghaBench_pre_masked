
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int ddi ;
struct TYPE_8__ {int dwSize; int dwDevType; int tszProductName; int tszInstanceName; void* guidProduct; void* guidInstance; } ;
typedef TYPE_1__* LPDIDEVICEINSTANCEW ;
typedef int DWORD ;
typedef TYPE_1__ DIDEVICEINSTANCEW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,char*,int,int ,int ) ;
 int FUNC_1 (char*,int,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_4(LPDIDEVICEINSTANCEW VAR_7, DWORD VAR_8) {
    DWORD VAR_9;
    DIDEVICEINSTANCEW VAR_10;

    VAR_9 = VAR_7->dwSize;

    FUNC_1("%d %p\n", VAR_9, VAR_7);

    FUNC_3(VAR_7, 0, VAR_9);
    FUNC_3(&VAR_10, 0, sizeof(VAR_10));

    VAR_10.dwSize = VAR_9;
    VAR_10.guidInstance = VAR_5;
    VAR_10.guidProduct = VAR_5;
    if (VAR_8 >= 0x0800)
        VAR_10.dwDevType = VAR_2 | (VAR_1 << 8);
    else
        VAR_10.dwDevType = VAR_4 | (VAR_3 << 8);
    FUNC_0(VAR_0, 0, "Mouse", -1, VAR_10.tszInstanceName, VAR_6);
    FUNC_0(VAR_0, 0, "Wine Mouse", -1, VAR_10.tszProductName, VAR_6);

    FUNC_2(VAR_7, &VAR_10, (VAR_9 < sizeof(VAR_10) ? VAR_9 : sizeof(VAR_10)));
}
