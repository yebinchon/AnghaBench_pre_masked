
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int const*,size_t) ;
 size_t VAR_0 ;

int FUNC_1(const uint8_t* VAR_1, size_t VAR_2, size_t VAR_3,
               int* const VAR_4, int* const VAR_5) {
  if (VAR_1 == ((void*)0) || VAR_2 < VAR_0) {
    return 0;
  }

  if (!FUNC_0(VAR_1 + 3, VAR_2 - 3)) {
    return 0;
  } else {
    const uint32_t VAR_6 = VAR_1[0] | (VAR_1[1] << 8) | (VAR_1[2] << 16);
    const int VAR_7 = !(VAR_6 & 1);
    const int VAR_8 = ((VAR_1[7] << 8) | VAR_1[6]) & 0x3fff;
    const int VAR_9 = ((VAR_1[9] << 8) | VAR_1[8]) & 0x3fff;

    if (!VAR_7) {
      return 0;
    }

    if (((VAR_6 >> 1) & 7) > 3) {
      return 0;
    }
    if (!((VAR_6 >> 4) & 1)) {
      return 0;
    }
    if (((VAR_6 >> 5)) >= VAR_3) {
      return 0;
    }
    if (VAR_8 == 0 || VAR_9 == 0) {
      return 0;
    }

    if (VAR_4) {
      *VAR_4 = VAR_8;
    }
    if (VAR_5) {
      *VAR_5 = VAR_9;
    }

    return 1;
  }
}
