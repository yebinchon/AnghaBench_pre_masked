
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040_data {int dl1_unmuted; int dl2_unmuted; } ;
struct twl6040 {int dummy; } ;
struct snd_soc_component {int dummy; } ;
typedef enum twl6040_dai_id { ____Placeholder_twl6040_dai_id } twl6040_dai_id ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct twl6040_data* FUNC_0 (struct snd_soc_component*) ;
 struct twl6040* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct twl6040*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_11, enum twl6040_dai_id VAR_12,
        int VAR_13)
{
 struct twl6040 *VAR_14 = FUNC_1(VAR_11);
 struct twl6040_data *VAR_15 = FUNC_0(VAR_11);
 int VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;

 switch (VAR_12) {
 case 129:
  VAR_16 = FUNC_2(VAR_11, VAR_9);
  VAR_17 = FUNC_2(VAR_11, VAR_10);
  VAR_18 = FUNC_2(VAR_11, VAR_6);

  if (VAR_13) {

   VAR_18 &= ~0x01;
   VAR_16 &= ~(VAR_5 | VAR_4);
   VAR_17 &= ~(VAR_5 | VAR_4);

  }

  FUNC_3(VAR_14, VAR_6, VAR_18);
  FUNC_3(VAR_14, VAR_9, VAR_16);
  FUNC_3(VAR_14, VAR_10, VAR_17);
  VAR_15->dl1_unmuted = !VAR_13;
  break;
 case 128:
  VAR_19 = FUNC_2(VAR_11, VAR_7);
  VAR_20 = FUNC_2(VAR_11, VAR_8);

  if (VAR_13) {

   VAR_19 &= ~(VAR_0 | VAR_2 |
        VAR_1 | VAR_3);
   VAR_20 &= ~(VAR_0 | VAR_2 |
        VAR_1 | VAR_3);
  }

  FUNC_3(VAR_14, VAR_7, VAR_19);
  FUNC_3(VAR_14, VAR_8, VAR_20);
  VAR_15->dl2_unmuted = !VAR_13;
  break;
 default:
  break;
 }
}
