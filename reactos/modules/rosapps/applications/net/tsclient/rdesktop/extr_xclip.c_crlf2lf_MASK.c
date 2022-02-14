
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8 ;
typedef int uint32 ;



__attribute__((used)) static void
FUNC_0(uint8 * VAR_0, uint32 * VAR_1)
{
 uint8 *VAR_2, *VAR_3;
 VAR_3 = VAR_2 = VAR_0;
 while (VAR_3 < VAR_0 + *VAR_1)
 {
  if (*VAR_3 != '\x0d')
   *VAR_2++ = *VAR_3;
  VAR_3++;
 }
 *VAR_1 = VAR_2 - VAR_0;
}
