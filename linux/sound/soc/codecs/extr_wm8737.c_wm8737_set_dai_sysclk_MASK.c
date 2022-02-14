
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wm8737_priv {unsigned int mclk; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_3__ {unsigned int mclk; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ,char*,unsigned int) ;
 struct wm8737_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2,
     int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_2->component;
 struct wm8737_priv *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
  if (VAR_4 == VAR_1[VAR_8].mclk ||
      VAR_4 == VAR_1[VAR_8].mclk * 2) {
   VAR_7->mclk = VAR_4;
   return 0;
  }
 }

 FUNC_1(VAR_6->dev, "MCLK rate %dHz not supported\n", VAR_4);

 return -VAR_0;
}
