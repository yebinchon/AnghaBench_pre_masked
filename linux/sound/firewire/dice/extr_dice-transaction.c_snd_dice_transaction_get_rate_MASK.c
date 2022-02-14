
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {int dummy; } ;
typedef int __be32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_dice*,int *) ;
 unsigned int* VAR_4 ;

int FUNC_2(struct snd_dice *VAR_5, unsigned int *VAR_6)
{
 __be32 VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_5, &VAR_7);
 if (VAR_9 < 0)
  goto end;

 VAR_8 = (FUNC_0(VAR_7) & VAR_0) >> VAR_1;
 if (VAR_8 >= VAR_3) {
  VAR_9 = -VAR_2;
  goto end;
 }

 *VAR_6 = VAR_4[VAR_8];
end:
 return VAR_9;
}
