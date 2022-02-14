
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8962_priv {int dsp2_ena; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wm8962_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_2)
{
 struct wm8962_priv *VAR_3 = FUNC_0(VAR_2);

 FUNC_3(VAR_2);

 FUNC_1(VAR_2, VAR_0, VAR_1);

 FUNC_2(VAR_2, VAR_3->dsp2_ena);

 return 0;
}
