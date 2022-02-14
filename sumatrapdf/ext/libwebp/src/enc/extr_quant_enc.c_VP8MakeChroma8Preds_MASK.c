
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int yuv_p_; int * uv_top_; scalar_t__ y_; int * u_left_; scalar_t__ x_; } ;
typedef TYPE_1__ VP8EncIterator ;


 int FUNC_0 (int ,int const* const,int const* const) ;

void FUNC_1(const VP8EncIterator* const VAR_0) {
  const uint8_t* const VAR_1 = VAR_0->x_ ? VAR_0->u_left_ : ((void*)0);
  const uint8_t* const VAR_2 = VAR_0->y_ ? VAR_0->uv_top_ : ((void*)0);
  FUNC_0(VAR_0->yuv_p_, VAR_1, VAR_2);
}
