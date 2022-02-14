
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct cs43130_private {TYPE_1__* dais; } ;
struct TYPE_2__ {unsigned int sclk; } ;


 int FUNC_0 (int ,char*,size_t,unsigned int) ;
 struct cs43130_private* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0,
      int VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_0->component;
 struct cs43130_private *VAR_5 = FUNC_1(VAR_4);

 VAR_5->dais[VAR_0->id].sclk = VAR_2;
 FUNC_0(VAR_4->dev, "dai_id = %d,  sclk = %u\n", VAR_0->id,
  VAR_5->dais[VAR_0->id].sclk);

 return 0;
}
