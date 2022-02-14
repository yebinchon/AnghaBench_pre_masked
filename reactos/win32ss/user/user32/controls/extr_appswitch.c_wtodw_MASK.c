
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;



DWORD FUNC_0(const WCHAR *VAR_0)
{
   const WCHAR *VAR_1 = VAR_0;
   DWORD VAR_2 = 0;
   while ('0' <= *VAR_1 && *VAR_1 <= '9')
   {
      VAR_2 *= 10;
      VAR_2 += *VAR_1 - L'0';
   }
   return VAR_2;
}
