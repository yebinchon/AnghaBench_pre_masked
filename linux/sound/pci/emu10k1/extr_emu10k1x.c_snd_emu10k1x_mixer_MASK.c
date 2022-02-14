
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;
struct emu10k1x {struct snd_card* card; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_1 (int *,struct emu10k1x*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct emu10k1x *VAR_4)
{
 int VAR_5;
 struct snd_kcontrol *VAR_6;
 struct snd_card *VAR_7 = VAR_4->card;

 if ((VAR_6 = FUNC_1(&VAR_3, VAR_4)) == ((void*)0))
  return -VAR_0;
 if ((VAR_5 = FUNC_0(VAR_7, VAR_6)))
  return VAR_5;
 if ((VAR_6 = FUNC_1(&VAR_1, VAR_4)) == ((void*)0))
  return -VAR_0;
 if ((VAR_5 = FUNC_0(VAR_7, VAR_6)))
  return VAR_5;
 if ((VAR_6 = FUNC_1(&VAR_2, VAR_4)) == ((void*)0))
  return -VAR_0;
 if ((VAR_5 = FUNC_0(VAR_7, VAR_6)))
  return VAR_5;

 return 0;
}
