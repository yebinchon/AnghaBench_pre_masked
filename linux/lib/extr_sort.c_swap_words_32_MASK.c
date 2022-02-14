
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static void FUNC_0(void *VAR_0, void *VAR_1, size_t VAR_2)
{
 do {
  u32 VAR_3 = *(u32 *)(VAR_0 + (VAR_2 -= 4));
  *(u32 *)(VAR_0 + VAR_2) = *(u32 *)(VAR_1 + VAR_2);
  *(u32 *)(VAR_1 + VAR_2) = VAR_3;
 } while (VAR_2);
}
