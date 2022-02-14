
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int runtime; } ;
struct pcm3168a_priv {TYPE_1__* io_params; } ;
struct TYPE_2__ {int fmt; int tdm_slots; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,unsigned int) ;
 struct pcm3168a_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
       struct snd_soc_dai *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3->component;
 struct pcm3168a_priv *VAR_5 = FUNC_1(VAR_4);
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8[] = {
  8,
  6
 };
 switch (VAR_5->io_params[VAR_3->id].fmt) {
 case 128:
  VAR_6 = 16;
  VAR_7 = 2;
  break;
 case 129:
 case 130:
 case 132:
 case 131:
  VAR_6 = 24;
  VAR_7 = VAR_8[VAR_3->id];
  break;
 default:
  VAR_6 = 24;
  VAR_7 = 2;
 }

 FUNC_0(VAR_2->runtime,
         VAR_1,
         VAR_6, 32);


 if (VAR_5->io_params[VAR_3->id].tdm_slots == 2)
  VAR_7 = VAR_8[VAR_3->id];

 FUNC_0(VAR_2->runtime,
         VAR_0,
         2, VAR_7);

 return 0;
}
