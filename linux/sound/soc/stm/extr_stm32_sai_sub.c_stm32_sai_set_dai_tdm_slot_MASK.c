
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct stm32_sai_sub_data {int slot_width; int slots; int regmap; void* slot_mask; } ;
struct snd_soc_dai {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct stm32_sai_sub_data*) ;
 scalar_t__ FUNC_4 (struct stm32_sai_sub_data*) ;
 scalar_t__ FUNC_5 (struct stm32_sai_sub_data*) ;
 int VAR_6 ;
 int FUNC_6 (int ,char*,void*,void*,int,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ,int,int) ;
 struct stm32_sai_sub_data* FUNC_9 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_dai *VAR_7, u32 VAR_8,
          u32 VAR_9, int VAR_10, int VAR_11)
{
 struct stm32_sai_sub_data *VAR_12 = FUNC_9(VAR_7);
 int VAR_13, VAR_14, VAR_15;

 if (FUNC_5(VAR_12)) {
  FUNC_7(VAR_7->dev, "Slot setting relevant only for TDM\n");
  return 0;
 }

 FUNC_6(VAR_7->dev, "Masks tx/rx:%#x/%#x, slots:%d, width:%d\n",
  VAR_8, VAR_9, VAR_10, VAR_11);

 switch (VAR_11) {
 case 16:
  VAR_15 = VAR_0;
  break;
 case 32:
  VAR_15 = VAR_1;
  break;
 default:
  VAR_15 = VAR_2;
  break;
 }

 VAR_13 = FUNC_2(VAR_15) |
  FUNC_0(VAR_10 - 1);
 VAR_14 = VAR_5 | VAR_3;


 if (FUNC_4(VAR_12)) {
  VAR_12->slot_mask = VAR_8;
  VAR_13 |= FUNC_1(VAR_8);
 }

 if (FUNC_3(VAR_12)) {
  VAR_12->slot_mask = VAR_9;
  VAR_13 |= FUNC_1(VAR_9);
 }

 VAR_14 |= VAR_4;

 FUNC_8(VAR_12->regmap, VAR_6, VAR_14, VAR_13);

 VAR_12->slot_width = VAR_11;
 VAR_12->slots = VAR_10;

 return 0;
}
