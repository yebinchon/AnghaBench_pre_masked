
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xkb_keysym_t ;
typedef int uint32_t ;
struct wlr_session {int dummy; } ;
struct sway_keyboard {int dummy; } ;
struct TYPE_2__ {int backend; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct wlr_session* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct wlr_session*,unsigned int) ;

__attribute__((used)) static bool FUNC_3(struct sway_keyboard *VAR_3,
  const xkb_keysym_t *VAR_4, uint32_t VAR_5, size_t VAR_6) {
 for (size_t VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {
  xkb_keysym_t VAR_8 = VAR_4[VAR_7];
  if (VAR_8 >= VAR_0 &&
    VAR_8 <= VAR_1) {
   if (FUNC_1(VAR_2.backend)) {
    struct wlr_session *VAR_9 =
     FUNC_0(VAR_2.backend);
    if (VAR_9) {
     unsigned VAR_10 = VAR_8 - VAR_0 + 1;
     FUNC_2(VAR_9, VAR_10);
    }
   }
   return 1;
  }
 }

 return 0;
}
