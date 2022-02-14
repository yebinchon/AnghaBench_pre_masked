
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {int owner_generation; int global_enabled; int unit; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_dice*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,scalar_t__*,int,int) ;

void FUNC_2(struct snd_dice *VAR_5)
{
 __be32 VAR_6;

 VAR_6 = 0;
 FUNC_1(VAR_5->unit, VAR_4,
      FUNC_0(VAR_5, VAR_3,
           VAR_2),
      &VAR_6, 4, VAR_1 |
      VAR_0 | VAR_5->owner_generation);

 VAR_5->global_enabled = 0;
}
