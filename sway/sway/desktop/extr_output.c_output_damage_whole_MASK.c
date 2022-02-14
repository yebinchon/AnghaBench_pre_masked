
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_output {scalar_t__ damage; scalar_t__ wlr_output; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct sway_output *VAR_0) {


 if (VAR_0 && VAR_0->wlr_output && VAR_0->damage) {
  FUNC_0(VAR_0->damage);
 }
}
