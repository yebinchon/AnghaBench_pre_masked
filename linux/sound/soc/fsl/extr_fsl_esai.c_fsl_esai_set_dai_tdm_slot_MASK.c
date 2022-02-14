
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct snd_soc_dai {int dummy; } ;
struct fsl_esai {int slot_width; int slots; void* rx_mask; void* tx_mask; int regmap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct fsl_esai* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_3, u32 VAR_4,
         u32 VAR_5, int VAR_6, int VAR_7)
{
 struct fsl_esai *VAR_8 = FUNC_2(VAR_3);

 FUNC_1(VAR_8->regmap, VAR_2,
      VAR_0, FUNC_0(VAR_6));

 FUNC_1(VAR_8->regmap, VAR_1,
      VAR_0, FUNC_0(VAR_6));

 VAR_8->slot_width = VAR_7;
 VAR_8->slots = VAR_6;
 VAR_8->tx_mask = VAR_4;
 VAR_8->rx_mask = VAR_5;

 return 0;
}
