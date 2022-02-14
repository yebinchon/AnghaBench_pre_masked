
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SIZE_T ;
typedef int PVOID ;
typedef void** PBYTE ;
typedef void* BYTE ;



void FUNC_0(PVOID VAR_0, SIZE_T VAR_1)
{
 PBYTE VAR_2 = (PBYTE) VAR_0, VAR_3 = VAR_2 + VAR_1 - 1;
 BYTE VAR_4;
 while (VAR_2 < VAR_3)
 {
  VAR_4 = *VAR_2;
  *VAR_2++ = *VAR_3;
  *VAR_3-- = VAR_4;
 }
}
