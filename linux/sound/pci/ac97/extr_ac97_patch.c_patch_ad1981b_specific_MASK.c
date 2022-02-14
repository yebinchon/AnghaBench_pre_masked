
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct snd_ac97*,int ) ;
 int FUNC_2 (struct snd_ac97*,int *,int) ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 *VAR_3)
{
 int VAR_4;

 if ((VAR_4 = FUNC_2(VAR_3, &VAR_2, 1)) < 0)
  return VAR_4;
 if (FUNC_1(VAR_3, VAR_0))
  return 0;
 return FUNC_2(VAR_3, VAR_1,
        FUNC_0(VAR_1));
}
