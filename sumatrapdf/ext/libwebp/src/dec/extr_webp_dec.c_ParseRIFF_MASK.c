
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int VP8StatusCode ;


 size_t VAR_0 ;
 int FUNC_0 (int const*) ;
 int const VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const*,char*,int) ;

__attribute__((used)) static VP8StatusCode FUNC_3(const uint8_t** const VAR_7,
                               size_t* const VAR_8, int VAR_9,
                               size_t* const VAR_10) {
  FUNC_1(VAR_7 != ((void*)0));
  FUNC_1(VAR_8 != ((void*)0));
  FUNC_1(VAR_10 != ((void*)0));

  *VAR_10 = 0;
  if (*VAR_8 >= VAR_2 && !FUNC_2(*VAR_7, "RIFF", VAR_3)) {
    if (FUNC_2(*VAR_7 + 8, "WEBP", VAR_3)) {
      return VAR_4;
    } else {
      const uint32_t VAR_11 = FUNC_0(*VAR_7 + VAR_3);

      if (VAR_11 < VAR_3 + VAR_0) {
        return VAR_4;
      }
      if (VAR_11 > VAR_1) {
        return VAR_4;
      }
      if (VAR_9 && (VAR_11 > *VAR_8 - VAR_0)) {
        return VAR_5;
      }

      *VAR_10 = VAR_11;
      *VAR_7 += VAR_2;
      *VAR_8 -= VAR_2;
    }
  }
  return VAR_6;
}
