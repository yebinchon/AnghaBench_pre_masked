
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct cros_ec_codec_data {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_soc_component*,int *,int) ;
 struct cros_ec_codec_data* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_1)
{
 int VAR_2;

 struct cros_ec_codec_data *VAR_3 =
  FUNC_2(VAR_1);

 VAR_2 = FUNC_0(VAR_3->dev);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_1, &VAR_0, 1);
}
