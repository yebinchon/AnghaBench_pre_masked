
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_sai_sub_data {int fmt; int fs_length; int slot_width; int slots; int data_size; int regmap; } ;
struct snd_soc_dai {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (int ,int ,int,int) ;
 struct stm32_sai_sub_data* FUNC_5 (struct snd_soc_dai*) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_dai *VAR_9)
{
 struct stm32_sai_sub_data *VAR_10 = FUNC_5(VAR_9);
 int VAR_11, VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_13 = VAR_10->fmt & VAR_5;
 VAR_10->fs_length = VAR_10->slot_width * VAR_10->slots;

 VAR_11 = VAR_10->fs_length / 2;
 if ((VAR_13 == VAR_3) ||
     (VAR_13 == VAR_4))
  VAR_11 = 1;

 VAR_14 = FUNC_0((VAR_10->fs_length - 1));
 VAR_14 |= FUNC_1((VAR_11 - 1));
 VAR_15 = VAR_0 | VAR_1;

 FUNC_3(VAR_9->dev, "Frame length %d, frame active %d\n",
  VAR_10->fs_length, VAR_11);

 FUNC_4(VAR_10->regmap, VAR_7, VAR_15, VAR_14);

 if ((VAR_10->fmt & VAR_5) == VAR_6) {
  VAR_12 = VAR_10->slot_width - VAR_10->data_size;

  FUNC_4(VAR_10->regmap, VAR_8,
       VAR_2,
       FUNC_2(VAR_12));
 }
}
