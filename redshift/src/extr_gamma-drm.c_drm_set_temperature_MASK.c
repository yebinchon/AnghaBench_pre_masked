
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef double uint16_t ;
struct TYPE_4__ {int fd; TYPE_2__* crtcs; } ;
typedef TYPE_1__ drm_state_t ;
struct TYPE_5__ {scalar_t__ crtc_num; int gamma_size; int crtc_id; } ;
typedef TYPE_2__ drm_crtc_state_t ;
typedef int color_setting_t ;


 int VAR_0 ;
 int FUNC_0 (double*,double*,double*,int,int const*) ;
 int FUNC_1 (int ,int ,int,double*,double*,double*) ;
 int FUNC_2 (double*) ;
 double* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 double* FUNC_5 (double*,int) ;

__attribute__((used)) static int
FUNC_6(
 drm_state_t *VAR_1, const color_setting_t *VAR_2, int VAR_3)
{
 drm_crtc_state_t *VAR_4 = VAR_1->crtcs;
 int VAR_5 = 0;
 uint16_t *VAR_6 = ((void*)0);
 uint16_t *VAR_7 = ((void*)0);
 uint16_t *VAR_8 = ((void*)0);

 for (; VAR_4->crtc_num >= 0; VAR_4++) {
  if (VAR_4->gamma_size <= 1)
   continue;
  if (VAR_4->gamma_size != VAR_5) {
   if (VAR_5 == 0) {
    VAR_6 = FUNC_3(3 * VAR_4->gamma_size * sizeof(uint16_t));
    VAR_7 = VAR_6 + VAR_4->gamma_size;
    VAR_8 = VAR_7 + VAR_4->gamma_size;
   } else if (VAR_4->gamma_size > VAR_5) {
    VAR_6 = FUNC_5(VAR_6, 3 * VAR_4->gamma_size * sizeof(uint16_t));
    VAR_7 = VAR_6 + VAR_4->gamma_size;
    VAR_8 = VAR_7 + VAR_4->gamma_size;
   }
   if (VAR_6 == ((void*)0)) {
    FUNC_4(VAR_5 == 0 ? "malloc" : "realloc");
    return -1;
   }
   VAR_5 = VAR_4->gamma_size;
  }


  int VAR_9 = VAR_4->gamma_size;
  for (int VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
   uint16_t VAR_11 = (double)VAR_10/VAR_9 * (VAR_0+1);
   VAR_6[VAR_10] = VAR_11;
   VAR_7[VAR_10] = VAR_11;
   VAR_8[VAR_10] = VAR_11;
  }

  FUNC_0(VAR_6, VAR_7, VAR_8, VAR_4->gamma_size,
          VAR_2);
  FUNC_1(VAR_1->fd, VAR_4->crtc_id, VAR_4->gamma_size,
        VAR_6, VAR_7, VAR_8);
 }

 FUNC_2(VAR_6);

 return 0;
}
