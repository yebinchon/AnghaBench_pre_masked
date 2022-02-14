
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct img_i2s_out {int active_channels; int max_i2s_chan; int force_clk_active; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;



 unsigned int VAR_11 ;

 unsigned int VAR_12 ;


 int FUNC_0 (struct img_i2s_out*,int) ;
 int FUNC_1 (struct img_i2s_out*,int) ;
 int FUNC_2 (struct img_i2s_out*,int,int ) ;
 int FUNC_3 (struct img_i2s_out*,int,int,int ) ;
 int FUNC_4 (struct img_i2s_out*) ;
 int FUNC_5 (struct img_i2s_out*) ;
 int FUNC_6 (struct img_i2s_out*,int ) ;
 int FUNC_7 (struct img_i2s_out*,int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct img_i2s_out* FUNC_10 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_dai *VAR_13, unsigned int VAR_14)
{
 struct img_i2s_out *VAR_15 = FUNC_10(VAR_13);
 int VAR_16, VAR_17;
 bool VAR_18;
 u32 VAR_19, VAR_20, VAR_21 = 0;
 u32 VAR_22, VAR_23 = 0;

 VAR_18 = ((VAR_14 & VAR_8) ==
   VAR_9);

 if (VAR_18)
  VAR_23 |= VAR_5;

 switch (VAR_14 & VAR_12) {
 case 135:
  break;
 case 134:
  VAR_23 |= VAR_7;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_14 & VAR_11) {
 case 128:
  VAR_23 |= VAR_4;
  break;
 case 129:
  VAR_23 |= VAR_4;
  VAR_23 |= VAR_6;
  break;
 case 131:
  break;
 case 132:
  VAR_23 |= VAR_6;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_14 & VAR_10) {
 case 133:
  VAR_21 |= VAR_1;
  break;
 case 130:
  break;
 default:
  return -VAR_0;
 }

 VAR_20 = VAR_5 |
         VAR_7 |
         VAR_4 |
         VAR_6;

 VAR_19 = VAR_1;

 VAR_17 = FUNC_8(VAR_15->dev);
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_4(VAR_15);

 VAR_22 = FUNC_6(VAR_15, VAR_3);
 VAR_22 = (VAR_22 & ~VAR_20) | VAR_23;
 FUNC_7(VAR_15, VAR_22, VAR_3);

 for (VAR_16 = 0; VAR_16 < VAR_15->active_channels; VAR_16++)
  FUNC_0(VAR_15, VAR_16);

 for (VAR_16 = 0; VAR_16 < VAR_15->max_i2s_chan; VAR_16++) {
  VAR_22 = FUNC_2(VAR_15, VAR_16, VAR_2);
  VAR_22 = (VAR_22 & ~VAR_19) | VAR_21;
  FUNC_3(VAR_15, VAR_16, VAR_22, VAR_2);
 }

 for (VAR_16 = 0; VAR_16 < VAR_15->active_channels; VAR_16++)
  FUNC_1(VAR_15, VAR_16);

 FUNC_5(VAR_15);
 FUNC_9(VAR_15->dev);

 VAR_15->force_clk_active = VAR_18;

 return 0;
}
