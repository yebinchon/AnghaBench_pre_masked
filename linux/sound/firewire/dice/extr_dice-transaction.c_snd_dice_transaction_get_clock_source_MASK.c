
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {int dummy; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_dice*,int *) ;

int FUNC_2(struct snd_dice *VAR_1,
       unsigned int *VAR_2)
{
 __be32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, &VAR_3);
 if (VAR_4 >= 0)
  *VAR_2 = FUNC_0(VAR_3) & VAR_0;

 return VAR_4;
}
