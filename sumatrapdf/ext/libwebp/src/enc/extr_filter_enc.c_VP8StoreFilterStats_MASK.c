
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* dqm_; } ;
typedef TYPE_3__ VP8Encoder ;
struct TYPE_10__ {int yuv_out2_; int yuv_in_; int *** lf_stats_; int yuv_out_; TYPE_2__* mb_; TYPE_3__* enc_; } ;
typedef TYPE_4__ VP8EncIterator ;
struct TYPE_8__ {int segment_; int type_; scalar_t__ skip_; } ;
struct TYPE_7__ {int fstrength_; int quant_; } ;


 int FUNC_0 (TYPE_4__* const,int const) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int const VAR_0 ;

void FUNC_2(VP8EncIterator* const VAR_1) {

  int VAR_2;
  VP8Encoder* const VAR_3 = VAR_1->enc_;
  const int VAR_4 = VAR_1->mb_->segment_;
  const int VAR_5 = VAR_3->dqm_[VAR_4].fstrength_;


  const int VAR_6 = -VAR_3->dqm_[VAR_4].quant_;
  const int VAR_7 = VAR_3->dqm_[VAR_4].quant_;
  const int VAR_8 = (VAR_7 - VAR_6 >= 4) ? 4 : 1;

  if (VAR_1->lf_stats_ == ((void*)0)) return;







  if (VAR_1->mb_->type_ == 1 && VAR_1->mb_->skip_) return;


  (*VAR_1->lf_stats_)[VAR_4][0] += FUNC_1(VAR_1->yuv_in_, VAR_1->yuv_out_);

  for (VAR_2 = VAR_6; VAR_2 <= VAR_7; VAR_2 += VAR_8) {
    const int VAR_9 = VAR_5 + VAR_2;
    if (VAR_9 <= 0 || VAR_9 >= VAR_0) {
      continue;
    }
    FUNC_0(VAR_1, VAR_9);
    (*VAR_1->lf_stats_)[VAR_4][VAR_9] += FUNC_1(VAR_1->yuv_in_, VAR_1->yuv_out2_);
  }



}
