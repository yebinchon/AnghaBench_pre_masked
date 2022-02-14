
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int const uint32_t ;
typedef int VP8LTransform ;
struct TYPE_3__ {int next_transform_; int width_; int * transforms_; int const* argb_cache_; } ;
typedef TYPE_1__ VP8LDecoder ;


 int FUNC_0 (int * const,int,int const,int const*,int const* const) ;
 int FUNC_1 (int const* const,int const*,int const) ;

__attribute__((used)) static void FUNC_2(VP8LDecoder* const VAR_0,
                                   int VAR_1, int VAR_2,
                                   const uint32_t* const VAR_3) {
  int VAR_4 = VAR_0->next_transform_;
  const int VAR_5 = VAR_0->width_ * VAR_2;
  const int VAR_6 = VAR_1 + VAR_2;
  const uint32_t* VAR_7 = VAR_3;
  uint32_t* const VAR_8 = VAR_0->argb_cache_;


  while (VAR_4-- > 0) {
    VP8LTransform* const VAR_9 = &VAR_0->transforms_[VAR_4];
    FUNC_0(VAR_9, VAR_1, VAR_6, VAR_7, VAR_8);
    VAR_7 = VAR_8;
  }
  if (VAR_7 != VAR_8) {

    FUNC_1(VAR_8, VAR_7, VAR_5 * sizeof(*VAR_8));
  }
}
