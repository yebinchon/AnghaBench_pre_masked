
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {unsigned int dac_mclks; unsigned int adc_mclks; } ;
struct oxygen {TYPE_1__ model; } ;


 int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static u16 FUNC_2(struct oxygen *VAR_1, unsigned int VAR_2,
      struct snd_pcm_hw_params *VAR_3)
{
 unsigned int VAR_4, VAR_5;

 if (VAR_2 == VAR_0)
  VAR_4 = VAR_1->model.dac_mclks;
 else
  VAR_4 = VAR_1->model.adc_mclks;

 if (FUNC_1(VAR_3) <= 48000)
  VAR_5 = 0;
 else if (FUNC_1(VAR_3) <= 96000)
  VAR_5 = 2;
 else
  VAR_5 = 4;

 return FUNC_0(VAR_4 >> VAR_5);
}
