
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_ac97*,int *,int) ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (struct snd_ac97*,int ) ;
 int FUNC_2 (struct snd_ac97*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_ac97 * VAR_6)
{
 int VAR_7;


 if ((VAR_7 = FUNC_0(VAR_6, &VAR_5[0], 3)) < 0)
  return VAR_7;

 if ((VAR_7 = FUNC_0(VAR_6, &VAR_4[0], 1)) < 0)
  return VAR_7;


 FUNC_2(VAR_6, VAR_0,
        FUNC_1(VAR_6, VAR_0) & ~(VAR_2|VAR_1|VAR_3));
 return 0;
}
