
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
 int VAR_6 ;




 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_7,
  snd_pcm_format_t VAR_8)
{
 unsigned int VAR_9;
 int VAR_10;

 switch (VAR_8) {
 case 131:
  VAR_9 = VAR_2;
  break;
 case 130:
  VAR_9 = VAR_3;
  break;
 case 129:
  VAR_9 = VAR_4;
  break;
 case 128:
  VAR_9 = VAR_5;
  break;
 default:
  VAR_10 = -VAR_0;
  FUNC_0(VAR_7->dev, "Unsupported format width (%d)\n", VAR_10);
  return VAR_10;
 }
 VAR_10 = FUNC_1(VAR_7,
   VAR_6, VAR_1, VAR_9);
 if (VAR_10 < 0) {
  FUNC_0(VAR_7->dev,
    "Failed to set sample width (%d)\n", VAR_10);
  return VAR_10;
 }

 return 0;
}
