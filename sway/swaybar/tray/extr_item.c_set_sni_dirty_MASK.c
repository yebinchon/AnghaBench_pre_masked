
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swaybar_sni {TYPE_1__* tray; scalar_t__ max_size; scalar_t__ min_size; scalar_t__ target_size; } ;
struct TYPE_2__ {int bar; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct swaybar_sni*) ;

__attribute__((used)) static void FUNC_2(struct swaybar_sni *VAR_0) {
 if (FUNC_1(VAR_0)) {
  VAR_0->target_size = VAR_0->min_size = VAR_0->max_size = 0;
  FUNC_0(VAR_0->tray->bar);
 }
}
