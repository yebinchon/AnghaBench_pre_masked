
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ crtc_num; void* card_num; } ;
typedef TYPE_1__ drm_state_t ;


 char* FUNC_0 (char*) ;
 void* FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static int
FUNC_4(drm_state_t *VAR_1, const char *VAR_2, const char *VAR_3)
{
 if (FUNC_3(VAR_2, "card") == 0) {
  VAR_1->card_num = FUNC_1(VAR_3);
 } else if (FUNC_3(VAR_2, "crtc") == 0) {
  VAR_1->crtc_num = FUNC_1(VAR_3);
  if (VAR_1->crtc_num < 0) {
   FUNC_2(VAR_0, "%s", FUNC_0("CRTC must be a non-negative integer\n"));
   return -1;
  }
 } else {
  FUNC_2(VAR_0, FUNC_0("Unknown method parameter: `%s'.\n"), VAR_2);
  return -1;
 }

 return 0;
}
