
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ last; } ;
typedef TYPE_1__ VP8Residual ;
struct TYPE_11__ {int * uv_levels; } ;
typedef TYPE_2__ VP8ModeScore ;
typedef int VP8Encoder ;
struct TYPE_12__ {int* top_nz_; int* left_nz_; int * enc_; } ;
typedef TYPE_3__ VP8EncIterator ;


 scalar_t__ FUNC_0 (int const,TYPE_1__*) ;
 int FUNC_1 (int ,int,int * const,TYPE_1__*) ;
 int FUNC_2 (TYPE_3__* const) ;
 int FUNC_3 (int ,TYPE_1__*) ;

int FUNC_4(VP8EncIterator* const VAR_0, const VP8ModeScore* const VAR_1) {
  VP8Residual VAR_2;
  VP8Encoder* const VAR_3 = VAR_0->enc_;
  int VAR_4, VAR_5, VAR_6;
  int VAR_7 = 0;

  FUNC_2(VAR_0);

  FUNC_1(0, 2, VAR_3, &VAR_2);
  for (VAR_4 = 0; VAR_4 <= 2; VAR_4 += 2) {
    for (VAR_6 = 0; VAR_6 < 2; ++VAR_6) {
      for (VAR_5 = 0; VAR_5 < 2; ++VAR_5) {
        const int VAR_8 = VAR_0->top_nz_[4 + VAR_4 + VAR_5] + VAR_0->left_nz_[4 + VAR_4 + VAR_6];
        FUNC_3(VAR_1->uv_levels[VAR_4 * 2 + VAR_5 + VAR_6 * 2], &VAR_2);
        VAR_7 += FUNC_0(VAR_8, &VAR_2);
        VAR_0->top_nz_[4 + VAR_4 + VAR_5] = VAR_0->left_nz_[4 + VAR_4 + VAR_6] = (VAR_2.last >= 0);
      }
    }
  }
  return VAR_7;
}
