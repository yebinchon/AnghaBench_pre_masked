
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
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*,int,int ,int ) ;
 int FUNC_1 (char*,int,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_4(LPDIDEVICEINSTANCEW VAR_5, DWORD VAR_6, DWORD VAR_7) {
    DWORD VAR_8;
    DIDEVICEINSTANCEW VAR_9;

    VAR_8 = VAR_5->dwSize;

    FUNC_1("%d %p\n", VAR_8, VAR_5);

    FUNC_3(VAR_5, 0, VAR_8);
    FUNC_3(&VAR_9, 0, sizeof(VAR_9));

    VAR_9.dwSize = VAR_8;
    VAR_9.guidInstance = VAR_3;
    VAR_9.guidProduct = VAR_3;
    if (VAR_6 >= 0x0800)
        VAR_9.dwDevType = VAR_1 | (VAR_7 << 8);
    else
        VAR_9.dwDevType = VAR_2 | (VAR_7 << 8);
    FUNC_0(VAR_0, 0, "Keyboard", -1, VAR_9.tszInstanceName, VAR_4);
    FUNC_0(VAR_0, 0, "Wine Keyboard", -1, VAR_9.tszProductName, VAR_4);

    FUNC_2(VAR_5, &VAR_9, (VAR_8 < sizeof(VAR_9) ? VAR_8 : sizeof(VAR_9)));
}
