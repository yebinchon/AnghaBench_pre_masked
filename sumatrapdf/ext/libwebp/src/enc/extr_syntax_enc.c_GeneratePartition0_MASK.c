
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_20__ {scalar_t__ error_; } ;
struct TYPE_19__ {int mb_w_; int mb_h_; int num_parts_; TYPE_4__* pic_; scalar_t__ alpha_data_size_; int proba_; int filter_hdr_; TYPE_3__ bw_; } ;
typedef TYPE_2__ VP8Encoder ;
typedef TYPE_3__ VP8BitWriter ;
struct TYPE_21__ {TYPE_1__* stats; } ;
struct TYPE_18__ {int* header_bytes; int alpha_data_size; } ;


 int FUNC_0 (TYPE_3__* const,int *) ;
 int FUNC_1 (TYPE_3__* const,TYPE_2__* const) ;
 int FUNC_2 (TYPE_3__* const,TYPE_2__* const) ;
 int FUNC_3 (TYPE_3__* const) ;
 int FUNC_4 (TYPE_3__* const,int const) ;
 int FUNC_5 (TYPE_3__* const) ;
 int FUNC_6 (TYPE_2__* const) ;
 int FUNC_7 (TYPE_3__* const,int ) ;
 int FUNC_8 (TYPE_3__* const,int,int) ;
 int FUNC_9 (TYPE_3__* const,int *) ;
 int VAR_0 ;
 int FUNC_10 (TYPE_4__*,int ) ;

__attribute__((used)) static int FUNC_11(VP8Encoder* const VAR_1) {
  VP8BitWriter* const VAR_2 = &VAR_1->bw_;
  const int VAR_3 = VAR_1->mb_w_ * VAR_1->mb_h_;
  uint64_t VAR_4, VAR_5, VAR_6;

  VAR_4 = FUNC_5(VAR_2);
  if (!FUNC_4(VAR_2, VAR_3 * 7 / 8)) {
    return FUNC_10(VAR_1->pic_, VAR_0);
  }
  FUNC_7(VAR_2, 0);
  FUNC_7(VAR_2, 0);

  FUNC_2(VAR_2, VAR_1);
  FUNC_0(VAR_2, &VAR_1->filter_hdr_);
  FUNC_8(VAR_2, VAR_1->num_parts_ == 8 ? 3 :
                 VAR_1->num_parts_ == 4 ? 2 :
                 VAR_1->num_parts_ == 2 ? 1 : 0, 2);
  FUNC_1(VAR_2, VAR_1);
  FUNC_7(VAR_2, 0);
  FUNC_9(VAR_2, &VAR_1->proba_);
  VAR_5 = FUNC_5(VAR_2);
  FUNC_6(VAR_1);
  FUNC_3(VAR_2);

  VAR_6 = FUNC_5(VAR_2);


  if (VAR_1->pic_->stats) {
    VAR_1->pic_->stats->header_bytes[0] = (int)((VAR_5 - VAR_4 + 7) >> 3);
    VAR_1->pic_->stats->header_bytes[1] = (int)((VAR_6 - VAR_5 + 7) >> 3);
    VAR_1->pic_->stats->alpha_data_size = (int)VAR_1->alpha_data_size_;
  }





  if (VAR_2->error_) {
    return FUNC_10(VAR_1->pic_, VAR_0);
  }
  return 1;
}
