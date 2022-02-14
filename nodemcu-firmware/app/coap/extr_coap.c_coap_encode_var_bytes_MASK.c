
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;



unsigned int FUNC_0(unsigned char *VAR_0, unsigned int VAR_1) {
  unsigned int VAR_2, VAR_3;

  for (VAR_2 = 0, VAR_3 = VAR_1; VAR_3 && VAR_2 < sizeof(VAR_1); ++VAR_2)
    VAR_3 >>= 8;

  VAR_3 = VAR_2;
  while (VAR_3--) {
    VAR_0[VAR_3] = VAR_1 & 0xff;
    VAR_1 >>= 8;
  }

  return VAR_2;
}
