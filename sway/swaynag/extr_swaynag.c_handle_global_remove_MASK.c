
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct wl_registry {int dummy; } ;
struct swaynag {int run_display; TYPE_1__* output; } ;
struct TYPE_2__ {scalar_t__ wl_name; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, struct wl_registry *VAR_1,
  uint32_t VAR_2) {
 struct swaynag *VAR_3 = VAR_0;
 if (VAR_3->output->wl_name == VAR_2) {
  VAR_3->run_display = 0;
 }
}
