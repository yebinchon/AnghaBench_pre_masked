
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dev; } ;
struct mxs_saif {scalar_t__ id; scalar_t__ master_id; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

 unsigned int VAR_13 ;



 unsigned int VAR_14 ;

 unsigned int VAR_15 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 struct mxs_saif* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_16, unsigned int VAR_17)
{
 u32 VAR_18, VAR_19;
 u32 VAR_20;
 struct mxs_saif *VAR_21 = FUNC_3(VAR_16);

 VAR_19 = FUNC_0(VAR_21->base + VAR_12);
 if (VAR_19 & VAR_7) {
  FUNC_2(VAR_16->dev, "error: busy\n");
  return -VAR_8;
 }




 if (VAR_21->id != VAR_21->master_id) {
  FUNC_1(VAR_5,
   VAR_21->base + VAR_11 + VAR_10);
  FUNC_1(VAR_1,
   VAR_21->base + VAR_11 + VAR_10);
 }

 VAR_20 = FUNC_0(VAR_21->base + VAR_11);
 VAR_20 = VAR_20 & ~VAR_0 & ~VAR_4 & ~VAR_3 & ~VAR_2;

 VAR_18 = 0;


 switch (VAR_17 & VAR_13) {
 case 133:

  VAR_18 |= VAR_2;
  VAR_18 &= ~VAR_4;
  break;
 case 130:

  VAR_18 &= ~VAR_2;
  VAR_18 &= ~VAR_4;
  VAR_18 &= ~VAR_3;
  break;
 default:
  return -VAR_9;
 }


 switch (VAR_17 & VAR_14) {
 case 132:
  VAR_18 |= VAR_0;
  VAR_18 |= VAR_4;
  break;
 case 131:
  VAR_18 |= VAR_0;
  VAR_18 &= ~VAR_4;
  break;
 case 129:
  VAR_18 &= ~VAR_0;
  VAR_18 |= VAR_4;
  break;
 case 128:
  VAR_18 &= ~VAR_0;
  VAR_18 &= ~VAR_4;
  break;
 }
 switch (VAR_17 & VAR_15) {
 case 134:
  if (VAR_21->id == VAR_21->master_id)
   VAR_18 &= ~VAR_6;
  else
   VAR_18 |= VAR_6;

  FUNC_1(VAR_18 | VAR_20, VAR_21->base + VAR_11);
  break;
 default:
  return -VAR_9;
 }

 return 0;
}
