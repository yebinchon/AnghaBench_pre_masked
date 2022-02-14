
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct sirf_usp {unsigned int daifmt_format; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;


 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

 int FUNC_0 (int ,char*) ;
 struct sirf_usp* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_4,
  unsigned int VAR_5)
{
 struct sirf_usp *VAR_6 = FUNC_1(VAR_4);


 switch (VAR_5 & VAR_3) {
 case 132:
  break;
 default:
  FUNC_0(VAR_4->dev, "Only CBM and CFM supported\n");
  return -VAR_0;
 }

 switch (VAR_5 & VAR_1) {
 case 130:
 case 131:
  VAR_6->daifmt_format = (VAR_5 & VAR_1);
  break;
 default:
  FUNC_0(VAR_4->dev, "Only I2S and DSP_A format supported\n");
  return -VAR_0;
 }

 switch (VAR_5 & VAR_2) {
 case 128:
  break;
 case 129:
  VAR_6->daifmt_format |= (VAR_5 & VAR_2);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
