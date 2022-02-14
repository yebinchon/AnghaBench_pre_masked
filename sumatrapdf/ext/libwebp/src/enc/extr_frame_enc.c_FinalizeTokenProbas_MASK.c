
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int proba_t ;
struct TYPE_3__ {int**** stats_; int**** coeffs_; int dirty_; } ;
typedef TYPE_1__ VP8EncProba ;


 int FUNC_0 (int const,int const,int const) ;
 int FUNC_1 (int const,int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int const,int const) ;
 int**** VAR_4 ;
 int**** VAR_5 ;

__attribute__((used)) static int FUNC_3(VP8EncProba* const VAR_6) {
  int VAR_7 = 0;
  int VAR_8 = 0;
  int VAR_9, VAR_10, VAR_11, VAR_12;
  for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9) {
    for (VAR_10 = 0; VAR_10 < VAR_0; ++VAR_10) {
      for (VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11) {
        for (VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12) {
          const proba_t VAR_13 = VAR_6->stats_[VAR_9][VAR_10][VAR_11][VAR_12];
          const int VAR_14 = (VAR_13 >> 0) & 0xffff;
          const int VAR_15 = (VAR_13 >> 16) & 0xffff;
          const int VAR_16 = VAR_5[VAR_9][VAR_10][VAR_11][VAR_12];
          const int VAR_17 = VAR_4[VAR_9][VAR_10][VAR_11][VAR_12];
          const int VAR_18 = FUNC_1(VAR_14, VAR_15);
          const int VAR_19 = FUNC_0(VAR_14, VAR_15, VAR_17)
                             + FUNC_2(0, VAR_16);
          const int VAR_20 = FUNC_0(VAR_14, VAR_15, VAR_18)
                             + FUNC_2(1, VAR_16)
                             + 8 * 256;
          const int VAR_21 = (VAR_19 > VAR_20);
          VAR_8 += FUNC_2(VAR_21, VAR_16);
          if (VAR_21) {
            VAR_6->coeffs_[VAR_9][VAR_10][VAR_11][VAR_12] = VAR_18;
            VAR_7 |= (VAR_18 != VAR_17);
            VAR_8 += 8 * 256;
          } else {
            VAR_6->coeffs_[VAR_9][VAR_10][VAR_11][VAR_12] = VAR_17;
          }
        }
      }
    }
  }
  VAR_6->dirty_ = VAR_7;
  return VAR_8;
}
