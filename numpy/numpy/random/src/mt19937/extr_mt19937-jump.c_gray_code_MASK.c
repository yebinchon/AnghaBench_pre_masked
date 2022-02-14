
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

void FUNC_0(unsigned long *VAR_2) {
  unsigned int VAR_3, VAR_4 = 1, VAR_5 = 1, VAR_6 = VAR_0;

  VAR_2[0] = 0;

  for (VAR_3 = 1; VAR_3 <= VAR_1; VAR_3++) {
    VAR_5 = (VAR_5 << 1);
    VAR_6 = (VAR_6 >> 1);
    for (; VAR_4 < VAR_5; VAR_4++)
      VAR_2[VAR_4] = VAR_2[VAR_5 - VAR_4 - 1] ^ VAR_6;
  }
}
