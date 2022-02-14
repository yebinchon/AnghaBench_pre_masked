
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;
typedef scalar_t__ HKEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

extern LPCWSTR FUNC_0(HKEY VAR_6)
{
    if (VAR_6 == VAR_0) return L"HKEY_CLASSES_ROOT";
    if (VAR_6 == VAR_2) return L"HKEY_CURRENT_USER";
    if (VAR_6 == VAR_4) return L"HKEY_LOCAL_MACHINE";
    if (VAR_6 == VAR_5) return L"HKEY_USERS";
    if (VAR_6 == VAR_1) return L"HKEY_CURRENT_CONFIG";
    if (VAR_6 == VAR_3) return L"HKEY_DYN_DATA";

    return L"UNKNOWN HKEY, PLEASE REPORT";
}
