
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int val; int sat; int hue; int raw; } ;
typedef TYPE_1__ rgblight_config_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(void) {
    rgblight_config_t VAR_0 = { .raw = FUNC_0() };
    FUNC_2(VAR_0.hue, VAR_0.sat, VAR_0.val);
    FUNC_1(VAR_0.mode);
}
