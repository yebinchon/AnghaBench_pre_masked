
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hp_pol; } ;
struct wm5100_priv {TYPE_1__ pdata; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct wm5100_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_0)
{
 struct wm5100_priv *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->pdata.hp_pol) {
  FUNC_0(VAR_1->pdata.hp_pol);
 }
}
