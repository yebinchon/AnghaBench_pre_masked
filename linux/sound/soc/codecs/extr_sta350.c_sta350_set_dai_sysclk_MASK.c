
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta350_priv {unsigned int mclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 struct sta350_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0,
     int VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_0->component;
 struct sta350_priv *VAR_5 = FUNC_1(VAR_4);

 FUNC_0(VAR_4->dev, "mclk=%u\n", VAR_2);
 VAR_5->mclk = VAR_2;

 return 0;
}
