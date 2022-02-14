
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0 (char * VAR_0, char * VAR_1, int VAR_2)

{
 if (VAR_2 > 1)
  {
    VAR_2 = (unsigned)VAR_2 >> 1;

    while (VAR_2--) {
      char VAR_3 = VAR_0[0];
      char VAR_4 = VAR_0[1];
      *VAR_1++ = VAR_4;
      *VAR_1++ = VAR_3;
      VAR_0 = VAR_0 + 2;
    }
  }
}
