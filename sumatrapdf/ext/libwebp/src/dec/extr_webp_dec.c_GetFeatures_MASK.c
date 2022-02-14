
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int format; int has_animation; int has_alpha; int height; int width; } ;
typedef TYPE_1__ WebPBitstreamFeatures ;
typedef int VP8StatusCode ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (int const* const,size_t,int *,int *,int *,int *,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static VP8StatusCode FUNC_2(const uint8_t* const VAR_1, size_t VAR_2,
                                 WebPBitstreamFeatures* const VAR_3) {
  if (VAR_3 == ((void*)0) || VAR_1 == ((void*)0)) {
    return VAR_0;
  }
  FUNC_0(VAR_3);


  return FUNC_1(VAR_1, VAR_2,
                              &VAR_3->width, &VAR_3->height,
                              &VAR_3->has_alpha, &VAR_3->has_animation,
                              &VAR_3->format, ((void*)0));
}
