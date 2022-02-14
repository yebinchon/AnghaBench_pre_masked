
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int* extra_info; int extra_info_type; int * stats; } ;
typedef TYPE_2__ WebPPicture ;
struct TYPE_10__ {int type_; scalar_t__ skip_; int segment_; int uv_mode_; int alpha_; } ;
typedef TYPE_3__ VP8MBInfo ;
struct TYPE_11__ {int* block_count_; size_t mb_w_; TYPE_1__* dqm_; TYPE_2__* pic_; } ;
typedef TYPE_4__ VP8Encoder ;
struct TYPE_12__ {size_t x_; size_t y_; int* preds_; scalar_t__ yuv_out_; scalar_t__ uv_bits_; scalar_t__ luma_bits_; TYPE_3__* mb_; TYPE_4__* enc_; } ;
typedef TYPE_5__ VP8EncIterator ;
struct TYPE_8__ {int quant_; } ;


 int FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (TYPE_5__ const* const) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_2(const VP8EncIterator* const VAR_3) {
  VP8Encoder* const VAR_4 = VAR_3->enc_;
  const VP8MBInfo* const VAR_5 = VAR_3->mb_;
  WebPPicture* const VAR_6 = VAR_4->pic_;

  if (VAR_6->stats != ((void*)0)) {
    FUNC_1(VAR_3);
    VAR_4->block_count_[0] += (VAR_5->type_ == 0);
    VAR_4->block_count_[1] += (VAR_5->type_ == 1);
    VAR_4->block_count_[2] += (VAR_5->skip_ != 0);
  }

  if (VAR_6->extra_info != ((void*)0)) {
    uint8_t* const VAR_7 = &VAR_6->extra_info[VAR_3->x_ + VAR_3->y_ * VAR_4->mb_w_];
    switch (VAR_6->extra_info_type) {
      case 1: *VAR_7 = VAR_5->type_; break;
      case 2: *VAR_7 = VAR_5->segment_; break;
      case 3: *VAR_7 = VAR_4->dqm_[VAR_5->segment_].quant_; break;
      case 4: *VAR_7 = (VAR_5->type_ == 1) ? VAR_3->preds_[0] : 0xff; break;
      case 5: *VAR_7 = VAR_5->uv_mode_; break;
      case 6: {
        const int VAR_8 = (int)((VAR_3->luma_bits_ + VAR_3->uv_bits_ + 7) >> 3);
        *VAR_7 = (VAR_8 > 255) ? 255 : VAR_8; break;
      }
      case 7: *VAR_7 = VAR_5->alpha_; break;
      default: *VAR_7 = 0; break;
    }
  }





}
