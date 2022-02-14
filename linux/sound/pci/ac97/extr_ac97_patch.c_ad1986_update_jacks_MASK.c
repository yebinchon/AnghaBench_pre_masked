
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ swap_mic_linein; } ;
struct TYPE_3__ {TYPE_2__ ad18xx; } ;
struct snd_ac97 {TYPE_1__ spec; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct snd_ac97*) ;
 scalar_t__ FUNC_1 (struct snd_ac97*) ;
 scalar_t__ FUNC_2 (struct snd_ac97*) ;
 int FUNC_3 (struct snd_ac97*) ;
 int FUNC_4 (struct snd_ac97*,int ,unsigned short,unsigned short) ;

__attribute__((used)) static void FUNC_5(struct snd_ac97 *VAR_11)
{
 unsigned short VAR_12 = 0;
 unsigned short VAR_13;


 if (!FUNC_3(VAR_11))
  VAR_12 |= VAR_8;
 if (!FUNC_0(VAR_11))
  VAR_12 |= VAR_0;


 if (FUNC_1(VAR_11))
  VAR_12 |= VAR_3;
 else if (VAR_11->spec.ad18xx.swap_mic_linein != 0)
  VAR_12 |= VAR_2;
 FUNC_4(VAR_11, VAR_9,
        VAR_8 | VAR_0 |
        VAR_1,
        VAR_12);


 if (FUNC_2(VAR_11))
  VAR_13 = VAR_4;
 else if (VAR_11->spec.ad18xx.swap_mic_linein != 0)
  VAR_13 = VAR_5;
 else
  VAR_13 = VAR_6;
 FUNC_4(VAR_11, VAR_10,
        VAR_7,
        VAR_13);
}
