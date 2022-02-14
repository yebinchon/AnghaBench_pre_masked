
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97_reset_cfg {int gpio_sync; int gpio_sdata; int gpio_reset; struct pinctrl_state* pstate_run; struct pinctrl_state* pstate_warm_reset; struct pinctrl_state* pstate_reset; struct pinctrl_state* pctl; } ;
struct pinctrl_state {int dummy; } ;
typedef struct pinctrl_state pinctrl ;
struct device {int of_node; } ;


 scalar_t__ FUNC_0 (struct pinctrl_state*) ;
 int FUNC_1 (struct pinctrl_state*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,int,char*) ;
 struct pinctrl_state* FUNC_4 (struct device*) ;
 int FUNC_5 (int ,char*,int) ;
 struct pinctrl_state* FUNC_6 (struct pinctrl_state*,char*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_0,
  struct snd_ac97_reset_cfg *VAR_1)
{
 struct pinctrl *VAR_2;
 struct pinctrl_state *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_2 = FUNC_4(VAR_0);
 if (FUNC_0(VAR_2)) {
  FUNC_2(VAR_0, "Failed to get pinctrl\n");
  return FUNC_1(VAR_2);
 }
 VAR_1->pctl = VAR_2;

 VAR_3 = FUNC_6(VAR_2, "ac97-reset");
 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_0, "Can't find pinctrl state ac97-reset\n");
  return FUNC_1(VAR_3);
 }
 VAR_1->pstate_reset = VAR_3;

 VAR_3 = FUNC_6(VAR_2, "ac97-warm-reset");
 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_0, "Can't find pinctrl state ac97-warm-reset\n");
  return FUNC_1(VAR_3);
 }
 VAR_1->pstate_warm_reset = VAR_3;

 VAR_3 = FUNC_6(VAR_2, "ac97-running");
 if (FUNC_0(VAR_3)) {
  FUNC_2(VAR_0, "Can't find pinctrl state ac97-running\n");
  return FUNC_1(VAR_3);
 }
 VAR_1->pstate_run = VAR_3;

 VAR_4 = FUNC_5(VAR_0->of_node, "ac97-gpios", 0);
 if (VAR_4 < 0) {
  FUNC_2(VAR_0, "Can't find ac97-sync gpio\n");
  return VAR_4;
 }
 VAR_5 = FUNC_3(VAR_0, VAR_4, "AC97 link sync");
 if (VAR_5) {
  FUNC_2(VAR_0, "Failed requesting ac97-sync gpio\n");
  return VAR_5;
 }
 VAR_1->gpio_sync = VAR_4;

 VAR_4 = FUNC_5(VAR_0->of_node, "ac97-gpios", 1);
 if (VAR_4 < 0) {
  FUNC_2(VAR_0, "Can't find ac97-sdata gpio %d\n", VAR_4);
  return VAR_4;
 }
 VAR_5 = FUNC_3(VAR_0, VAR_4, "AC97 link sdata");
 if (VAR_5) {
  FUNC_2(VAR_0, "Failed requesting ac97-sdata gpio\n");
  return VAR_5;
 }
 VAR_1->gpio_sdata = VAR_4;

 VAR_4 = FUNC_5(VAR_0->of_node, "ac97-gpios", 2);
 if (VAR_4 < 0) {
  FUNC_2(VAR_0, "Can't find ac97-reset gpio\n");
  return VAR_4;
 }
 VAR_5 = FUNC_3(VAR_0, VAR_4, "AC97 link reset");
 if (VAR_5) {
  FUNC_2(VAR_0, "Failed requesting ac97-reset gpio\n");
  return VAR_5;
 }
 VAR_1->gpio_reset = VAR_4;

 return 0;
}
