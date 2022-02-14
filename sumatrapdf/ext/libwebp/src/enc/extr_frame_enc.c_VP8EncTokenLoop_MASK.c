
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ VP8RDLevel ;
struct TYPE_21__ {int H; scalar_t__ D; } ;
typedef TYPE_3__ VP8ModeScore ;
struct TYPE_23__ {scalar_t__ use_skip_proba_; scalar_t__ coeffs_; } ;
struct TYPE_20__ {int size_; } ;
struct TYPE_22__ {int mb_w_; int mb_h_; int do_search_; scalar_t__ rd_opt_level_; int num_parts_; int use_tokens_; scalar_t__ max_i4_header_bits_; scalar_t__ percent_; int pic_; scalar_t__ parts_; int tokens_; TYPE_5__ proba_; TYPE_2__ segment_hdr_; TYPE_1__* config_; } ;
typedef TYPE_4__ VP8Encoder ;
typedef TYPE_5__ VP8EncProba ;
typedef int VP8EncIterator ;
struct TYPE_24__ {double value; scalar_t__ do_size_search; int dq; int q; int last_q; int last_value; } ;
struct TYPE_19__ {int pass; } ;
typedef TYPE_6__ PassStats ;


 int FUNC_0 (TYPE_6__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_5__* const) ;
 double FUNC_2 (int,int const) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (TYPE_4__* const,TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_4__* const) ;
 scalar_t__ const VAR_4 ;
 int FUNC_6 (int *,TYPE_3__*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__* const) ;
 int FUNC_9 (TYPE_4__* const,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_5__* const) ;
 int FUNC_12 (int *,TYPE_3__*,scalar_t__ const) ;
 int FUNC_13 (int *,scalar_t__,int const*,int) ;
 scalar_t__ FUNC_14 (int *,int const*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (TYPE_4__* const,int *) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 int VAR_5 ;
 int FUNC_24 (int ,int ) ;
 scalar_t__ FUNC_25 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_26 (int) ;
 scalar_t__ FUNC_27 (int ) ;
 int FUNC_28 (char*,int,int ,double,int ,int ,int ) ;

int FUNC_29(VP8Encoder* const VAR_6) {

  int VAR_7 = (VAR_6->mb_w_ * VAR_6->mb_h_) >> 3;
  int VAR_8 = VAR_6->config_->pass;
  const int VAR_9 = VAR_6->do_search_;
  VP8EncIterator VAR_10;
  VP8EncProba* const VAR_11 = &VAR_6->proba_;
  const VP8RDLevel VAR_12 = VAR_6->rd_opt_level_;
  const uint64_t VAR_13 = VAR_6->mb_w_ * VAR_6->mb_h_ * 384;
  PassStats VAR_14;
  int VAR_15;

  FUNC_3(VAR_6, &VAR_14);
  VAR_15 = FUNC_5(VAR_6);
  if (!VAR_15) return 0;

  if (VAR_7 < VAR_2) VAR_7 = VAR_2;

  FUNC_26(VAR_6->num_parts_ == 1);
  FUNC_26(VAR_6->use_tokens_);
  FUNC_26(VAR_11->use_skip_proba_ == 0);
  FUNC_26(VAR_12 >= VAR_4);
  FUNC_26(VAR_8 > 0);

  while (VAR_15 && VAR_8-- > 0) {
    const int VAR_16 = (FUNC_27(VAR_14.dq) <= VAR_0) ||
                             (VAR_8 == 0) ||
                             (VAR_6->max_i4_header_bits_ == 0);
    uint64_t VAR_17 = 0;
    uint64_t VAR_18 = 0;
    int VAR_19 = VAR_7;
    FUNC_18(VAR_6, &VAR_10);
    FUNC_9(VAR_6, VAR_14.q);
    if (VAR_16) {
      FUNC_8(VAR_6);
      FUNC_15(&VAR_10);
    }
    FUNC_23(&VAR_6->tokens_);
    do {
      VP8ModeScore VAR_20;
      FUNC_17(&VAR_10, ((void*)0));
      if (--VAR_19 < 0) {
        FUNC_1(VAR_11);
        FUNC_11(VAR_11);
        VAR_19 = VAR_7;
      }
      FUNC_12(&VAR_10, &VAR_20, VAR_12);
      VAR_15 = FUNC_6(&VAR_10, &VAR_20, &VAR_6->tokens_);
      if (!VAR_15) {
        FUNC_24(VAR_6->pic_, VAR_5);
        break;
      }
      VAR_17 += VAR_20.H;
      VAR_18 += VAR_20.D;
      if (VAR_16) {
        FUNC_10(&VAR_10);
        FUNC_22(&VAR_10);
        FUNC_16(&VAR_10);
        VAR_15 = FUNC_20(&VAR_10, 20);
      }
      FUNC_21(&VAR_10);
    } while (VAR_15 && FUNC_19(&VAR_10));
    if (!VAR_15) break;

    VAR_17 += VAR_6->segment_hdr_.size_;
    if (VAR_14.do_size_search) {
      uint64_t VAR_21 = FUNC_1(&VAR_6->proba_);
      VAR_21 += FUNC_14(&VAR_6->tokens_,
                                   (const uint8_t*)VAR_11->coeffs_);
      VAR_21 = (VAR_21 + VAR_17 + 1024) >> 11;
      VAR_21 += VAR_1;
      VAR_14.value = (double)VAR_21;
    } else {
      VAR_14.value = FUNC_2(VAR_18, VAR_13);
    }






    if (VAR_6->max_i4_header_bits_ > 0 && VAR_17 > VAR_3) {
      ++VAR_8;
      VAR_6->max_i4_header_bits_ >>= 1;
      if (VAR_16) {
        FUNC_7(&VAR_10);
      }
      continue;
    }
    if (VAR_16) {
      break;
    }
    if (VAR_9) {
      FUNC_0(&VAR_14);
    }
  }
  if (VAR_15) {
    if (!VAR_14.do_size_search) {
      FUNC_1(&VAR_6->proba_);
    }
    VAR_15 = FUNC_13(&VAR_6->tokens_, VAR_6->parts_ + 0,
                       (const uint8_t*)VAR_11->coeffs_, 1);
  }
  VAR_15 = VAR_15 && FUNC_25(VAR_6->pic_, VAR_6->percent_ + 20, &VAR_6->percent_);
  return FUNC_4(&VAR_10, VAR_15);
}
