
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
typedef int snd_pcm_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,unsigned int,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_9,
  snd_pcm_format_t VAR_10,
  int VAR_11)
{
 unsigned int VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 switch (VAR_10) {
 case 135:
  VAR_13 = VAR_2;
  break;
 case 134:
  VAR_13 = VAR_3;
  break;
 case 133:
  VAR_13 = VAR_4;
  break;
 case 132:
 case 131:
  VAR_13 = VAR_5;
  break;
 default:
  VAR_14 = -VAR_0;
  FUNC_0(VAR_9->dev, "Unsupported format width (%d)\n", VAR_14);
  return VAR_14;
 }

 switch (VAR_11) {
 case 130:
  VAR_12 = VAR_6;
  break;
 case 129:
  VAR_12 = VAR_7;
  break;
 case 128:
  VAR_12 = VAR_8;
  break;
 default:
  VAR_14 = -VAR_0;
  FUNC_0(VAR_9->dev, "AIF ID not recognized (%d)\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_1(VAR_9,
   VAR_12, VAR_1, VAR_13);
 if (VAR_14 < 0) {
  FUNC_0(VAR_9->dev,
    "Failed to set sample width (%d)\n", VAR_14);
  return VAR_14;
 }

 return 0;
}
