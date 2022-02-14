
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int index; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;
struct snd_ac97 {int num; } ;


 struct snd_kcontrol_new FUNC_0 (char*,int,int,int ,unsigned int,int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_kcontrol_new FUNC_1 (char*,int,int ,unsigned int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct snd_kcontrol*,int ) ;
 unsigned int FUNC_4 (struct snd_ac97*,int) ;
 int FUNC_5 (struct snd_ac97*,int) ;
 int FUNC_6 (struct snd_ac97*,int,unsigned int) ;
 int FUNC_7 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_8 (struct snd_kcontrol_new*,struct snd_ac97*) ;

__attribute__((used)) static int FUNC_9(struct snd_card *VAR_5, char *VAR_6, int VAR_7, unsigned int VAR_8,
        unsigned int VAR_9, struct snd_ac97 *VAR_10)
{
 int VAR_11;
 struct snd_kcontrol *VAR_12;

 if (! FUNC_5(VAR_10, VAR_7))
  return 0;
 if (VAR_9) {

  struct snd_kcontrol_new VAR_13 = FUNC_0(VAR_6, VAR_7, 8, 0, VAR_8, 1);
  VAR_13.index = VAR_10->num;
  VAR_12 = FUNC_8(&VAR_13, VAR_10);
 } else {

  struct snd_kcontrol_new VAR_14 = FUNC_1(VAR_6, VAR_7, 0, VAR_8, 1);
  VAR_14.index = VAR_10->num;
  VAR_12 = FUNC_8(&VAR_14, VAR_10);
 }
 if (!VAR_12)
  return -VAR_3;
 if (VAR_7 >= VAR_2 && VAR_7 <= VAR_1)
  FUNC_3(VAR_12, VAR_4);
 else
  FUNC_3(VAR_12, FUNC_2(VAR_8));
 VAR_11 = FUNC_7(VAR_5, VAR_12);
 if (VAR_11 < 0)
  return VAR_11;
 FUNC_6(
  VAR_10, VAR_7,
  (FUNC_4(VAR_10, VAR_7) & VAR_0)
  | VAR_8 | (VAR_9 << 8)
 );
 return 0;
}
