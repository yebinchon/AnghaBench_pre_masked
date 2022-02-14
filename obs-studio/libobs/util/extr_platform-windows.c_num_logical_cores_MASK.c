
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int DWORD ;



DWORD FUNC_0(ULONG_PTR VAR_0)
{
 DWORD VAR_1 = sizeof(ULONG_PTR) * 8 - 1;
 DWORD VAR_2 = 0;
 ULONG_PTR VAR_3 = (ULONG_PTR)1 << VAR_1;

 for (DWORD VAR_4 = 0; VAR_4 <= VAR_1; ++VAR_4) {
  VAR_2 += ((VAR_0 & VAR_3) ? 1 : 0);
  VAR_3 /= 2;
 }

 return VAR_2;
}
