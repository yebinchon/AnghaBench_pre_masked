
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int palette_code_bits_; int trivial_symbol_; scalar_t__ distance_; int * is_used_; scalar_t__ alpha_; scalar_t__ blue_; scalar_t__ red_; scalar_t__ literal_; } ;
typedef TYPE_1__ VP8LHistogram ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,int ,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int const) ;
 int VAR_3 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(const VP8LHistogram* const VAR_4,
                                       const VP8LHistogram* const VAR_5,
                                       double VAR_6,
                                       double* VAR_7) {
  const int VAR_8 = VAR_4->palette_code_bits_;
  int VAR_9 = 0;
  FUNC_3(VAR_4->palette_code_bits_ == VAR_5->palette_code_bits_);
  *VAR_7 += FUNC_0(VAR_4->literal_, VAR_5->literal_,
                              FUNC_2(VAR_8),
                              VAR_4->is_used_[0], VAR_5->is_used_[0], 0);
  *VAR_7 += FUNC_1(VAR_4->literal_ + VAR_2,
                                 VAR_5->literal_ + VAR_2,
                                 VAR_1);
  if (*VAR_7 > VAR_6) return 0;

  if (VAR_4->trivial_symbol_ != VAR_3 &&
      VAR_4->trivial_symbol_ == VAR_5->trivial_symbol_) {

    const uint32_t VAR_10 = (VAR_4->trivial_symbol_ >> 24) & 0xff;
    const uint32_t VAR_11 = (VAR_4->trivial_symbol_ >> 16) & 0xff;
    const uint32_t VAR_12 = (VAR_4->trivial_symbol_ >> 0) & 0xff;
    if ((VAR_10 == 0 || VAR_10 == 0xff) &&
        (VAR_11 == 0 || VAR_11 == 0xff) &&
        (VAR_12 == 0 || VAR_12 == 0xff)) {
      VAR_9 = 1;
    }
  }

  *VAR_7 +=
      FUNC_0(VAR_4->red_, VAR_5->red_, VAR_2, VAR_4->is_used_[1],
                         VAR_5->is_used_[1], VAR_9);
  if (*VAR_7 > VAR_6) return 0;

  *VAR_7 +=
      FUNC_0(VAR_4->blue_, VAR_5->blue_, VAR_2, VAR_4->is_used_[2],
                         VAR_5->is_used_[2], VAR_9);
  if (*VAR_7 > VAR_6) return 0;

  *VAR_7 +=
      FUNC_0(VAR_4->alpha_, VAR_5->alpha_, VAR_2,
                         VAR_4->is_used_[3], VAR_5->is_used_[3], VAR_9);
  if (*VAR_7 > VAR_6) return 0;

  *VAR_7 +=
      FUNC_0(VAR_4->distance_, VAR_5->distance_, VAR_0,
                         VAR_4->is_used_[4], VAR_5->is_used_[4], 0);
  *VAR_7 +=
      FUNC_1(VAR_4->distance_, VAR_5->distance_, VAR_0);
  if (*VAR_7 > VAR_6) return 0;

  return 1;
}
