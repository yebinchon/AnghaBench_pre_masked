
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_component {int dummy; } ;
struct ec_param_codec_i2s {int dummy; } ;
struct cros_ec_device {int dummy; } ;
struct cros_ec_command {int outsize; int data; scalar_t__ insize; int command; scalar_t__ version; } ;
struct cros_ec_codec_data {struct cros_ec_device* ec_device; } ;


 int VAR_0 ;
 int FUNC_0 (struct cros_ec_device*,struct cros_ec_command*) ;
 int FUNC_1 (int ,struct ec_param_codec_i2s*,int) ;
 struct cros_ec_codec_data* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_1,
         struct ec_param_codec_i2s *VAR_2)
{
 struct cros_ec_codec_data *VAR_3 =
  FUNC_2(VAR_1);
 struct cros_ec_device *VAR_4 = VAR_3->ec_device;
 u8 VAR_5[sizeof(struct cros_ec_command) +
    sizeof(struct ec_param_codec_i2s)];
 struct cros_ec_command *VAR_6 = (struct cros_ec_command *)&VAR_5;

 VAR_6->version = 0;
 VAR_6->command = VAR_0;
 VAR_6->outsize = sizeof(struct ec_param_codec_i2s);
 VAR_6->insize = 0;

 FUNC_1(VAR_6->data, VAR_2, VAR_6->outsize);

 return FUNC_0(VAR_4, VAR_6);
}
