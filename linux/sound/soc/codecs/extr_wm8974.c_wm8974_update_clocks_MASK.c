
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8974_priv {int mclk; int fs; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 struct wm8974_priv* FUNC_0 (struct snd_soc_component*) ;
 unsigned int FUNC_1 (int,unsigned int,int*) ;
 int FUNC_2 (struct snd_soc_dai*,int ,int) ;
 int FUNC_3 (struct snd_soc_dai*,int ,int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_1)
{
 struct snd_soc_component *VAR_2 = VAR_1->component;
 struct wm8974_priv *VAR_3 = FUNC_0(VAR_2);
 unsigned int VAR_4;
 unsigned int VAR_5 = 0;
 unsigned int VAR_6;
 int VAR_7;

 if (!VAR_3->mclk || !VAR_3->fs)
  return 0;

 VAR_4 = 256 * VAR_3->fs;

 VAR_6 = FUNC_1(VAR_3->mclk, VAR_4, &VAR_7);

 if (VAR_6 != VAR_3->mclk) {

  VAR_5 = FUNC_1(22500000, VAR_4, &VAR_7);
 }

 FUNC_3(VAR_1, 0, 0, VAR_3->mclk, VAR_5);
 FUNC_2(VAR_1, VAR_0, VAR_7);

 return 0;
}
