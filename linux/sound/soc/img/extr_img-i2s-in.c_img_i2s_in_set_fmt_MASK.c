
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct img_i2s_in {int active_channels; int max_i2s_chan; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 unsigned int VAR_5 ;



 unsigned int VAR_6 ;

 unsigned int VAR_7 ;


 int FUNC_0 (struct img_i2s_in*,int) ;
 int FUNC_1 (struct img_i2s_in*,int) ;
 int FUNC_2 (struct img_i2s_in*,int,int ) ;
 int FUNC_3 (struct img_i2s_in*,int,int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct img_i2s_in* FUNC_6 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dai *VAR_8, unsigned int VAR_9)
{
 struct img_i2s_in *VAR_10 = FUNC_6(VAR_8);
 int VAR_11, VAR_12;
 u32 VAR_13, VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;
 u32 VAR_17;

 switch (VAR_9 & VAR_6) {
 case 128:
  VAR_14 |= VAR_4;
  break;
 case 129:
  break;
 case 131:
  VAR_14 |= VAR_4;
  VAR_15 |= VAR_2;
  break;
 case 132:
  VAR_15 |= VAR_2;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_9 & VAR_5) {
 case 133:
  VAR_16 |= VAR_3;
  break;
 case 130:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_9 & VAR_7) {
 case 134:
  break;
 default:
  return -VAR_0;
 }

 VAR_13 = VAR_3;

 VAR_12 = FUNC_4(VAR_10->dev);
 if (VAR_12 < 0)
  return VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_10->active_channels; VAR_11++)
  FUNC_0(VAR_10, VAR_11);




 for (VAR_11 = 0; VAR_11 < VAR_10->max_i2s_chan; VAR_11++) {
  VAR_17 = FUNC_2(VAR_10, VAR_11, VAR_1);
  VAR_17 = (VAR_17 & ~VAR_13) | VAR_16;
  FUNC_3(VAR_10, VAR_11, VAR_17, VAR_1);
  VAR_17 = (VAR_17 & ~VAR_2) | VAR_15;
  FUNC_3(VAR_10, VAR_11, VAR_17, VAR_1);
  VAR_17 = (VAR_17 & ~VAR_4) | VAR_14;
  FUNC_3(VAR_10, VAR_11, VAR_17, VAR_1);
 }

 for (VAR_11 = 0; VAR_11 < VAR_10->active_channels; VAR_11++)
  FUNC_1(VAR_10, VAR_11);

 FUNC_5(VAR_10->dev);

 return 0;
}
