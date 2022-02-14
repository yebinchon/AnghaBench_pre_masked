
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8962_priv {int regmap; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 struct wm8962_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_2)
{
 struct wm8962_priv *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_3->regmap,
        VAR_0, VAR_1);
}
