
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int addr_width; } ;
struct sun4i_codec {TYPE_1__ capture_dma_data; int reg_adc_fifoc; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_4__ {int min; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct sun4i_codec *VAR_7,
      struct snd_pcm_hw_params *VAR_8,
      unsigned int VAR_9)
{

 FUNC_3(VAR_7->reg_adc_fifoc,
     7 << VAR_3,
     VAR_9 << VAR_3);


 if (FUNC_2(VAR_8) == 1)
  FUNC_3(VAR_7->reg_adc_fifoc,
      FUNC_0(VAR_4),
      FUNC_0(VAR_4));
 else
  FUNC_3(VAR_7->reg_adc_fifoc,
      FUNC_0(VAR_4),
      0);


 if (FUNC_1(VAR_8, VAR_2)->min == 32) {
  FUNC_3(VAR_7->reg_adc_fifoc,
       FUNC_0(VAR_6),
       FUNC_0(VAR_6));

  FUNC_3(VAR_7->reg_adc_fifoc,
       FUNC_0(VAR_5),
       0);

  VAR_7->capture_dma_data.addr_width = VAR_1;
 } else {
  FUNC_3(VAR_7->reg_adc_fifoc,
       FUNC_0(VAR_6),
       0);


  FUNC_3(VAR_7->reg_adc_fifoc,
       FUNC_0(VAR_5),
       FUNC_0(VAR_5));

  VAR_7->capture_dma_data.addr_width = VAR_0;
 }

 return 0;
}
