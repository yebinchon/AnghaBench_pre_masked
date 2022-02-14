
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm9712_priv {int ac97; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 struct wm9712_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_3)
{
 struct wm9712_priv *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->ac97, 1, VAR_1,
  VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(VAR_3, VAR_0);

 if (VAR_5 == 0)
  FUNC_1(VAR_3);

 return VAR_5;
}
