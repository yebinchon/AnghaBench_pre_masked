
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** bands_; TYPE_1__*** bands_ptr_; } ;
typedef TYPE_2__ VP8Proba ;
struct TYPE_7__ {void* skip_p_; scalar_t__ use_skip_proba_; TYPE_2__ proba_; } ;
typedef TYPE_3__ VP8Decoder ;
typedef int VP8BitReader ;
struct TYPE_5__ {int** probas_; } ;


 void***** VAR_0 ;
 int **** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int * const,char*) ;
 scalar_t__ FUNC_1 (int * const,int ,char*) ;
 void* FUNC_2 (int * const,int,char*) ;
 size_t* VAR_6 ;

void FUNC_3(VP8BitReader* const VAR_7, VP8Decoder* const VAR_8) {
  VP8Proba* const VAR_9 = &VAR_8->proba_;
  int VAR_10, VAR_11, VAR_12, VAR_13;
  for (VAR_10 = 0; VAR_10 < VAR_5; ++VAR_10) {
    for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11) {
      for (VAR_12 = 0; VAR_12 < VAR_3; ++VAR_12) {
        for (VAR_13 = 0; VAR_13 < VAR_4; ++VAR_13) {
          const int VAR_14 =
              FUNC_1(VAR_7, VAR_1[VAR_10][VAR_11][VAR_12][VAR_13], "global-header") ?
                        FUNC_2(VAR_7, 8, "global-header") :
                        VAR_0[VAR_10][VAR_11][VAR_12][VAR_13];
          VAR_9->bands_[VAR_10][VAR_11].probas_[VAR_12][VAR_13] = VAR_14;
        }
      }
    }
    for (VAR_11 = 0; VAR_11 < 16 + 1; ++VAR_11) {
      VAR_9->bands_ptr_[VAR_10][VAR_11] = &VAR_9->bands_[VAR_10][VAR_6[VAR_11]];
    }
  }
  VAR_8->use_skip_proba_ = FUNC_0(VAR_7, "global-header");
  if (VAR_8->use_skip_proba_) {
    VAR_8->skip_p_ = FUNC_2(VAR_7, 8, "global-header");
  }
}
