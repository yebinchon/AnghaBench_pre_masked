
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int VP8RDLevel ;
struct TYPE_13__ {int method_; int do_search_; int const percent_; int mb_w_; int mb_h_; int max_i4_header_bits_; int pic_; int proba_; TYPE_1__* config_; } ;
typedef TYPE_2__ VP8Encoder ;
struct TYPE_14__ {int do_size_search; int dq; int q; int last_q; int value; int last_value; } ;
struct TYPE_12__ {int pass; } ;
typedef TYPE_3__ PassStats ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__* const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__* const,TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_2__* const,int const,int,int const,TYPE_3__*) ;
 scalar_t__ const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__* const) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int const,int const*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,int,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(VP8Encoder* const VAR_4) {
  const int VAR_5 = VAR_4->method_;
  const int VAR_6 = VAR_4->do_search_;
  const int VAR_7 = ((VAR_5 == 0 || VAR_5 == 3) && !VAR_6);
  int VAR_8 = VAR_4->config_->pass;
  const int VAR_9 = 20;
  const int VAR_10 =
      (VAR_9 + VAR_8 / 2) / VAR_8;
  const int VAR_11 = VAR_4->percent_ + VAR_9;
  const VP8RDLevel VAR_12 =
      (VAR_5 >= 3 || VAR_6) ? VAR_2 : VAR_3;
  int VAR_13 = VAR_4->mb_w_ * VAR_4->mb_h_;
  PassStats VAR_14;

  FUNC_3(VAR_4, &VAR_14);
  FUNC_5(VAR_4);


  if (VAR_7) {
    if (VAR_5 == 3) {
      VAR_13 = (VAR_13 > 200) ? VAR_13 >> 1 : 100;
    } else {
      VAR_13 = (VAR_13 > 200) ? VAR_13 >> 2 : 50;
    }
  }

  while (VAR_8-- > 0) {
    const int VAR_15 = (FUNC_8(VAR_14.dq) <= VAR_0) ||
                             (VAR_8 == 0) ||
                             (VAR_4->max_i4_header_bits_ == 0);
    const uint64_t VAR_16 =
        FUNC_4(VAR_4, VAR_12, VAR_13, VAR_10, &VAR_14);
    if (VAR_16 == 0) return 0;




    if (VAR_4->max_i4_header_bits_ > 0 && VAR_16 > VAR_1) {
      ++VAR_8;
      VAR_4->max_i4_header_bits_ >>= 1;
      continue;
    }
    if (VAR_15) {
      break;
    }

    if (VAR_6) {
      FUNC_0(&VAR_14);
      if (FUNC_8(VAR_14.dq) <= VAR_0) break;
    }
  }
  if (!VAR_6 || !VAR_14.do_size_search) {

    FUNC_1(VAR_4);
    FUNC_2(&VAR_4->proba_);
  }
  FUNC_6(&VAR_4->proba_);
  return FUNC_7(VAR_4->pic_, VAR_11, &VAR_4->percent_);
}
