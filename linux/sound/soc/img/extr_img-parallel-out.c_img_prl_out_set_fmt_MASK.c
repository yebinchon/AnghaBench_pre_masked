
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct img_prl_out {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;


 int FUNC_0 (struct img_prl_out*,int ) ;
 int FUNC_1 (struct img_prl_out*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct img_prl_out* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_4, unsigned int VAR_5)
{
 struct img_prl_out *VAR_6 = FUNC_4(VAR_4);
 u32 VAR_7, VAR_8 = 0;
 int VAR_9;

 switch (VAR_5 & VAR_3) {
 case 128:
  break;
 case 129:
  VAR_8 |= VAR_2;
  break;
 default:
  return -VAR_0;
 }

 VAR_9 = FUNC_2(VAR_6->dev);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7 = FUNC_0(VAR_6, VAR_1);
 VAR_7 = (VAR_7 & ~VAR_2) | VAR_8;
 FUNC_1(VAR_6, VAR_7, VAR_1);
 FUNC_3(VAR_6->dev);

 return 0;
}
