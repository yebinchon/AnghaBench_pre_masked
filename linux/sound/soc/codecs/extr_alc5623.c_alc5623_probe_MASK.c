
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct alc5623_priv {int id; scalar_t__ jack_det_ctrl; scalar_t__ add_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct snd_soc_component*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct snd_soc_component*,int ,int ) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct alc5623_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,scalar_t__) ;
 int FUNC_6 (struct snd_soc_dapm_context*,int ,int ) ;
 int FUNC_7 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_component *VAR_12)
{
 struct alc5623_priv *VAR_13 = FUNC_4(VAR_12);
 struct snd_soc_dapm_context *VAR_14 = FUNC_3(VAR_12);

 FUNC_1(VAR_12);

 if (VAR_13->add_ctrl) {
  FUNC_5(VAR_12, VAR_0,
    VAR_13->add_ctrl);
 }

 if (VAR_13->jack_det_ctrl) {
  FUNC_5(VAR_12, VAR_1,
    VAR_13->jack_det_ctrl);
 }

 switch (VAR_13->id) {
 case 0x21:
  FUNC_2(VAR_12, VAR_3,
   FUNC_0(VAR_3));
  break;
 case 0x22:
  FUNC_2(VAR_12, VAR_4,
   FUNC_0(VAR_4));
  break;
 case 0x23:
  FUNC_2(VAR_12, VAR_8,
   FUNC_0(VAR_8));
  break;
 default:
  return -VAR_2;
 }

 FUNC_2(VAR_12, VAR_7,
   FUNC_0(VAR_7));

 FUNC_7(VAR_14, VAR_6,
     FUNC_0(VAR_6));


 FUNC_6(VAR_14, VAR_9, FUNC_0(VAR_9));

 switch (VAR_13->id) {
 case 0x21:
 case 0x22:
  FUNC_7(VAR_14, VAR_5,
     FUNC_0(VAR_5));
  FUNC_6(VAR_14, VAR_10,
     FUNC_0(VAR_10));
  break;
 case 0x23:
  FUNC_6(VAR_14, VAR_11,
     FUNC_0(VAR_11));
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
