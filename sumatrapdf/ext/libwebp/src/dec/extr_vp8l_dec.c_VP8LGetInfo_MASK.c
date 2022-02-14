
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int VP8LBitReader ;


 int FUNC_0 (int *,int*,int*,int*) ;
 int FUNC_1 (int const*,size_t) ;
 int FUNC_2 (int *,int const*,size_t) ;
 size_t VAR_0 ;

int FUNC_3(const uint8_t* VAR_1, size_t VAR_2,
                int* const VAR_3, int* const VAR_4, int* const VAR_5) {
  if (VAR_1 == ((void*)0) || VAR_2 < VAR_0) {
    return 0;
  } else if (!FUNC_1(VAR_1, VAR_2)) {
    return 0;
  } else {
    int VAR_6, VAR_7, VAR_8;
    VP8LBitReader VAR_9;
    FUNC_2(&VAR_9, VAR_1, VAR_2);
    if (!FUNC_0(&VAR_9, &VAR_6, &VAR_7, &VAR_8)) {
      return 0;
    }
    if (VAR_3 != ((void*)0)) *VAR_3 = VAR_6;
    if (VAR_4 != ((void*)0)) *VAR_4 = VAR_7;
    if (VAR_5 != ((void*)0)) *VAR_5 = VAR_8;
    return 1;
  }
}
