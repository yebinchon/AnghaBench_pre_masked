
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rk_state ;


 unsigned long FUNC_0 (int *) ;

void FUNC_1(void *VAR_0, size_t VAR_1, rk_state *VAR_2) {
  unsigned long VAR_3;
  unsigned char *VAR_4 = VAR_0;

  for (; VAR_1 >= 4; VAR_1 -= 4) {
    VAR_3 = FUNC_0(VAR_2);
    *(VAR_4++) = VAR_3 & 0xFF;
    *(VAR_4++) = (VAR_3 >> 8) & 0xFF;
    *(VAR_4++) = (VAR_3 >> 16) & 0xFF;
    *(VAR_4++) = (VAR_3 >> 24) & 0xFF;
  }

  if (!VAR_1) {
    return;
  }
  VAR_3 = FUNC_0(VAR_2);
  for (; VAR_1; VAR_3 >>= 8, VAR_1--) {
    *(VAR_4++) = (unsigned char)(VAR_3 & 0xFF);
  }
}
