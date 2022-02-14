
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct adau1977 {int slot_width; int max_master_fs; int regmap; int master; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int FUNC_0 (int) ;
 int VAR_17 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_4 (int ,int ,unsigned int) ;
 struct adau1977* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_18, unsigned int VAR_19,
 unsigned int VAR_20, int VAR_21, int VAR_22)
{
 struct adau1977 *VAR_23 = FUNC_5(VAR_18->component);
 unsigned int VAR_24, VAR_25, VAR_26;
 unsigned int VAR_27[4];
 unsigned int VAR_28;
 int VAR_29;

 if (VAR_21 == 0) {

  VAR_23->slot_width = 0;
  VAR_23->max_master_fs = 192000;
  return FUNC_3(VAR_23->regmap,
   VAR_4, VAR_8,
   VAR_7);
 }

 if (VAR_20 == 0 || VAR_19 != 0)
  return -VAR_17;

 VAR_26 = 0;
 for (VAR_28 = 0; VAR_28 < 4; VAR_28++) {
  VAR_27[VAR_28] = FUNC_1(VAR_20);
  VAR_26 |= FUNC_0(VAR_28);
  VAR_20 &= ~(1 << VAR_27[VAR_28]);
  if (VAR_27[VAR_28] >= VAR_21)
   return -VAR_17;
  if (VAR_20 == 0)
   break;
 }

 if (VAR_20 != 0)
  return -VAR_17;

 switch (VAR_22) {
 case 16:
  VAR_25 = VAR_13;
  break;
 case 24:

  if (VAR_23->master)
   return -VAR_17;
  VAR_25 = VAR_14;
  break;
 case 32:
  VAR_25 = VAR_15;
  break;
 default:
  return -VAR_17;
 }

 switch (VAR_21) {
 case 2:
  VAR_24 = VAR_10;
  break;
 case 4:
  VAR_24 = VAR_11;
  break;
 case 8:
  VAR_24 = VAR_12;
  break;
 case 16:
  VAR_24 = VAR_9;
  break;
 default:
  return -VAR_17;
 }

 VAR_29 = FUNC_3(VAR_23->regmap, VAR_6,
  FUNC_0(0) |
  FUNC_0(1) |
  FUNC_0(2) |
  FUNC_0(3), VAR_26);
 if (VAR_29)
  return VAR_29;

 VAR_29 = FUNC_4(VAR_23->regmap, VAR_2,
  (VAR_27[1] << VAR_1) |
  (VAR_27[0] << VAR_0));
 if (VAR_29)
  return VAR_29;

 VAR_29 = FUNC_4(VAR_23->regmap, VAR_3,
  (VAR_27[3] << VAR_1) |
  (VAR_27[2] << VAR_0));
 if (VAR_29)
  return VAR_29;

 VAR_29 = FUNC_3(VAR_23->regmap, VAR_4,
  VAR_8, VAR_24);
 if (VAR_29)
  return VAR_29;

 VAR_29 = FUNC_3(VAR_23->regmap, VAR_5,
  VAR_16, VAR_25);
 if (VAR_29)
  return VAR_29;

 VAR_23->slot_width = VAR_22;


 VAR_23->max_master_fs = FUNC_2(192000, 24576000 / VAR_22 / VAR_21);

 return 0;
}
