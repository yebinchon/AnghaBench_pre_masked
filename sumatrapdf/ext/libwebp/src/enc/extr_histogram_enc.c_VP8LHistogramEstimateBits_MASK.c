
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ distance_; scalar_t__ literal_; int * is_used_; scalar_t__ alpha_; scalar_t__ blue_; scalar_t__ red_; int palette_code_bits_; } ;
typedef TYPE_1__ VP8LHistogram ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 double FUNC_0 (scalar_t__,scalar_t__,int *,int *) ;
 double FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

double FUNC_3(VP8LHistogram* const VAR_3) {
  return
      FUNC_0(VAR_3->literal_, FUNC_2(VAR_3->palette_code_bits_),
                     ((void*)0), &VAR_3->is_used_[0])
      + FUNC_0(VAR_3->red_, VAR_2, ((void*)0), &VAR_3->is_used_[1])
      + FUNC_0(VAR_3->blue_, VAR_2, ((void*)0), &VAR_3->is_used_[2])
      + FUNC_0(VAR_3->alpha_, VAR_2, ((void*)0), &VAR_3->is_used_[3])
      + FUNC_0(VAR_3->distance_, VAR_0, ((void*)0), &VAR_3->is_used_[4])
      + FUNC_1(VAR_3->literal_ + VAR_2, VAR_1)
      + FUNC_1(VAR_3->distance_, VAR_0);
}
