
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_opl4 {int reg_lock; int on_voices; } ;
struct snd_midi_channel {int midi_program; scalar_t__ drum_channel; } ;
struct opl4_voice {int note; int velocity; int reg_f_number; int reg_misc; scalar_t__ number; struct opl4_sound const* sound; int reg_lfo_vibrato; int level_direct; struct snd_midi_channel* chan; int list; } ;
struct opl4_sound {int tone; int reg_lfo_vibrato; } ;
struct opl4_region_ptr {int count; TYPE_1__* regions; } ;
struct TYPE_2__ {int key_min; int key_max; struct opl4_sound sound; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int *) ;
 struct opl4_voice* FUNC_1 (struct snd_opl4*) ;
 int FUNC_2 (struct snd_opl4*,struct opl4_voice*) ;
 int FUNC_3 (struct snd_opl4*,struct opl4_voice*) ;
 int FUNC_4 (struct snd_opl4*,struct opl4_voice*) ;
 int FUNC_5 (struct snd_opl4*,struct opl4_voice*) ;
 int FUNC_6 (struct snd_opl4*,struct opl4_voice*) ;
 int FUNC_7 (struct snd_opl4*) ;
 int FUNC_8 (struct snd_opl4*,scalar_t__,int) ;
 struct opl4_region_ptr* VAR_7 ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

void FUNC_11(void *VAR_8, int VAR_9, int VAR_10, struct snd_midi_channel *VAR_11)
{
 struct snd_opl4 *VAR_12 = VAR_8;
 const struct opl4_region_ptr *VAR_13;
 struct opl4_voice *VAR_14[2];
 const struct opl4_sound *VAR_15[2];
 int VAR_16 = 0, VAR_17;
 unsigned long VAR_18;


 VAR_17 = VAR_11->drum_channel ? 0x80 : (VAR_11->midi_program & 0x7f);
 VAR_13 = &VAR_7[VAR_17];
 for (VAR_17 = 0; VAR_17 < VAR_13->count; VAR_17++) {
  if (VAR_9 >= VAR_13->regions[VAR_17].key_min &&
      VAR_9 <= VAR_13->regions[VAR_17].key_max) {
   VAR_15[VAR_16] = &VAR_13->regions[VAR_17].sound;
   if (++VAR_16 >= 2)
    break;
  }
 }


 FUNC_9(&VAR_12->reg_lock, VAR_18);
 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  VAR_14[VAR_17] = FUNC_1(VAR_12);
  FUNC_0(&VAR_14[VAR_17]->list, &VAR_12->on_voices);
  VAR_14[VAR_17]->chan = VAR_11;
  VAR_14[VAR_17]->note = VAR_9;
  VAR_14[VAR_17]->velocity = VAR_10 & 0x7f;
  VAR_14[VAR_17]->sound = VAR_15[VAR_17];
 }


 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  VAR_14[VAR_17]->reg_f_number =
   (VAR_15[VAR_17]->tone >> 8) & VAR_6;
  FUNC_8(VAR_12, VAR_3 + VAR_14[VAR_17]->number,
          VAR_14[VAR_17]->reg_f_number);
  FUNC_8(VAR_12, VAR_5 + VAR_14[VAR_17]->number,
          VAR_15[VAR_17]->tone & 0xff);
 }


 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  VAR_14[VAR_17]->reg_misc = VAR_2;
  FUNC_2(VAR_12, VAR_14[VAR_17]);
  FUNC_3(VAR_12, VAR_14[VAR_17]);
  VAR_14[VAR_17]->level_direct = VAR_1;
  FUNC_6(VAR_12, VAR_14[VAR_17]);
 }
 FUNC_10(&VAR_12->reg_lock, VAR_18);


 FUNC_7(VAR_12);


 FUNC_9(&VAR_12->reg_lock, VAR_18);
 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  FUNC_4(VAR_12, VAR_14[VAR_17]);
  VAR_14[VAR_17]->reg_lfo_vibrato = VAR_14[VAR_17]->sound->reg_lfo_vibrato;
  FUNC_5(VAR_12, VAR_14[VAR_17]);
 }


 for (VAR_17 = 0; VAR_17 < VAR_16; VAR_17++) {
  VAR_14[VAR_17]->reg_misc =
   (VAR_14[VAR_17]->reg_misc & 0x1f) | VAR_0;
  FUNC_8(VAR_12, VAR_4 + VAR_14[VAR_17]->number,
          VAR_14[VAR_17]->reg_misc);
 }
 FUNC_10(&VAR_12->reg_lock, VAR_18);
}
