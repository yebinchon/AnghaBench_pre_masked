
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int error_; } ;
typedef TYPE_2__ VP8TBuffer ;
typedef int VP8Residual ;
struct TYPE_13__ {int * uv_levels; int * y_ac_levels; int y_dc_levels; } ;
typedef TYPE_3__ VP8ModeScore ;
typedef int VP8Encoder ;
struct TYPE_14__ {int* top_nz_; int* left_nz_; TYPE_1__* mb_; int * enc_; } ;
typedef TYPE_4__ VP8EncIterator ;
struct TYPE_11__ {int type_; } ;


 int FUNC_0 (int,int,int * const,int *) ;
 int FUNC_1 (TYPE_4__* const) ;
 int FUNC_2 (TYPE_4__* const) ;
 void* FUNC_3 (int const,int *,TYPE_2__* const) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(VP8EncIterator* const VAR_0, const VP8ModeScore* const VAR_1,
                        VP8TBuffer* const VAR_2) {
  int VAR_3, VAR_4, VAR_5;
  VP8Residual VAR_6;
  VP8Encoder* const VAR_7 = VAR_0->enc_;

  FUNC_2(VAR_0);
  if (VAR_0->mb_->type_ == 1) {
    const int VAR_8 = VAR_0->top_nz_[8] + VAR_0->left_nz_[8];
    FUNC_0(0, 1, VAR_7, &VAR_6);
    FUNC_4(VAR_1->y_dc_levels, &VAR_6);
    VAR_0->top_nz_[8] = VAR_0->left_nz_[8] =
        FUNC_3(VAR_8, &VAR_6, VAR_2);
    FUNC_0(1, 0, VAR_7, &VAR_6);
  } else {
    FUNC_0(0, 3, VAR_7, &VAR_6);
  }


  for (VAR_4 = 0; VAR_4 < 4; ++VAR_4) {
    for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) {
      const int VAR_9 = VAR_0->top_nz_[VAR_3] + VAR_0->left_nz_[VAR_4];
      FUNC_4(VAR_1->y_ac_levels[VAR_3 + VAR_4 * 4], &VAR_6);
      VAR_0->top_nz_[VAR_3] = VAR_0->left_nz_[VAR_4] =
          FUNC_3(VAR_9, &VAR_6, VAR_2);
    }
  }


  FUNC_0(0, 2, VAR_7, &VAR_6);
  for (VAR_5 = 0; VAR_5 <= 2; VAR_5 += 2) {
    for (VAR_4 = 0; VAR_4 < 2; ++VAR_4) {
      for (VAR_3 = 0; VAR_3 < 2; ++VAR_3) {
        const int VAR_10 = VAR_0->top_nz_[4 + VAR_5 + VAR_3] + VAR_0->left_nz_[4 + VAR_5 + VAR_4];
        FUNC_4(VAR_1->uv_levels[VAR_5 * 2 + VAR_3 + VAR_4 * 2], &VAR_6);
        VAR_0->top_nz_[4 + VAR_5 + VAR_3] = VAR_0->left_nz_[4 + VAR_5 + VAR_4] =
            FUNC_3(VAR_10, &VAR_6, VAR_2);
      }
    }
  }
  FUNC_1(VAR_0);
  return !VAR_2->error_;
}
