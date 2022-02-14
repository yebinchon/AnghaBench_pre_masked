
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ByteSize; } ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef TYPE_1__ DCB ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int*,int *) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (scalar_t__,TYPE_1__*) ;
 int FUNC_4 (int,char*,...) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void)
{
    HANDLE VAR_3;
    DCB VAR_4;
    DWORD VAR_5;

    VAR_3 = FUNC_5(VAR_1);
    if (VAR_3 == VAR_2) return;

    FUNC_4(FUNC_2(VAR_3, &VAR_4), "GetCommState failed\n");
    VAR_4.ByteSize = 255;
    FUNC_4(!FUNC_3(VAR_3, &VAR_4), "SetCommState should have failed\n");
    FUNC_4(FUNC_0(VAR_3, &VAR_5, ((void*)0)), "ClearCommError should succeed\n");
    FUNC_4(!(VAR_5 & VAR_0), "ClearCommError shouldn't set CE_MODE byte in this case (%x)\n", VAR_5);

    FUNC_1(VAR_3);
}
