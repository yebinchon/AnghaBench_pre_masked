
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int private_value; int index; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;
struct snd_ac97 {int flags; int num; } ;


 struct snd_kcontrol_new FUNC_0 (char*,int,int,int,int,int) ;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 struct snd_kcontrol_new FUNC_1 (char*,int,int,int,int) ;
 int VAR_2 ;
 unsigned short FUNC_2 (struct snd_ac97*,int) ;
 int FUNC_3 (struct snd_ac97*,int) ;
 int FUNC_4 (struct snd_ac97*,int,unsigned short) ;
 int FUNC_5 (struct snd_ac97*,int,unsigned short) ;
 int FUNC_6 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_7 (struct snd_kcontrol_new*,struct snd_ac97*) ;

__attribute__((used)) static int FUNC_8(struct snd_card *VAR_3, char *VAR_4, int VAR_5,
         int VAR_6, int VAR_7,
         struct snd_ac97 *VAR_8)
{
 struct snd_kcontrol *VAR_9;
 int VAR_10;
 unsigned short VAR_11, VAR_12, VAR_13;

 if (! FUNC_3(VAR_8, VAR_5))
  return 0;

 VAR_13 = VAR_0;
 VAR_11 = FUNC_2(VAR_8, VAR_5);
 if (VAR_6 || (VAR_8->flags & VAR_2)) {

  VAR_12 = VAR_11 | VAR_1;
  FUNC_4(VAR_8, VAR_5, VAR_12);
  if (VAR_12 == FUNC_2(VAR_8, VAR_5))
   VAR_13 = VAR_1;
 }
 if (VAR_13 == VAR_1) {
  struct snd_kcontrol_new VAR_14 = FUNC_0(VAR_4, VAR_5, 15, 7, 1, 1);
  if (VAR_7)
   VAR_14.private_value |= (1 << 30);
  VAR_14.index = VAR_8->num;
  VAR_9 = FUNC_7(&VAR_14, VAR_8);
 } else {
  struct snd_kcontrol_new VAR_15 = FUNC_1(VAR_4, VAR_5, 15, 1, 1);
  if (VAR_7)
   VAR_15.private_value |= (1 << 30);
  VAR_15.index = VAR_8->num;
  VAR_9 = FUNC_7(&VAR_15, VAR_8);
 }
 VAR_10 = FUNC_6(VAR_3, VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_5(VAR_8, VAR_5, VAR_11 | VAR_13);
 return 0;
}
