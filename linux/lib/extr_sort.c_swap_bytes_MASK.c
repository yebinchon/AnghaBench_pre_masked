
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(void *VAR_0, void *VAR_1, size_t VAR_2)
{
 do {
  char VAR_3 = ((char *)VAR_0)[--VAR_2];
  ((char *)VAR_0)[VAR_2] = ((char *)VAR_1)[VAR_2];
  ((char *)VAR_1)[VAR_2] = VAR_3;
 } while (VAR_2);
}
