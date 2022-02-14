
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int (* setup_rate ) (struct snd_ice1712*,unsigned int) ;} ;
struct TYPE_9__ {TYPE_3__ ops; } ;
struct TYPE_6__ {int (* set_pro_rate ) (struct snd_ice1712*,unsigned int) ;} ;
struct snd_ice1712 {unsigned int cur_rate; unsigned int akm_codecs; TYPE_4__ spdif; TYPE_5__* akm; TYPE_1__ gpio; int reg_lock; } ;
struct TYPE_7__ {int (* set_rate_val ) (TYPE_5__*,unsigned int) ;} ;
struct TYPE_10__ {TYPE_2__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (unsigned char,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct snd_ice1712*,unsigned int) ;
 int FUNC_8 (TYPE_5__*,unsigned int) ;
 int FUNC_9 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static void FUNC_10(struct snd_ice1712 *VAR_5, unsigned int VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 unsigned char VAR_9, VAR_10;
 unsigned int VAR_11;

 switch (VAR_6) {
 case 8000: VAR_9 = 6; break;
 case 9600: VAR_9 = 3; break;
 case 11025: VAR_9 = 10; break;
 case 12000: VAR_9 = 2; break;
 case 16000: VAR_9 = 5; break;
 case 22050: VAR_9 = 9; break;
 case 24000: VAR_9 = 1; break;
 case 32000: VAR_9 = 4; break;
 case 44100: VAR_9 = 8; break;
 case 48000: VAR_9 = 0; break;
 case 64000: VAR_9 = 15; break;
 case 88200: VAR_9 = 11; break;
 case 96000: VAR_9 = 7; break;
 default:
  FUNC_4();
  VAR_9 = 0;
  VAR_6 = 48000;
  break;
 }

 FUNC_5(&VAR_5->reg_lock, VAR_8);
 if (FUNC_1(FUNC_0(VAR_5, VAR_3)) & (VAR_0|
       VAR_1|
       VAR_2)) {
__out:
  FUNC_6(&VAR_5->reg_lock, VAR_8);
  return;
 }
 if (!VAR_7 && FUNC_2(VAR_5))
  goto __out;

 VAR_10 = FUNC_1(FUNC_0(VAR_5, VAR_4));
 if (!VAR_7 && VAR_10 == VAR_9)
  goto __out;

 VAR_5->cur_rate = VAR_6;
 FUNC_3(VAR_9, FUNC_0(VAR_5, VAR_4));
 FUNC_6(&VAR_5->reg_lock, VAR_8);

 if (VAR_5->gpio.set_pro_rate)
  VAR_5->gpio.set_pro_rate(VAR_5, VAR_6);
 for (VAR_11 = 0; VAR_11 < VAR_5->akm_codecs; VAR_11++) {
  if (VAR_5->akm[VAR_11].ops.set_rate_val)
   VAR_5->akm[VAR_11].ops.set_rate_val(&VAR_5->akm[VAR_11], VAR_6);
 }
 if (VAR_5->spdif.ops.setup_rate)
  VAR_5->spdif.ops.setup_rate(VAR_5, VAR_6);
}
