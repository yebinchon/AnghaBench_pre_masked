
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(unsigned int *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_5 = VAR_1[VAR_4];
  VAR_1[VAR_4] = (VAR_5 << VAR_2) | VAR_3;
  VAR_3 = VAR_5 >> (32 - VAR_2);
 }
}
