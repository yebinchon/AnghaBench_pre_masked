
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;
typedef int DWORD ;
LPCWSTR FUNC_0(DWORD VAR_0)
{
 LPCWSTR VAR_1;
 switch(VAR_0)
 {
 case 134:
  VAR_1 = L"DOMAIN_OBJECT";
  break;
 case 133:
  VAR_1 = L"GROUP_OBJECT";
  break;
 case 130:
  VAR_1 = L"NON_SECURITY_GROUP_OBJECT";
  break;
 case 137:
  VAR_1 = L"ALIAS_OBJECT";
  break;
 case 131:
  VAR_1 = L"NON_SECURITY_ALIAS_OBJECT";
  break;
 case 128:
  VAR_1 = L"USER_OBJECT";
  break;
 case 132:
  VAR_1 = L"MACHINE_ACCOUNT";
  break;
 case 129:
  VAR_1 = L"TRUST_ACCOUNT";
  break;
 case 136:
  VAR_1 = L"APP_BASIC_GROUP";
  break;
 case 135:
  VAR_1 = L"APP_QUERY_GROUP";
  break;
 default:
  VAR_1 = L"unknown";
 }
 return VAR_1;
}
