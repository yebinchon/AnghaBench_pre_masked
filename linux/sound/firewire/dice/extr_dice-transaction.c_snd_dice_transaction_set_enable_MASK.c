
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {int global_enabled; int owner_generation; int unit; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_dice*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *,int,int) ;

int FUNC_3(struct snd_dice *VAR_4)
{
 __be32 VAR_5;
 int VAR_6 = 0;

 if (VAR_4->global_enabled)
  goto end;

 VAR_5 = FUNC_0(1);
 VAR_6 = FUNC_2(VAR_4->unit, VAR_3,
     FUNC_1(VAR_4, VAR_2,
          VAR_1),
     &VAR_5, 4,
     VAR_0 | VAR_4->owner_generation);
 if (VAR_6 < 0)
  goto end;

 VAR_4->global_enabled = 1;
end:
 return VAR_6;
}
