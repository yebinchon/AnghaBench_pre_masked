
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8900_priv {int fll_out; int fll_in; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 struct wm8900_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_1)
{
 struct wm8900_priv *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = VAR_2->fll_out;
 int VAR_4 = VAR_2->fll_in;
 int VAR_5;


 VAR_5 = FUNC_3(VAR_1, 0, 0, 0);
 if (VAR_5 != 0) {
  FUNC_0(VAR_1->dev, "Failed to stop FLL\n");
  return VAR_5;
 }

 VAR_2->fll_out = VAR_3;
 VAR_2->fll_in = VAR_4;

 FUNC_1(VAR_1, VAR_0);

 return 0;
}
