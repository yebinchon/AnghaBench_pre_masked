
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; TYPE_2__* crtcs; } ;
typedef TYPE_1__ drm_state_t ;
struct TYPE_5__ {scalar_t__ crtc_num; int b_gamma; int g_gamma; int * r_gamma; int gamma_size; int crtc_id; } ;
typedef TYPE_2__ drm_crtc_state_t ;


 int FUNC_0 (int ,int ,int ,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_1(drm_state_t *VAR_0)
{
 drm_crtc_state_t *VAR_1 = VAR_0->crtcs;
 while (VAR_1->crtc_num >= 0) {
  if (VAR_1->r_gamma != ((void*)0)) {
   FUNC_0(VAR_0->fd, VAR_1->crtc_id, VAR_1->gamma_size,
         VAR_1->r_gamma, VAR_1->g_gamma, VAR_1->b_gamma);
  }
  VAR_1++;
 }
}
