
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dev; } ;
typedef int snd_pcm_format_t ;







 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;

__attribute__((used)) static unsigned int FUNC_1(snd_pcm_format_t VAR_5,
       struct snd_card *VAR_6)
{
 switch (VAR_5) {
 case 128:
  return VAR_4;
 case 131:
  return VAR_1;
 case 130:
  return VAR_2;
 case 129:
  return VAR_3;
 case 132:
  return VAR_0;
 default:
  FUNC_0(VAR_6->dev, "not recognized snd format is %d\n",
   VAR_5);
  return VAR_1;
 }
}
