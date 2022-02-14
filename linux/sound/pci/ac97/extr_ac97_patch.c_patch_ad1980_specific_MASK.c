
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 int FUNC_0 (struct snd_ac97*) ;
 int FUNC_1 (struct snd_ac97*,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_0(VAR_1)) < 0)
  return VAR_2;
 return FUNC_1(VAR_1, &VAR_0, 1);
}
