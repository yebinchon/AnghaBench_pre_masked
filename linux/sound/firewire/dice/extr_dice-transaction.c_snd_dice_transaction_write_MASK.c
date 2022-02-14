
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {int unit; } ;
typedef enum snd_dice_addr_type { ____Placeholder_snd_dice_addr_type } snd_dice_addr_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_dice*,int,unsigned int) ;
 int FUNC_1 (int ,int ,int ,void*,unsigned int,int ) ;

int FUNC_2(struct snd_dice *VAR_2,
          enum snd_dice_addr_type VAR_3,
          unsigned int VAR_4, void *VAR_5, unsigned int VAR_6)
{
 return FUNC_1(VAR_2->unit,
      (VAR_6 == 4) ? VAR_1 :
            VAR_0,
      FUNC_0(VAR_2, VAR_3, VAR_4), VAR_5, VAR_6, 0);
}
