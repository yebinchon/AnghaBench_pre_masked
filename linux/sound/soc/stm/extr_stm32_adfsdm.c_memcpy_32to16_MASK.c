
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;



__attribute__((used)) static void FUNC_0(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 unsigned int VAR_3 = 0;
 u16 *VAR_4 = (u16 *)VAR_0, *VAR_5 = (u16 *)VAR_1;

 VAR_5++;
 for (VAR_3 = VAR_2; VAR_3 > 0; VAR_3--) {
  *VAR_4++ = *VAR_5++;
  VAR_5++;
 }
}
