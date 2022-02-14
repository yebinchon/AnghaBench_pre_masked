
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3 {scalar_t__ fm_mode; int (* command ) (struct snd_opl3*,unsigned short,unsigned char) ;} ;
struct snd_dm_fm_voice {int op; int voice; unsigned char harmonic; int scale_level; unsigned char volume; int attack; unsigned char decay; int sustain; unsigned char release; int feedback; unsigned char waveform; scalar_t__ right; scalar_t__ left; scalar_t__ connection; scalar_t__ kbd_scale; scalar_t__ do_sustain; scalar_t__ vibrato; scalar_t__ am; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned char VAR_8 ;
 unsigned short VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;
 unsigned char VAR_14 ;
 unsigned char VAR_15 ;
 unsigned char VAR_16 ;
 unsigned char VAR_17 ;
 unsigned short VAR_18 ;
 int VAR_19 ;
 unsigned char VAR_20 ;
 unsigned char VAR_21 ;
 unsigned char VAR_22 ;
 unsigned char VAR_23 ;
 unsigned char VAR_24 ;
 unsigned char VAR_25 ;
 unsigned char VAR_26 ;
 scalar_t__ VAR_27 ;
 unsigned char FUNC_0 (unsigned char,int) ;
 unsigned char** VAR_28 ;
 int FUNC_1 (struct snd_opl3*,unsigned short,unsigned char) ;
 int FUNC_2 (struct snd_opl3*,unsigned short,unsigned char) ;
 int FUNC_3 (struct snd_opl3*,unsigned short,unsigned char) ;
 int FUNC_4 (struct snd_opl3*,unsigned short,unsigned char) ;
 int FUNC_5 (struct snd_opl3*,unsigned short,unsigned char) ;
 int FUNC_6 (struct snd_opl3*,unsigned short,unsigned char) ;

__attribute__((used)) static int FUNC_7(struct snd_opl3 * VAR_29, struct snd_dm_fm_voice * VAR_30)
{
 unsigned short VAR_31;
 unsigned char VAR_32;
 unsigned char VAR_33, VAR_34;

 unsigned short VAR_35;
 unsigned char VAR_36;


 if (VAR_30->op > 1)
  return -VAR_0;


 if (VAR_30->voice >= ((VAR_29->fm_mode == VAR_27) ?
        VAR_2 : VAR_1))
  return -VAR_0;


 if (VAR_30->voice < VAR_1) {

  VAR_31 = VAR_9;
  VAR_33 = VAR_30->voice;
 } else {

  VAR_31 = VAR_18;
  VAR_33 = VAR_30->voice - VAR_1;
 }

 VAR_33 = FUNC_0(VAR_33, VAR_1);
 VAR_34 = FUNC_0(VAR_30->op, 4);
 VAR_32 = VAR_28[VAR_33][VAR_34];

 VAR_36 = 0x00;

 if (VAR_30->am)
  VAR_36 |= VAR_22;

 if (VAR_30->vibrato)
  VAR_36 |= VAR_23;

 if (VAR_30->do_sustain)
  VAR_36 |= VAR_20;

 if (VAR_30->kbd_scale)
  VAR_36 |= VAR_8;

 VAR_36 |= VAR_30->harmonic & VAR_10;


 VAR_35 = VAR_31 | (VAR_11 + VAR_32);
 VAR_29->command(VAR_29, VAR_35, VAR_36);


 VAR_36 = (VAR_30->scale_level << 6) & VAR_7;

 VAR_36 |= ~VAR_30->volume & VAR_21;


 VAR_35 = VAR_31 | (VAR_14 + VAR_32);
 VAR_29->command(VAR_29, VAR_35, VAR_36);


 VAR_36 = (VAR_30->attack << 4) & VAR_3;

 VAR_36 |= VAR_30->decay & VAR_5;


 VAR_35 = VAR_31 | (VAR_12 + VAR_32);
 VAR_29->command(VAR_29, VAR_35, VAR_36);


 VAR_36 = (VAR_30->sustain << 4) & VAR_19;

 VAR_36 |= VAR_30->release & VAR_17;


 VAR_35 = VAR_31 | (VAR_15 + VAR_32);
 VAR_29->command(VAR_29, VAR_35, VAR_36);


 VAR_36 = (VAR_30->feedback << 1) & VAR_6;

 if (VAR_30->connection)
  VAR_36 |= VAR_4;

 if (VAR_29->fm_mode == VAR_27) {
  if (VAR_30->left)
   VAR_36 |= VAR_24;
  if (VAR_30->right)
   VAR_36 |= VAR_25;
 }

 VAR_35 = VAR_31 | (VAR_13 + VAR_33);
 VAR_29->command(VAR_29, VAR_35, VAR_36);


 VAR_36 = VAR_30->waveform & VAR_26;
 VAR_35 = VAR_31 | (VAR_16 + VAR_32);
 VAR_29->command(VAR_29, VAR_35, VAR_36);

 return 0;
}
