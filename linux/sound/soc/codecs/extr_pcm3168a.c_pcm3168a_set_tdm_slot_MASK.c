
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct pcm3168a_priv {struct pcm3168a_io_params* io_params; } ;
struct pcm3168a_io_params {int tdm_slots; int slot_width; unsigned int tdm_mask; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 struct pcm3168a_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, unsigned int VAR_3,
     unsigned int VAR_4, int VAR_5,
     int VAR_6)
{
 struct snd_soc_component *VAR_7 = VAR_2->component;
 struct pcm3168a_priv *VAR_8 = FUNC_1(VAR_7);
 struct pcm3168a_io_params *VAR_9 = &VAR_8->io_params[VAR_2->id];

 if (VAR_3 >= (1<<VAR_5) || VAR_4 >= (1<<VAR_5)) {
  FUNC_0(VAR_7->dev,
   "Bad tdm mask tx: 0x%08x rx: 0x%08x slots %d\n",
   VAR_3, VAR_4, VAR_5);
  return -VAR_0;
 }

 if (VAR_6 &&
     (VAR_6 != 16 && VAR_6 != 24 && VAR_6 != 32 )) {
  FUNC_0(VAR_7->dev, "Unsupported slot_width %d\n",
   VAR_6);
  return -VAR_0;
 }

 VAR_9->tdm_slots = VAR_5;
 VAR_9->slot_width = VAR_6;

 if (VAR_2->id == VAR_1)
  VAR_9->tdm_mask = VAR_3;
 else
  VAR_9->tdm_mask = VAR_4;

 return 0;
}
