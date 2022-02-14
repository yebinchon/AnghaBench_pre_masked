
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {int flags; int ext_id; TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ no_vra; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned short FUNC_0 (struct snd_ac97*,int) ;
 scalar_t__ FUNC_1 (struct snd_ac97*,int,int,int) ;
 int FUNC_2 (struct snd_ac97*,int ,int ,int ) ;
 int FUNC_3 (struct snd_ac97*,int,unsigned short) ;

__attribute__((used)) static void FUNC_4(struct snd_ac97 *VAR_16, int VAR_17, int VAR_18, unsigned int *VAR_19)
{
 unsigned int VAR_20 = 0;
 unsigned short VAR_21;

 if (VAR_16->bus->no_vra) {
  *VAR_19 = VAR_10;
  if ((VAR_16->flags & VAR_0) &&
      VAR_17 == VAR_4)
   *VAR_19 |= VAR_14;
  return;
 }

 VAR_21 = FUNC_0(VAR_16, VAR_17);
 if ((VAR_16->ext_id & VAR_2) && VAR_17 == VAR_4)
  FUNC_2(VAR_16, VAR_3,
         VAR_1, 0);

 if (FUNC_1(VAR_16, VAR_17, VAR_18, 11000))
  VAR_20 |= VAR_15;

 if (FUNC_1(VAR_16, VAR_17, VAR_18, 8000))
  VAR_20 |= VAR_12;
 if (FUNC_1(VAR_16, VAR_17, VAR_18, 11025))
  VAR_20 |= VAR_5;
 if (FUNC_1(VAR_16, VAR_17, VAR_18, 16000))
  VAR_20 |= VAR_6;
 if (FUNC_1(VAR_16, VAR_17, VAR_18, 22050))
  VAR_20 |= VAR_7;
 if (FUNC_1(VAR_16, VAR_17, VAR_18, 32000))
  VAR_20 |= VAR_8;
 if (FUNC_1(VAR_16, VAR_17, VAR_18, 44100))
  VAR_20 |= VAR_9;
 if (FUNC_1(VAR_16, VAR_17, VAR_18, 48000))
  VAR_20 |= VAR_10;
 if ((VAR_16->flags & VAR_0) &&
     VAR_17 == VAR_4) {

  FUNC_2(VAR_16, VAR_3,
         VAR_1, VAR_1);
  if (FUNC_1(VAR_16, VAR_17, VAR_18, 64000 / 2))
   VAR_20 |= VAR_11;
  if (FUNC_1(VAR_16, VAR_17, VAR_18, 88200 / 2))
   VAR_20 |= VAR_13;
  if (FUNC_1(VAR_16, VAR_17, VAR_18, 96000 / 2))
   VAR_20 |= VAR_14;

  if (!FUNC_1(VAR_16, VAR_17, VAR_18, 76100 / 2))
   VAR_20 &= ~VAR_15;
  FUNC_2(VAR_16, VAR_3,
         VAR_1, 0);
 }

 FUNC_3(VAR_16, VAR_17, VAR_21);
 if (VAR_18)
  FUNC_3(VAR_16, VAR_18, VAR_21);
 *VAR_19 = VAR_20;
}
