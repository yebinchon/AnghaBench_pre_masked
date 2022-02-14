
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8978_priv {scalar_t__ f_pllout; int regmap; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 struct wm8978_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_2)
{
 struct wm8978_priv *VAR_3 = FUNC_2(VAR_2);


 FUNC_0(VAR_3->regmap);

 FUNC_1(VAR_2, VAR_0);

 if (VAR_3->f_pllout)

  FUNC_3(VAR_2, VAR_1, 0x20, 0x20);

 return 0;
}
