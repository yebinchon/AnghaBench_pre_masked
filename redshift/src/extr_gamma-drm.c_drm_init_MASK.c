
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int crtc_num; int fd; int * crtcs; int * res; scalar_t__ card_num; } ;
typedef TYPE_1__ drm_state_t ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(drm_state_t **VAR_0)
{

 *VAR_0 = FUNC_0(sizeof(drm_state_t));
 if (*VAR_0 == ((void*)0)) return -1;

 drm_state_t *VAR_1 = *VAR_0;
 VAR_1->card_num = 0;
 VAR_1->crtc_num = -1;
 VAR_1->fd = -1;
 VAR_1->res = ((void*)0);
 VAR_1->crtcs = ((void*)0);

 return 0;
}
