
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct atmel_ac97c {int opened; scalar_t__ regs; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 unsigned long FUNC_0 (struct atmel_ac97c*,int ) ;
 int FUNC_1 (struct atmel_ac97c*,int ,unsigned long) ;
 unsigned long FUNC_2 (scalar_t__) ;
 struct atmel_ac97c* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct snd_pcm_substream *VAR_8, int VAR_9)
{
 struct atmel_ac97c *VAR_10 = FUNC_3(VAR_8);
 unsigned long VAR_11, VAR_12 = 0;

 VAR_11 = FUNC_0(VAR_10, VAR_6);
 VAR_12 = FUNC_2(VAR_10->regs + VAR_3);

 switch (VAR_9) {
 case 132:
 case 131:
 case 130:
  VAR_12 = VAR_5;
  VAR_11 |= VAR_0 | VAR_1;
  break;
 case 133:
 case 128:
 case 129:
  VAR_12 |= VAR_4;
  if (VAR_10->opened <= 1)
   VAR_11 &= ~VAR_0;
  break;
 default:
  return -VAR_7;
 }

 FUNC_1(VAR_10, VAR_6, VAR_11);
 FUNC_4(VAR_12, VAR_10->regs + VAR_2);
 return 0;
}
