
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int id; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct snd_ac97*,int *,int) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (struct snd_ac97*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 * VAR_4)
{
 int VAR_5;


 if ((VAR_5 = FUNC_0(VAR_4, &VAR_3[0], 3)) < 0)
  return VAR_5;

 if ((VAR_5 = FUNC_0(VAR_4, &VAR_2[0], 1)) < 0)
  return VAR_5;
 switch (VAR_4->id & VAR_1) {
 case 128:
  if ((VAR_5 = FUNC_0(VAR_4, &VAR_2[1], 1)) < 0)
   return VAR_5;
  break;
 }


 FUNC_1(VAR_4, VAR_0, 0x0a20);
 return 0;
}
