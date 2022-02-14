
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* dwExtraInfoLength; void* dwUrlPathLength; void* dwPasswordLength; void* dwUserNameLength; void* dwHostNameLength; void* dwSchemeLength; } ;
typedef TYPE_1__ URL_COMPONENTSA ;
typedef void* DWORD ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(
    URL_COMPONENTSA *VAR_0,
    URL_COMPONENTSA *VAR_1,
    DWORD VAR_2,
    DWORD VAR_3,
    DWORD VAR_4,
    DWORD VAR_5,
    DWORD VAR_6,
    DWORD VAR_7 )
{
    *VAR_1 = *VAR_0;
    VAR_1->dwSchemeLength = VAR_2;
    VAR_1->dwHostNameLength = VAR_3;
    VAR_1->dwUserNameLength = VAR_4;
    VAR_1->dwPasswordLength = VAR_5;
    VAR_1->dwUrlPathLength = VAR_6;
    VAR_1->dwExtraInfoLength = VAR_7;
    FUNC_0(0xfaceabad);
}
