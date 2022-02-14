
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int ext_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_ac97*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 * VAR_3)
{
 int VAR_4;

 if ((VAR_4 = FUNC_1(VAR_3, VAR_1, FUNC_0(VAR_1))) < 0)
  return VAR_4;
 if (VAR_3->ext_id & VAR_0) {
  if ((VAR_4 = FUNC_1(VAR_3, VAR_2, FUNC_0(VAR_2))) < 0)
   return VAR_4;
 }
 return 0;
}
