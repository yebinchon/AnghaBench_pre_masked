
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c24xx_audio_simtec_pdata {scalar_t__* amp_gain; scalar_t__ amp_gpio; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__* amp_gain; scalar_t__ amp_gpio; } ;


 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1,
      struct s3c24xx_audio_simtec_pdata *VAR_2)
{
 int VAR_3;


 if (VAR_0->amp_gain[0] > 0) {
  VAR_3 = FUNC_3(VAR_2->amp_gain[0], "gpio-amp-gain0");
  if (VAR_3) {
   FUNC_0(VAR_1, "cannot get amp gpio gain0\n");
   return VAR_3;
  }

  VAR_3 = FUNC_3(VAR_2->amp_gain[1], "gpio-amp-gain1");
  if (VAR_3) {
   FUNC_0(VAR_1, "cannot get amp gpio gain1\n");
   FUNC_2(VAR_0->amp_gain[0]);
   return VAR_3;
  }

  FUNC_1(VAR_2->amp_gain[0], 0);
  FUNC_1(VAR_2->amp_gain[1], 0);
 }


 if (VAR_0->amp_gpio > 0) {
  VAR_3 = FUNC_3(VAR_2->amp_gpio, "gpio-amp");
  if (VAR_3) {
   FUNC_0(VAR_1, "cannot get amp gpio %d (%d)\n",
    VAR_2->amp_gpio, VAR_3);
   goto err_amp;
  }


  FUNC_4(0);
 }

 return 0;

err_amp:
 if (VAR_2->amp_gain[0] > 0) {
  FUNC_2(VAR_2->amp_gain[0]);
  FUNC_2(VAR_2->amp_gain[1]);
 }

 return VAR_3;
}
