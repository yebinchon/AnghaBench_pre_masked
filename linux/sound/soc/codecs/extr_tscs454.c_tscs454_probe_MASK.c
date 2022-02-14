
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tscs454 {int sysclk_src_id; } ;
struct snd_soc_component {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;




 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*) ;
 struct tscs454* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_7)
{
 struct tscs454 *VAR_8 = FUNC_2(VAR_7);
 unsigned int VAR_9;
 int VAR_10 = 0;

 switch (VAR_8->sysclk_src_id) {
 case 128:
  VAR_9 = VAR_5;
  break;
 case 130:
  VAR_9 = VAR_3;
  break;
 case 129:
  VAR_9 = VAR_4;
  break;
 case 131:
  VAR_9 = VAR_2;
  break;
 default:
  VAR_10 = -VAR_0;
  FUNC_0(VAR_7->dev, "Invalid sysclk src id (%d)\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_3(VAR_7, VAR_6,
   VAR_1, VAR_9);
 if (VAR_10 < 0) {
  FUNC_0(VAR_7->dev, "Failed to set PLL input (%d)\n", VAR_10);
  return VAR_10;
 }

 if (VAR_8->sysclk_src_id < 131)
  VAR_10 = FUNC_1(VAR_7);

 return VAR_10;
}
