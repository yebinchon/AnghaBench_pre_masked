
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct soc_bytes_ext {int max; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int* data; } ;
struct TYPE_4__ {TYPE_1__ bytes; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct da7218_priv {int regmap; int stbiq_3stage_coeff; int biq_5stage_coeff; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int ,int,int*,int) ;
 struct da7218_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_5 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_8,
       struct snd_ctl_elem_value *VAR_9)
{
 struct snd_soc_component *VAR_10 = FUNC_5(VAR_8);
 struct da7218_priv *VAR_11 = FUNC_2(VAR_10);
 struct soc_bytes_ext *VAR_12 =
  (struct soc_bytes_ext *) VAR_8->private_value;
 u8 VAR_13, VAR_14;
 u8 VAR_15[VAR_2];
 int VAR_16;





 switch (VAR_12->max) {
 case 129:
  VAR_13 = VAR_5;
  FUNC_0(VAR_11->biq_5stage_coeff, VAR_9->value.bytes.data,
         VAR_12->max);
  break;
 case 128:
  VAR_13 = VAR_6;
  FUNC_0(VAR_11->stbiq_3stage_coeff, VAR_9->value.bytes.data,
         VAR_12->max);
  break;
 default:
  return -VAR_7;
 }


 VAR_14 = FUNC_3(VAR_10, VAR_3);
 FUNC_4(VAR_10, VAR_3,
        VAR_14 | VAR_4);

 for (VAR_16 = 0; VAR_16 < VAR_12->max; ++VAR_16) {
  VAR_15[VAR_1] = VAR_9->value.bytes.data[VAR_16];
  VAR_15[VAR_0] = VAR_16;
  FUNC_1(VAR_11->regmap, VAR_13, VAR_15, VAR_2);
 }


 FUNC_4(VAR_10, VAR_3, VAR_14);

 return 0;
}
