
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_msnd {int mixer_lock; } ;
struct snd_card {int mixername; struct snd_msnd* private_data; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_card*,int ) ;
 int FUNC_3 (scalar_t__,struct snd_msnd*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;

int FUNC_6(struct snd_card *VAR_2)
{
 struct snd_msnd *VAR_3 = VAR_2->private_data;
 unsigned int VAR_4;
 int VAR_5;

 if (FUNC_1(!VAR_3))
  return -VAR_0;
 FUNC_4(&VAR_3->mixer_lock);
 FUNC_5(VAR_2->mixername, "MSND Pinnacle Mixer");

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_1); VAR_4++) {
  VAR_5 = FUNC_2(VAR_2,
      FUNC_3(VAR_1 + VAR_4, VAR_3));
  if (VAR_5 < 0)
   return VAR_5;
 }

 return 0;
}
