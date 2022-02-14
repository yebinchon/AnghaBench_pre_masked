
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
 case 129:
  VAR_1 = L"NONE";
  break;
 case 130:
  VAR_1 = L"GSS_NEGOTIATE";
  break;
 case 128:
  VAR_1 = L"WINNT";
  break;
 case 131:
  VAR_1 = L"GSS_KERBEROS";
  break;
 default:
  VAR_1 = L"?";
 }
 return VAR_1;
}
