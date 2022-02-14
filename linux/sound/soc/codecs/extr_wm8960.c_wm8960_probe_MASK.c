
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8960_data {scalar_t__ capless; } ;
struct wm8960_priv {int set_bias_level; struct wm8960_data pdata; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 struct wm8960_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_3)
{
 struct wm8960_priv *VAR_4 = FUNC_2(VAR_3);
 struct wm8960_data *VAR_5 = &VAR_4->pdata;

 if (VAR_5->capless)
  VAR_4->set_bias_level = VAR_0;
 else
  VAR_4->set_bias_level = VAR_1;

 FUNC_1(VAR_3, VAR_2,
         FUNC_0(VAR_2));
 FUNC_3(VAR_3);

 return 0;
}
