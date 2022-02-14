
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dwStructSize; void* dwExtraInfoLength; void* dwUrlPathLength; void* dwPasswordLength; void* dwUserNameLength; void* dwHostNameLength; void* dwSchemeLength; } ;
typedef TYPE_1__ URL_COMPONENTSA ;
typedef void* DWORD ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_2(
    URL_COMPONENTSA *VAR_0,
    DWORD VAR_1,
    DWORD VAR_2,
    DWORD VAR_3,
    DWORD VAR_4,
    DWORD VAR_5,
    DWORD VAR_6 )
{
    FUNC_1(VAR_0, sizeof(URL_COMPONENTSA));
    VAR_0->dwStructSize = sizeof(URL_COMPONENTSA);
    VAR_0->dwSchemeLength = VAR_1;
    VAR_0->dwHostNameLength = VAR_2;
    VAR_0->dwUserNameLength = VAR_3;
    VAR_0->dwPasswordLength = VAR_4;
    VAR_0->dwUrlPathLength = VAR_5;
    VAR_0->dwExtraInfoLength = VAR_6;
    FUNC_0(0xfaceabad);
}
