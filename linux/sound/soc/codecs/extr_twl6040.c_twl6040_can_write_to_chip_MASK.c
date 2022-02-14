
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040_data {int dl1_unmuted; int dl2_unmuted; } ;
struct snd_soc_component {int dummy; } ;







 struct twl6040_data* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static bool FUNC_1(struct snd_soc_component *VAR_0,
      unsigned int VAR_1)
{
 struct twl6040_data *VAR_2 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 129:
 case 128:
 case 132:

  return VAR_2->dl1_unmuted;
 case 131:
 case 130:
  return VAR_2->dl2_unmuted;
 default:
  return 1;
 }
}
