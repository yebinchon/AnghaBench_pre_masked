
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_sai_sub_data {scalar_t__ slot_width; scalar_t__ data_size; int slots; int slot_mask; int regmap; } ;
struct snd_soc_dai {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,char*,int,scalar_t__) ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int,int ) ;
 struct stm32_sai_sub_data* FUNC_7 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dai *VAR_6)
{
 struct stm32_sai_sub_data *VAR_7 = FUNC_7(VAR_6);
 int VAR_8, VAR_9;

 FUNC_5(VAR_7->regmap, VAR_5, &VAR_8);





 VAR_9 = VAR_8 & VAR_4;
 if (VAR_9 == FUNC_2(VAR_1))
  VAR_7->slot_width = VAR_7->data_size;

 if (VAR_7->slot_width < VAR_7->data_size) {
  FUNC_4(VAR_6->dev,
   "Data size %d larger than slot width\n",
   VAR_7->data_size);
  return -VAR_0;
 }


 if (!VAR_7->slots)
  VAR_7->slots = 2;


 FUNC_6(VAR_7->regmap, VAR_5,
      VAR_2,
      FUNC_0((VAR_7->slots - 1)));


 if (!(VAR_8 & VAR_3)) {
  VAR_7->slot_mask = (1 << VAR_7->slots) - 1;
  FUNC_6(VAR_7->regmap,
       VAR_5, VAR_3,
       FUNC_1(VAR_7->slot_mask));
 }

 FUNC_3(VAR_6->dev, "Slots %d, slot width %d\n",
  VAR_7->slots, VAR_7->slot_width);

 return 0;
}
