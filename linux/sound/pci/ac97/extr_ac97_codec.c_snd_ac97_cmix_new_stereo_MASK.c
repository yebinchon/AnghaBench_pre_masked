
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dummy; } ;
struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ac97*,int,unsigned char*,unsigned char*) ;
 int FUNC_1 (struct snd_card*,char*,int,int,int,struct snd_ac97*) ;
 int FUNC_2 (struct snd_card*,char*,int,unsigned char,unsigned char,struct snd_ac97*) ;
 scalar_t__ FUNC_3 (struct snd_ac97*,int,int) ;
 int FUNC_4 (struct snd_ac97*,int) ;
 int FUNC_5 (char*,char*,char const*) ;

__attribute__((used)) static int FUNC_6(struct snd_card *VAR_1, const char *VAR_2,
        int VAR_3, int VAR_4, int VAR_5,
        struct snd_ac97 *VAR_6)
{
 int VAR_7;
 char VAR_8[VAR_0];
 unsigned char VAR_9, VAR_10;

 if (! FUNC_4(VAR_6, VAR_3))
  return 0;

 if (FUNC_3(VAR_6, VAR_3, 15)) {
  FUNC_5(VAR_8, "%s Switch", VAR_2);
  if ((VAR_7 = FUNC_1(VAR_1, VAR_8, VAR_3,
           VAR_4, VAR_5,
           VAR_6)) < 0)
   return VAR_7;
 }
 FUNC_0(VAR_6, VAR_3, &VAR_9, &VAR_10);
 if (VAR_9) {
  FUNC_5(VAR_8, "%s Volume", VAR_2);
  if ((VAR_7 = FUNC_2(VAR_1, VAR_8, VAR_3, VAR_9, VAR_10, VAR_6)) < 0)
   return VAR_7;
 }
 return 0;
}
