
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * a; int uv_stride; int y_stride; int v; int u; int y; scalar_t__ mb_y; } ;
typedef TYPE_1__ VP8Io ;
struct TYPE_6__ {int cache_uv_stride_; int cache_y_stride_; int cache_v_; int cache_u_; int cache_y_; } ;
typedef TYPE_2__ VP8Decoder ;



__attribute__((used)) static void FUNC_0(VP8Decoder* const VAR_0, VP8Io* VAR_1) {

  VAR_1->mb_y = 0;
  VAR_1->y = VAR_0->cache_y_;
  VAR_1->u = VAR_0->cache_u_;
  VAR_1->v = VAR_0->cache_v_;
  VAR_1->y_stride = VAR_0->cache_y_stride_;
  VAR_1->uv_stride = VAR_0->cache_uv_stride_;
  VAR_1->a = ((void*)0);
}
