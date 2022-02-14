
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3 {scalar_t__ hardware; int max_voices; scalar_t__ rhythm; int (* command ) (struct snd_opl3*,unsigned short,int) ;int fm_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned short VAR_4 ;
 unsigned char VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned short** VAR_12 ;
 int FUNC_0 (struct snd_opl3*,unsigned short,int) ;
 int FUNC_1 (struct snd_opl3*,unsigned short,int) ;
 int FUNC_2 (struct snd_opl3*,unsigned short,int) ;
 int FUNC_3 (struct snd_opl3*,unsigned short,int) ;
 int FUNC_4 (struct snd_opl3*,unsigned short,int) ;

void FUNC_5(struct snd_opl3 * VAR_13)
{
 unsigned short VAR_14;

 unsigned short VAR_15;
 unsigned char VAR_16;

 int VAR_17, VAR_18;

 VAR_17 = (VAR_13->hardware < VAR_3) ?
  VAR_0 : VAR_1;

 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {

  if (VAR_18 < VAR_0) {

   VAR_15 = VAR_4;
   VAR_16 = VAR_18;
  } else {

   VAR_15 = VAR_9;
   VAR_16 = VAR_18 - VAR_0;
  }
  VAR_14 = VAR_15 | (VAR_6 + VAR_12[VAR_16][0]);
  VAR_13->command(VAR_13, VAR_14, VAR_10);
  VAR_14 = VAR_15 | (VAR_6 + VAR_12[VAR_16][1]);
  VAR_13->command(VAR_13, VAR_14, VAR_10);

  VAR_14 = VAR_15 | (VAR_5 + VAR_16);
  VAR_13->command(VAR_13, VAR_14, 0x00);
 }

 VAR_13->max_voices = VAR_0;
 VAR_13->fm_mode = VAR_11;

 VAR_13->command(VAR_13, VAR_4 | VAR_8, VAR_2);
 VAR_13->command(VAR_13, VAR_4 | VAR_7, 0x00);
 VAR_13->rhythm = 0;
}
