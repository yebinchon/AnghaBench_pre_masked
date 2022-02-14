
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm0010_priv {int lock; } ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int const FUNC_2 (struct snd_soc_component*) ;
 struct wm0010_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_0,
     enum snd_soc_bias_level VAR_1)
{
 struct wm0010_priv *VAR_2 = FUNC_3(VAR_0);

 switch (VAR_1) {
 case 130:
  if (FUNC_2(VAR_0) == 129)
   FUNC_4(VAR_0);
  break;
 case 129:
  break;
 case 128:
  if (FUNC_2(VAR_0) == 129) {
   FUNC_0(&VAR_2->lock);
   FUNC_5(VAR_0);
   FUNC_1(&VAR_2->lock);
  }
  break;
 case 131:
  break;
 }

 return 0;
}
