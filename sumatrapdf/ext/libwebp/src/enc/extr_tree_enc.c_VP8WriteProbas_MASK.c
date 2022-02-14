
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__**** coeffs_; scalar_t__ const skip_proba_; int use_skip_proba_; } ;
typedef TYPE_1__ VP8EncProba ;
typedef int VP8BitWriter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ const**** VAR_4 ;
 int **** VAR_5 ;
 scalar_t__ FUNC_0 (int * const,int const,int ) ;
 scalar_t__ FUNC_1 (int * const,int ) ;
 int FUNC_2 (int * const,scalar_t__ const,int) ;

void FUNC_3(VP8BitWriter* const VAR_6, const VP8EncProba* const VAR_7) {
  int VAR_8, VAR_9, VAR_10, VAR_11;
  for (VAR_8 = 0; VAR_8 < VAR_3; ++VAR_8) {
    for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {
      for (VAR_10 = 0; VAR_10 < VAR_1; ++VAR_10) {
        for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11) {
          const uint8_t VAR_12 = VAR_7->coeffs_[VAR_8][VAR_9][VAR_10][VAR_11];
          const int VAR_13 = (VAR_12 != VAR_4[VAR_8][VAR_9][VAR_10][VAR_11]);
          if (FUNC_0(VAR_6, VAR_13, VAR_5[VAR_8][VAR_9][VAR_10][VAR_11])) {
            FUNC_2(VAR_6, VAR_12, 8);
          }
        }
      }
    }
  }
  if (FUNC_1(VAR_6, VAR_7->use_skip_proba_)) {
    FUNC_2(VAR_6, VAR_7->skip_proba_, 8);
  }
}
