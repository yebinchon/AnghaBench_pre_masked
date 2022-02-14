
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ crtc_num_count; int crtc_count; int* crtc_num; } ;
typedef TYPE_1__ randr_state_t ;
typedef int color_setting_t ;


 int FUNC_0 (TYPE_1__*,int,int const*,int) ;

__attribute__((used)) static int
FUNC_1(
 randr_state_t *VAR_0, const color_setting_t *VAR_1, int VAR_2)
{
 int VAR_3;



 if (VAR_0->crtc_num_count == 0) {
  for (int VAR_4 = 0; VAR_4 < VAR_0->crtc_count; VAR_4++) {
   VAR_3 = FUNC_0(
    VAR_0, VAR_4, VAR_1, VAR_2);
   if (VAR_3 < 0) return -1;
  }
 } else {
  for (int VAR_5 = 0; VAR_5 < VAR_0->crtc_num_count; ++VAR_5) {
   VAR_3 = FUNC_0(
    VAR_0, VAR_0->crtc_num[VAR_5], VAR_1, VAR_2);
   if (VAR_3 < 0) return -1;
  }
 }

 return 0;
}
