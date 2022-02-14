
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_dai {int id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;

 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 unsigned int VAR_12 ;


 unsigned int VAR_13 ;

 unsigned int VAR_14 ;

 int FUNC_0 (int ,char*,int) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,unsigned int) ;
 int FUNC_3 (struct snd_soc_dapm_context*) ;
 int FUNC_4 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_15, unsigned int VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_15->component;
 struct snd_soc_dapm_context *VAR_18 =
  FUNC_1(VAR_17);
 unsigned int VAR_19 = 0, VAR_20 = 0;
 int VAR_21 = 0;

 FUNC_3(VAR_18);
 switch (VAR_16 & VAR_14) {
 case 134:
  VAR_19 |= VAR_6;
  break;
 default:
  VAR_21 = -VAR_0;
 }

 switch (VAR_16 & VAR_13) {
 case 128:
  break;
 case 130:
  VAR_20 |= VAR_9;
  break;
 default:
  VAR_21 = -VAR_0;
 }

 switch (VAR_16 & VAR_12) {
 case 131:
  break;
 case 129:
  VAR_19 |= VAR_1;
  break;
 case 133:
  VAR_19 |= VAR_3;
  break;
 case 132:
  VAR_19 |= VAR_4;
  break;
 default:
  VAR_21 = -VAR_0;
 }

 switch (VAR_15->id) {
 case 135:
  FUNC_2(VAR_17, VAR_11,
   VAR_5 | VAR_2,
   VAR_19);
  FUNC_2(VAR_17, VAR_7,
   VAR_10, VAR_20);
  FUNC_2(VAR_17, VAR_8,
   VAR_10, VAR_20);
  break;
 default:
  FUNC_0(VAR_17->dev, "Invalid dai->id: %d\n", VAR_15->id);
  VAR_21 = -VAR_0;
 }

 FUNC_4(VAR_18);
 return VAR_21;
}
