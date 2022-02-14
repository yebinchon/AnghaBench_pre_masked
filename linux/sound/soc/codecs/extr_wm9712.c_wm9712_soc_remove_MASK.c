
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm9712_priv {int ac97; int mfd_pdata; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*) ;
 struct wm9712_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_1)
{
 struct wm9712_priv *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_0) && !VAR_2->mfd_pdata) {
  FUNC_1(VAR_1);
  FUNC_3(VAR_2->ac97);
 }
}
