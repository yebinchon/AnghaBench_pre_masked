
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* PCWCHAR ;
typedef int DWORD ;






PCWCHAR FUNC_0(const DWORD VAR_0)
{
 switch (VAR_0)
 {
 case 130:
  return L"AT_KEYEXCHANGE";
 case 129:
  return L"AT_SIGNATURE";
 case 128:
  return L"CNG Key";
 default:
  return L"?";
 }
}
