
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_mixer_control {int platform_max; int max; } ;
struct device {int dummy; } ;
struct cros_ec_codec_data {int max_dmic_gain; } ;
struct TYPE_2__ {scalar_t__ private_value; } ;


 struct cros_ec_codec_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1)
{
 struct soc_mixer_control *VAR_2;
 struct cros_ec_codec_data *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, "max-dmic-gain",
          &VAR_3->max_dmic_gain);
 if (VAR_4)
  return VAR_4;

 VAR_2 = (struct soc_mixer_control *)
    VAR_0.private_value;
 VAR_2->max = VAR_3->max_dmic_gain;
 VAR_2->platform_max = VAR_3->max_dmic_gain;

 return 0;
}
