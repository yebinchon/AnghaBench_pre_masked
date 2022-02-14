
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;
struct ec_param_codec_i2s {int cmd; } ;
struct ec_codec_i2s_gain {int right; int left; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,struct ec_param_codec_i2s*,struct ec_codec_i2s_gain*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_1,
      u8 *VAR_2, u8 *VAR_3)
{
 struct ec_param_codec_i2s VAR_4;
 struct ec_codec_i2s_gain VAR_5;
 int VAR_6;

 VAR_4.cmd = VAR_0;

 VAR_6 = FUNC_0(VAR_1, &VAR_4, &VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_2 = VAR_5.left;
 *VAR_3 = VAR_5.right;

 return 0;
}
