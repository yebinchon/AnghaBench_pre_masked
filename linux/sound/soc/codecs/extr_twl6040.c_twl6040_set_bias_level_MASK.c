
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040_data {int codec_powered; } ;
struct twl6040 {int dummy; } ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int VAR_1 ;
 struct twl6040_data* FUNC_0 (struct snd_soc_component*) ;
 struct twl6040* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct twl6040*,int) ;
 int FUNC_3 (struct twl6040*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_2,
    enum snd_soc_bias_level VAR_3)
{
 struct twl6040 *VAR_4 = FUNC_1(VAR_2);
 struct twl6040_data *VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = 0;

 switch (VAR_3) {
 case 130:
  break;
 case 129:
  break;
 case 128:
  if (VAR_5->codec_powered) {

   VAR_6 = FUNC_3(VAR_4, VAR_1,
           32768, 19200000);
   break;
  }

  VAR_6 = FUNC_2(VAR_4, 1);
  if (VAR_6)
   break;

  VAR_5->codec_powered = 1;


  FUNC_4(VAR_2, VAR_0, 0x02);
  break;
 case 131:
  if (!VAR_5->codec_powered)
   break;

  FUNC_2(VAR_4, 0);
  VAR_5->codec_powered = 0;
  break;
 }

 return VAR_6;
}
