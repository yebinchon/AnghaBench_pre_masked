
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char const) ;

int FUNC_1(const unsigned char *VAR_0, size_t VAR_1) {

  size_t VAR_2 = 0;

  while (VAR_1) {
    if (*VAR_0 == '%') {
      if (VAR_1 < 2 || !(FUNC_0(VAR_0[1]) && FUNC_0(VAR_0[2])))
        return -1;

      VAR_0 += 2;
      VAR_1 -= 2;
    }

    ++VAR_0; ++VAR_2; --VAR_1;
  }

  return VAR_2;
}
