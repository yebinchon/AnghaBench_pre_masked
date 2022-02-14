
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8904_priv {int drc_texts; int retune_mobile_texts; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ) ;
 struct wm8904_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_0)
{
 struct wm8904_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->retune_mobile_texts);
 FUNC_0(VAR_1->drc_texts);
}
