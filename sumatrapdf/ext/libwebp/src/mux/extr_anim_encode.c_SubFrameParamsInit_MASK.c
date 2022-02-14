
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int should_try_; int empty_rect_allowed_; int sub_frame_lossy_; int sub_frame_ll_; } ;
typedef TYPE_1__ SubFrameParams ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(SubFrameParams* const VAR_0,
                              int VAR_1, int VAR_2) {
  VAR_0->should_try_ = VAR_1;
  VAR_0->empty_rect_allowed_ = VAR_2;
  if (!FUNC_0(&VAR_0->sub_frame_ll_) ||
      !FUNC_0(&VAR_0->sub_frame_lossy_)) {
    return 0;
  }
  return 1;
}
