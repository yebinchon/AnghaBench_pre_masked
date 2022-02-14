
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int VP8StatusCode ;


 size_t VAR_0 ;
 size_t FUNC_0 (int const* const) ;
 int VAR_1 ;
 int FUNC_1 (int const* const,size_t) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const* const,char*,int) ;

__attribute__((used)) static VP8StatusCode FUNC_4(const uint8_t** const VAR_5,
                                    size_t* const VAR_6, int VAR_7,
                                    size_t VAR_8, size_t* const VAR_9,
                                    int* const VAR_10) {
  const uint8_t* const VAR_11 = *VAR_5;
  const int VAR_12 = !FUNC_3(VAR_11, "VP8 ", VAR_1);
  const int VAR_13 = !FUNC_3(VAR_11, "VP8L", VAR_1);
  const uint32_t VAR_14 =
      VAR_1 + VAR_0;

  FUNC_2(VAR_11 != ((void*)0));
  FUNC_2(VAR_6 != ((void*)0));
  FUNC_2(VAR_9 != ((void*)0));
  FUNC_2(VAR_10 != ((void*)0));

  if (*VAR_6 < VAR_0) {
    return VAR_3;
  }

  if (VAR_12 || VAR_13) {

    const uint32_t VAR_15 = FUNC_0(VAR_11 + VAR_1);
    if ((VAR_8 >= VAR_14) && (VAR_15 > VAR_8 - VAR_14)) {
      return VAR_2;
    }
    if (VAR_7 && (VAR_15 > *VAR_6 - VAR_0)) {
      return VAR_3;
    }

    *VAR_9 = VAR_15;
    *VAR_5 += VAR_0;
    *VAR_6 -= VAR_0;
    *VAR_10 = VAR_13;
  } else {

    *VAR_10 = FUNC_1(VAR_11, *VAR_6);
    *VAR_9 = *VAR_6;
  }

  return VAR_4;
}
