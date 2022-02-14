
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dev; } ;
typedef enum da7218_hpldet_jack_debounce { ____Placeholder_da7218_hpldet_jack_debounce } da7218_hpldet_jack_debounce ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static enum da7218_hpldet_jack_debounce
 FUNC_1(struct snd_soc_component *VAR_4, u32 VAR_5)
{
 switch (VAR_5) {
 case 0:
  return VAR_3;
 case 2:
  return VAR_0;
 case 3:
  return VAR_1;
 case 4:
  return VAR_2;
 default:
  FUNC_0(VAR_4->dev, "Invalid jack debounce");
  return VAR_0;
 }
}
