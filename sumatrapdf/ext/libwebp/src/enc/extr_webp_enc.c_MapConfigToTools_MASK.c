
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int score_t ;
struct TYPE_4__ {int method; int partition_limit; scalar_t__ target_size; scalar_t__ target_PSNR; int low_memory; int thread_level; } ;
typedef TYPE_1__ WebPConfig ;
struct TYPE_5__ {int method_; scalar_t__ rd_opt_level_; int max_i4_header_bits_; int mb_header_limit_; int mb_w_; int mb_h_; int do_search_; int use_tokens_; int num_parts_; int thread_level_; TYPE_1__* config_; } ;
typedef TYPE_2__ VP8Encoder ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(VP8Encoder* const VAR_4) {
  const WebPConfig* const VAR_5 = VAR_4->config_;
  const int VAR_6 = VAR_5->method;
  const int VAR_7 = 100 - VAR_5->partition_limit;
  VAR_4->method_ = VAR_6;
  VAR_4->rd_opt_level_ = (VAR_6 >= 6) ? VAR_3
                     : (VAR_6 >= 5) ? VAR_2
                     : (VAR_6 >= 3) ? VAR_0
                     : VAR_1;
  VAR_4->max_i4_header_bits_ =
      256 * 16 * 16 *
      (VAR_7 * VAR_7) / (100 * 100);


  VAR_4->mb_header_limit_ =
      (score_t)256 * 510 * 8 * 1024 / (VAR_4->mb_w_ * VAR_4->mb_h_);

  VAR_4->thread_level_ = VAR_5->thread_level;

  VAR_4->do_search_ = (VAR_5->target_size > 0 || VAR_5->target_PSNR > 0);
  if (!VAR_5->low_memory) {

    VAR_4->use_tokens_ = (VAR_4->rd_opt_level_ >= VAR_0);

    if (VAR_4->use_tokens_) {
      VAR_4->num_parts_ = 1;
    }
  }
}
