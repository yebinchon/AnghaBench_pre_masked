
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_midi_channel {scalar_t__* control; } ;
struct TYPE_5__ {unsigned int moddelay; unsigned int modatkhld; unsigned int moddcysus; unsigned int voldelay; unsigned int volatkhld; unsigned int pefe; unsigned int lfo1delay; unsigned int lfo2delay; unsigned int tremfrq; unsigned int reverb; unsigned int chorus; unsigned int filterQ; } ;
struct TYPE_6__ {unsigned int start; unsigned int end; unsigned int loopstart; unsigned int loopend; int sample_mode; TYPE_2__ parm; } ;
struct snd_emux_voice {int ch; unsigned int apitch; unsigned int ftarget; scalar_t__ vtarget; TYPE_3__ reg; struct snd_midi_channel* chan; scalar_t__ avol; scalar_t__ acutoff; scalar_t__ block; struct snd_emu10k1* hw; } ;
struct snd_emu10k1_memblk {int map_locked; } ;
struct TYPE_4__ {unsigned int addr; } ;
struct snd_emu10k1 {unsigned int address_mode; TYPE_1__ silent_page; scalar_t__ audigy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (unsigned int,int) ;
 int VAR_27 ;
 int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 unsigned int VAR_41 ;
 int FUNC_1 (struct snd_emu10k1*,struct snd_emux_voice*) ;
 int FUNC_2 (struct snd_emu10k1*,struct snd_emux_voice*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct snd_emu10k1*,struct snd_emu10k1_memblk*) ;
 int FUNC_5 (struct snd_emu10k1_memblk*) ;
 int FUNC_6 (struct snd_emu10k1*,int ,int,unsigned int) ;

__attribute__((used)) static int
FUNC_7(struct snd_emux_voice *VAR_42)
{
 unsigned int VAR_43;
 int VAR_44;
 unsigned int VAR_45, VAR_46;
 struct snd_midi_channel *VAR_47;
 struct snd_emu10k1 *VAR_48;
 struct snd_emu10k1_memblk *VAR_49;

 VAR_48 = VAR_42->hw;
 VAR_44 = VAR_42->ch;
 if (FUNC_3(VAR_44 < 0))
  return -VAR_14;
 VAR_47 = VAR_42->chan;

 VAR_49 = (struct snd_emu10k1_memblk *)VAR_42->block;
 if (VAR_49 == ((void*)0))
  return -VAR_14;
 VAR_49->map_locked++;
 if (FUNC_4(VAR_48, VAR_49) < 0) {

  return -VAR_15;
 }
 VAR_46 = FUNC_5(VAR_49) >> 1;
 VAR_42->reg.start += VAR_46;
 VAR_42->reg.end += VAR_46;
 VAR_42->reg.loopstart += VAR_46;
 VAR_42->reg.loopend += VAR_46;



 if (VAR_48->audigy) {
  VAR_43 = VAR_19 | (VAR_21 << 8) |
   (VAR_20 << 16) | (VAR_18 << 24);
  FUNC_6(VAR_48, VAR_2, VAR_44, VAR_43);
 } else {
  VAR_43 = (VAR_19 << 16) | (VAR_21 << 20) |
   (VAR_20 << 24) | (VAR_18 << 28);
  FUNC_6(VAR_48, VAR_22, VAR_44, VAR_43);
 }


 FUNC_6(VAR_48, VAR_12, VAR_44, 0x0000);
 FUNC_6(VAR_48, VAR_38, VAR_44, 0x0000FFFF);
 FUNC_6(VAR_48, VAR_10, VAR_44, 0x0000FFFF);
 FUNC_6(VAR_48, VAR_35, VAR_44, 0);
 FUNC_6(VAR_48, VAR_9, VAR_44, 0);


 FUNC_6(VAR_48, VAR_24, VAR_42->ch, VAR_42->apitch);


 FUNC_6(VAR_48, VAR_16, VAR_44, VAR_42->reg.parm.moddelay);
 FUNC_6(VAR_48, VAR_0, VAR_44, VAR_42->reg.parm.modatkhld);
 FUNC_6(VAR_48, VAR_11, VAR_44, VAR_42->reg.parm.moddcysus);
 FUNC_6(VAR_48, VAR_17, VAR_44, VAR_42->reg.parm.voldelay);
 FUNC_6(VAR_48, VAR_1, VAR_44, VAR_42->reg.parm.volatkhld);




 VAR_43 = (unsigned int)VAR_42->acutoff << 8 | (unsigned char)VAR_42->avol;
 FUNC_6(VAR_48, VAR_23, VAR_42->ch, VAR_43);


 FUNC_6(VAR_48, VAR_33, VAR_44, VAR_42->reg.parm.pefe);


 FUNC_6(VAR_48, VAR_25, VAR_44, VAR_42->reg.parm.lfo1delay);
 FUNC_6(VAR_48, VAR_26, VAR_44, VAR_42->reg.parm.lfo2delay);


 FUNC_2(VAR_48, VAR_42);

 FUNC_6(VAR_48, VAR_37, VAR_42->ch, VAR_42->reg.parm.tremfrq);

 FUNC_1(VAR_48, VAR_42);


 VAR_43 = VAR_42->reg.parm.reverb;
 VAR_43 += (int)VAR_42->chan->control[VAR_31] * 9 / 10;
 FUNC_0(VAR_43, 255);
 VAR_45 = VAR_42->reg.loopstart;
 FUNC_6(VAR_48, VAR_34, VAR_42->ch, (VAR_43 << 24) | VAR_45);


 VAR_45 = VAR_42->reg.loopend;
 VAR_43 = VAR_42->reg.parm.chorus;
 VAR_43 += (int)VAR_47->control[VAR_32] * 9 / 10;
 FUNC_0(VAR_43, 255);
 VAR_43 = (VAR_43 <<24) | VAR_45;
 FUNC_6(VAR_48, VAR_13, VAR_44, VAR_43);


 FUNC_6(VAR_48, VAR_39, VAR_44, 0);
 FUNC_6(VAR_48, VAR_40, VAR_44, 0);


 VAR_43 = (VAR_48->silent_page.addr << VAR_48->address_mode) | (VAR_48->address_mode ? VAR_30 : VAR_29);
 FUNC_6(VAR_48, VAR_27, VAR_44, VAR_43);
 FUNC_6(VAR_48, VAR_28, VAR_44, VAR_43);
 VAR_45 = VAR_42->reg.start;
 VAR_43 = VAR_42->reg.parm.filterQ;
 VAR_43 = (VAR_43<<28) | VAR_45;
 if (VAR_42->apitch < 0xe400)
  VAR_43 |= VAR_5;
 else {
  unsigned int VAR_50 = (VAR_42->apitch - 0xe000) >> 10;
  VAR_43 |= VAR_50 << 25;
 }
 if (VAR_42->reg.sample_mode & VAR_36)
  VAR_43 |= VAR_4;
 FUNC_6(VAR_48, VAR_3, VAR_44, VAR_43);


 VAR_43 = (unsigned int)VAR_42->vtarget << 16;
 FUNC_6(VAR_48, VAR_38, VAR_44, VAR_43 | VAR_42->ftarget);
 FUNC_6(VAR_48, VAR_10, VAR_44, VAR_43 | 0xff00);
 return 0;
}
