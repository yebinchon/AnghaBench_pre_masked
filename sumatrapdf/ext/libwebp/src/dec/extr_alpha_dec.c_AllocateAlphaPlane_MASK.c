
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int const uint64_t ;
struct TYPE_5__ {int width; int crop_bottom; } ;
typedef TYPE_1__ VP8Io ;
struct TYPE_6__ {int * alpha_prev_line_; int * alpha_plane_mem_; int * alpha_plane_; } ;
typedef TYPE_2__ VP8Decoder ;


 scalar_t__ FUNC_0 (int const,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(VP8Decoder* const VAR_0, const VP8Io* const VAR_1) {
  const int VAR_2 = VAR_1->width;
  const int VAR_3 = VAR_1->crop_bottom;
  const uint64_t VAR_4 = (uint64_t)VAR_2 * VAR_3;
  FUNC_1(VAR_0->alpha_plane_mem_ == ((void*)0));
  VAR_0->alpha_plane_mem_ =
      (uint8_t*)FUNC_0(VAR_4, sizeof(*VAR_0->alpha_plane_));
  if (VAR_0->alpha_plane_mem_ == ((void*)0)) {
    return 0;
  }
  VAR_0->alpha_plane_ = VAR_0->alpha_plane_mem_;
  VAR_0->alpha_prev_line_ = ((void*)0);
  return 1;
}
