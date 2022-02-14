
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int VP8StatusCode ;


 size_t VAR_0 ;
 int FUNC_0 (int const*) ;
 void* FUNC_1 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const*,char*,int) ;

__attribute__((used)) static VP8StatusCode FUNC_4(const uint8_t** const VAR_7,
                               size_t* const VAR_8,
                               int* const VAR_9,
                               int* const VAR_10, int* const VAR_11,
                               uint32_t* const VAR_12) {
  const uint32_t VAR_13 = VAR_0 + VAR_3;
  FUNC_2(VAR_7 != ((void*)0));
  FUNC_2(VAR_8 != ((void*)0));
  FUNC_2(VAR_9 != ((void*)0));

  *VAR_9 = 0;

  if (*VAR_8 < VAR_0) {
    return VAR_5;
  }

  if (!FUNC_3(*VAR_7, "VP8X", VAR_2)) {
    int VAR_14, VAR_15;
    uint32_t VAR_16;
    const uint32_t VAR_17 = FUNC_1(*VAR_7 + VAR_2);
    if (VAR_17 != VAR_3) {
      return VAR_4;
    }


    if (*VAR_8 < VAR_13) {
      return VAR_5;
    }
    VAR_16 = FUNC_1(*VAR_7 + 8);
    VAR_14 = 1 + FUNC_0(*VAR_7 + 12);
    VAR_15 = 1 + FUNC_0(*VAR_7 + 15);
    if (VAR_14 * (uint64_t)VAR_15 >= VAR_1) {
      return VAR_4;
    }

    if (VAR_12 != ((void*)0)) *VAR_12 = VAR_16;
    if (VAR_10 != ((void*)0)) *VAR_10 = VAR_14;
    if (VAR_11 != ((void*)0)) *VAR_11 = VAR_15;

    *VAR_7 += VAR_13;
    *VAR_8 -= VAR_13;
    *VAR_9 = 1;
  }
  return VAR_6;
}
