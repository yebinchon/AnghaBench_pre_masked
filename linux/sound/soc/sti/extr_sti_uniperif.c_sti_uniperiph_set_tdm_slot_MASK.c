
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int slots; int slot_width; unsigned int mask; int avail_slots; } ;
struct uniperif {int dev; TYPE_2__ tdm_slot; } ;
struct TYPE_3__ {struct uniperif* uni; } ;
struct sti_uniperiph_data {TYPE_1__ dai_data; } ;
struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uniperif*) ;
 int FUNC_1 (int ,char*,...) ;
 struct sti_uniperiph_data* FUNC_2 (struct snd_soc_dai*) ;

int FUNC_3(struct snd_soc_dai *VAR_3, unsigned int VAR_4,
          unsigned int VAR_5, int VAR_6,
          int VAR_7)
{
 struct sti_uniperiph_data *VAR_8 = FUNC_2(VAR_3);
 struct uniperif *VAR_9 = VAR_8->dai_data.uni;
 int VAR_10, VAR_11, VAR_12;

 if (!FUNC_0(VAR_9)) {
  FUNC_1(VAR_9->dev, "cpu dai not in tdm mode\n");
  return -VAR_0;
 }


 VAR_9->tdm_slot.slots = VAR_6;
 VAR_9->tdm_slot.slot_width = VAR_7;

 VAR_9->tdm_slot.mask = (VAR_4 != 0) ? VAR_4 : VAR_5;


 for (VAR_10 = 0, VAR_12 = 0; VAR_10 < VAR_9->tdm_slot.slots; VAR_10++) {
  if ((VAR_9->tdm_slot.mask >> VAR_10) & 0x01)
   VAR_12++;
 }
 VAR_9->tdm_slot.avail_slots = VAR_12;


 VAR_11 = VAR_9->tdm_slot.avail_slots * VAR_9->tdm_slot.slot_width / 8;


 if ((VAR_11 > VAR_2) ||
     (VAR_11 & ~(int)VAR_1)) {
  FUNC_1(VAR_9->dev, "frame size not allowed: %d bytes\n",
   VAR_11);
  return -VAR_0;
 }

 return 0;
}
