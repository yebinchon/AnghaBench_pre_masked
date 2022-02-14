
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wl_output {int dummy; } ;
struct swaynag_output {TYPE_1__* swaynag; int scale; } ;
typedef int int32_t ;
struct TYPE_3__ {int scale; struct swaynag_output* output; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, struct wl_output *VAR_1,
  int32_t VAR_2) {
 struct swaynag_output *VAR_3 = VAR_0;
 VAR_3->scale = VAR_2;
 if (VAR_3->swaynag->output == VAR_3) {
  VAR_3->swaynag->scale = VAR_3->scale;
  FUNC_1(VAR_3->swaynag);
  FUNC_0(VAR_3->swaynag);
 }
}
