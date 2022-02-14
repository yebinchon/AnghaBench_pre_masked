
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dev; } ;
typedef enum da7218_hpldet_jack_thr { ____Placeholder_da7218_hpldet_jack_thr } da7218_hpldet_jack_thr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static enum da7218_hpldet_jack_thr
 FUNC_1(struct snd_soc_component *VAR_4, u32 VAR_5)
{
 switch (VAR_5) {
 case 84:
  return VAR_0;
 case 88:
  return VAR_1;
 case 92:
  return VAR_2;
 case 96:
  return VAR_3;
 default:
  FUNC_0(VAR_4->dev, "Invalid jack threshold level");
  return VAR_0;
 }
}
