
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_audio_simtec_pdata {scalar_t__* amp_gain; scalar_t__ amp_gpio; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct s3c24xx_audio_simtec_pdata *VAR_0)
{
 if (VAR_0->amp_gain[0] > 0) {
  FUNC_0(VAR_0->amp_gain[0]);
  FUNC_0(VAR_0->amp_gain[1]);
 }

 if (VAR_0->amp_gpio > 0)
  FUNC_0(VAR_0->amp_gpio);
}
