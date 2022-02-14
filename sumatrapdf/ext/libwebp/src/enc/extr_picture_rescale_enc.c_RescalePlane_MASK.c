
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int rescaler_t ;
typedef int WebPRescaler ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int,int const*,int) ;
 int FUNC_2 (int *,int,int,int *,int,int,int,int,int * const) ;

__attribute__((used)) static void FUNC_3(const uint8_t* VAR_0,
                         int VAR_1, int VAR_2, int VAR_3,
                         uint8_t* VAR_4,
                         int VAR_5, int VAR_6, int VAR_7,
                         rescaler_t* const VAR_8,
                         int VAR_9) {
  WebPRescaler VAR_10;
  int VAR_11 = 0;
  FUNC_2(&VAR_10, VAR_1, VAR_2,
                   VAR_4, VAR_5, VAR_6, VAR_7,
                   VAR_9, VAR_8);
  while (VAR_11 < VAR_2) {
    VAR_11 += FUNC_1(&VAR_10, VAR_2 - VAR_11,
                            VAR_0 + VAR_11 * VAR_3, VAR_3);
    FUNC_0(&VAR_10);
  }
}
