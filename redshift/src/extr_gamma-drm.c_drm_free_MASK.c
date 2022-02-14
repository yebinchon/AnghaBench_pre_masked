
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int crtc_num; int fd; int * res; struct TYPE_5__* crtcs; struct TYPE_5__* r_gamma; } ;
typedef TYPE_1__ drm_state_t ;
typedef TYPE_1__ drm_crtc_state_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(drm_state_t *VAR_0)
{
 if (VAR_0->crtcs != ((void*)0)) {
  drm_crtc_state_t *VAR_1 = VAR_0->crtcs;
  while (VAR_1->crtc_num >= 0) {
   FUNC_2(VAR_1->r_gamma);
   VAR_1->crtc_num = -1;
   VAR_1++;
  }
  FUNC_2(VAR_0->crtcs);
  VAR_0->crtcs = ((void*)0);
 }
 if (VAR_0->res != ((void*)0)) {
  FUNC_1(VAR_0->res);
  VAR_0->res = ((void*)0);
 }
 if (VAR_0->fd >= 0) {
  FUNC_0(VAR_0->fd);
  VAR_0->fd = -1;
 }

 FUNC_2(VAR_0);
}
