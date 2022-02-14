
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dev; } ;
struct hi6210_i2s {unsigned int format; int master; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;


 unsigned int VAR_2 ;

 struct hi6210_i2s* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_3, unsigned int VAR_4)
{
 struct hi6210_i2s *VAR_5 = FUNC_0(VAR_3->dev);





 switch (VAR_4 & VAR_2) {
 case 132:
 case 131:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_4 & VAR_1) {
 case 130:
 case 129:
 case 128:
  break;
 default:
  return -VAR_0;
 }

 VAR_5->format = VAR_4;
 VAR_5->master = (VAR_5->format & VAR_2) ==
        131;

 return 0;
}
