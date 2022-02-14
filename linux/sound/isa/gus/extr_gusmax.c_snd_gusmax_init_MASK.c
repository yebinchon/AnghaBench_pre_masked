
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; int dma1; int dma2; } ;
struct snd_gus_card {int equal_irq; int codec_flag; int max_cntrl_val; TYPE_1__ gf1; int joystick_dac; } ;
struct snd_card {int dummy; } ;


 int FUNC_0 (struct snd_gus_card*,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_2, struct snd_card *VAR_3,
       struct snd_gus_card *VAR_4)
{
 VAR_4->equal_irq = 1;
 VAR_4->codec_flag = 1;
 VAR_4->joystick_dac = VAR_1[VAR_2];

 VAR_4->max_cntrl_val = (VAR_4->gf1.port >> 4) & 0x0f;
 if (VAR_4->gf1.dma1 > 3)
  VAR_4->max_cntrl_val |= 0x10;
 if (VAR_4->gf1.dma2 > 3)
  VAR_4->max_cntrl_val |= 0x20;
 VAR_4->max_cntrl_val |= 0x40;
 FUNC_1(VAR_4->max_cntrl_val, FUNC_0(VAR_4, VAR_0));
}
