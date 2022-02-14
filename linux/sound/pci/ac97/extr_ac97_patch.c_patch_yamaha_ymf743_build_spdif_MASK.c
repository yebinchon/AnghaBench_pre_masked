
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ac97*,int *,int) ;
 int * VAR_1 ;
 int FUNC_1 (struct snd_ac97*,int ,int) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, &VAR_1[0], 3);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_4 = FUNC_0(VAR_3,
       VAR_2, 3);
 if (VAR_4 < 0)
  return VAR_4;


 FUNC_1(VAR_3, VAR_0, 0xa201);
 return 0;
}
