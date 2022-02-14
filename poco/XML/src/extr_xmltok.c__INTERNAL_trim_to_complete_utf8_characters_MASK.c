
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0(const char *VAR_0,
                                           const char **VAR_1) {
  const char *VAR_2 = *VAR_1;
  size_t VAR_3 = 0;
  for (; VAR_2 > VAR_0; VAR_2--, VAR_3++) {
    const unsigned char VAR_4 = (unsigned char)VAR_2[-1];
    if ((VAR_4 & 0xf8u)
        == 0xf0u) {
      if (VAR_3 + 1 >= 4) {
        VAR_2 += 4 - 1;
        break;
      } else {
        VAR_3 = 0;
      }
    } else if ((VAR_4 & 0xf0u)
               == 0xe0u) {
      if (VAR_3 + 1 >= 3) {
        VAR_2 += 3 - 1;
        break;
      } else {
        VAR_3 = 0;
      }
    } else if ((VAR_4 & 0xe0u)
               == 0xc0u) {
      if (VAR_3 + 1 >= 2) {
        VAR_2 += 2 - 1;
        break;
      } else {
        VAR_3 = 0;
      }
    } else if ((VAR_4 & 0x80u)
               == 0x00u) {
      break;
    }
  }
  *VAR_1 = VAR_2;
}
