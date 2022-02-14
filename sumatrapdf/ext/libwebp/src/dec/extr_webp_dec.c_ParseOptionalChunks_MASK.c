
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int VP8StatusCode ;


 size_t VAR_0 ;
 size_t FUNC_0 (int const*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int const*,char*,int) ;

__attribute__((used)) static VP8StatusCode FUNC_3(const uint8_t** const VAR_7,
                                         size_t* const VAR_8,
                                         size_t const VAR_9,
                                         const uint8_t** const VAR_10,
                                         size_t* const VAR_11) {
  const uint8_t* VAR_12;
  size_t VAR_13;
  uint32_t VAR_14 = VAR_2 +
                        VAR_0 +
                        VAR_3;
  FUNC_1(VAR_7 != ((void*)0));
  FUNC_1(VAR_8 != ((void*)0));
  VAR_12 = *VAR_7;
  VAR_13 = *VAR_8;

  FUNC_1(VAR_10 != ((void*)0));
  FUNC_1(VAR_11 != ((void*)0));
  *VAR_10 = ((void*)0);
  *VAR_11 = 0;

  while (1) {
    uint32_t VAR_15;
    uint32_t VAR_16;

    *VAR_7 = VAR_12;
    *VAR_8 = VAR_13;

    if (VAR_13 < VAR_0) {
      return VAR_5;
    }

    VAR_15 = FUNC_0(VAR_12 + VAR_2);
    if (VAR_15 > VAR_1) {
      return VAR_4;
    }

    VAR_16 = (VAR_0 + VAR_15 + 1) & ~1;
    VAR_14 += VAR_16;


    if (VAR_9 > 0 && (VAR_14 > VAR_9)) {
      return VAR_4;
    }





    if (!FUNC_2(VAR_12, "VP8 ", VAR_2) ||
        !FUNC_2(VAR_12, "VP8L", VAR_2)) {
      return VAR_6;
    }

    if (VAR_13 < VAR_16) {
      return VAR_5;
    }

    if (!FUNC_2(VAR_12, "ALPH", VAR_2)) {
      *VAR_10 = VAR_12 + VAR_0;
      *VAR_11 = VAR_15;
    }


    VAR_12 += VAR_16;
    VAR_13 -= VAR_16;
  }
}
