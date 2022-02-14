
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* y_left_; int* u_left_; int* v_left_; scalar_t__ y_; int left_derr_; int * top_derr_; scalar_t__* left_nz_; } ;
typedef TYPE_1__ VP8EncIterator ;


 int FUNC_0 (int*,int,int) ;

__attribute__((used)) static void FUNC_1(VP8EncIterator* const VAR_0) {
  VAR_0->y_left_[-1] = VAR_0->u_left_[-1] = VAR_0->v_left_[-1] =
      (VAR_0->y_ > 0) ? 129 : 127;
  FUNC_0(VAR_0->y_left_, 129, 16);
  FUNC_0(VAR_0->u_left_, 129, 8);
  FUNC_0(VAR_0->v_left_, 129, 8);
  VAR_0->left_nz_[8] = 0;
  if (VAR_0->top_derr_ != ((void*)0)) {
    FUNC_0(&VAR_0->left_derr_, 0, sizeof(VAR_0->left_derr_));
  }
}
