
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef char* LPCWSTR ;
typedef long const DWORD ;
typedef int BYTE ;


 scalar_t__ const VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static DWORD FUNC_1(LPCWSTR VAR_1)
{
    VAR_1 = (LPCWSTR)((const BYTE*)(VAR_1 + FUNC_0(VAR_1) + 1) + sizeof(DWORD) + sizeof(WORD));
    if (*VAR_1 == '\0' && *(const WORD*)((const BYTE*)(VAR_1 + 1) + sizeof(DWORD)) == VAR_0) {
 return *(const DWORD*)(VAR_1 + 1);
    }
    return 0L;
}
