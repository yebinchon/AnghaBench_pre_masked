
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int const* const,size_t) ;
 int* FUNC_1 (int const* const,size_t,int*,int*) ;
 int FUNC_2 (int const* const,size_t,int* const,size_t,int const) ;
 int* FUNC_3 (int const* const,size_t,int*,int*) ;
 int* FUNC_4 (int const* const,size_t,int*,int*) ;
 int FUNC_5 (int const* const,size_t,int* const,size_t,int const) ;
 int FUNC_6 (int const* const,size_t,int* const,size_t,int const) ;
 int* FUNC_7 (int const* const,size_t,int*,int*) ;
 int* FUNC_8 (int const* const,size_t,int*,int*) ;
 int FUNC_9 (int const* const,size_t,int* const,size_t,int const) ;
 int FUNC_10 (int const* const,size_t,int* const,size_t,int const) ;
 int* FUNC_11 (int const* const,size_t,int*,int*,int**,int**,int*,int*) ;
 int FUNC_12 (int const* const,size_t,int* const,size_t,int,int* const,size_t,int const,int* const,size_t,int const) ;
 int FUNC_13 (int*) ;
 int FUNC_14 (int const* const,size_t,int*,int*) ;
 int FUNC_15 (int* const) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_16 (size_t) ;

int FUNC_17(const uint8_t* const VAR_1, size_t VAR_2) {
  int VAR_3, VAR_4;
  if (!FUNC_14(VAR_1, VAR_2, &VAR_3, &VAR_4)) return 0;
  if ((size_t)VAR_3 * VAR_4 > VAR_0) return 0;

  const uint8_t VAR_5 = FUNC_0(VAR_1, VAR_2);
  uint8_t* VAR_6 = ((void*)0);



  if (VAR_5 < 0x16) {
    VAR_6 = FUNC_8(VAR_1, VAR_2, &VAR_3, &VAR_4);
  } else if (VAR_5 < 0x2b) {
    VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_3, &VAR_4);
  } else if (VAR_5 < 0x40) {
    VAR_6 = FUNC_4(VAR_1, VAR_2, &VAR_3, &VAR_4);
  } else if (VAR_5 < 0x55) {
    VAR_6 = FUNC_7(VAR_1, VAR_2, &VAR_3, &VAR_4);
  } else if (VAR_5 < 0x6a) {
    VAR_6 = FUNC_3(VAR_1, VAR_2, &VAR_3, &VAR_4);
  } else if (VAR_5 < 0x7f) {
    uint8_t *VAR_7, *VAR_8;
    int VAR_9, VAR_10;
    VAR_6 = FUNC_11(VAR_1, VAR_2, &VAR_3, &VAR_4, &VAR_7, &VAR_8, &VAR_9, &VAR_10);
  } else if (VAR_5 < 0xe8) {
    const int VAR_11 = (VAR_5 < 0xbe ? 4 : 3) * VAR_3;
    size_t VAR_12 = VAR_11 * VAR_4;
    if (VAR_5 % 0x10 == 0) VAR_12--;
    uint8_t* const VAR_13 = (uint8_t*)FUNC_16(VAR_12);
    if (VAR_5 < 0x94) {
      FUNC_9(VAR_1, VAR_2, VAR_13, VAR_12, VAR_11);
    } else if (VAR_5 < 0xa9) {
      FUNC_2(VAR_1, VAR_2, VAR_13, VAR_12, VAR_11);
    } else if (VAR_5 < 0xbe) {
      FUNC_5(VAR_1, VAR_2, VAR_13, VAR_12, VAR_11);
    } else if (VAR_5 < 0xd3) {
      FUNC_10(VAR_1, VAR_2, VAR_13, VAR_12, VAR_11);
    } else {
      FUNC_6(VAR_1, VAR_2, VAR_13, VAR_12, VAR_11);
    }
    FUNC_15(VAR_13);
  } else {
    size_t VAR_14 = VAR_3 * VAR_4;
    const int VAR_15 = (VAR_3 + 1) / 2;
    size_t VAR_16 = VAR_15 * (VAR_4 + 1) / 2;
    size_t VAR_17 = VAR_15 * (VAR_4 + 1) / 2;
    if (VAR_5 % 0x10 == 0) {
      if (VAR_2 & 1) VAR_14--;
      if (VAR_2 & 2) VAR_16--;
      if (VAR_2 & 4) VAR_17--;
    }
    uint8_t* const VAR_18 = (uint8_t*)FUNC_16(VAR_14);
    uint8_t* const VAR_19 = (uint8_t*)FUNC_16(VAR_16);
    uint8_t* const VAR_20 = (uint8_t*)FUNC_16(VAR_17);
    FUNC_12(VAR_1, VAR_2, VAR_18, VAR_14, VAR_3 ,
                      VAR_19, VAR_16, VAR_15, VAR_20, VAR_17, VAR_15);
    FUNC_15(VAR_18);
    FUNC_15(VAR_19);
    FUNC_15(VAR_20);
  }

  if (VAR_6) FUNC_13(VAR_6);

  return 0;
}
