
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int * PDWORD ;
typedef scalar_t__ PBYTE ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__*) ;

void FUNC_2(PBYTE *VAR_0)
{
 DWORD VAR_1, VAR_2 = FUNC_0(*(PDWORD) *VAR_0); *VAR_0 += sizeof(DWORD);
 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
 {
  *VAR_0 += sizeof(USHORT);
  FUNC_1(VAR_0);
 }
}
