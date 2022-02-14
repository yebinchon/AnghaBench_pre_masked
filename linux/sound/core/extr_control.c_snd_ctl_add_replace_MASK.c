
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int info; } ;
struct snd_card {int controls_rwsem; } ;
typedef enum snd_ctl_add_mode { ____Placeholder_snd_ctl_add_mode } snd_ctl_add_mode ;


 int VAR_0 ;
 int FUNC_0 (struct snd_card*,struct snd_kcontrol*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_card *VAR_1,
          struct snd_kcontrol *VAR_2,
          enum snd_ctl_add_mode VAR_3)
{
 int VAR_4 = -VAR_0;

 if (! VAR_2)
  return VAR_4;
 if (FUNC_2(!VAR_1 || !VAR_2->info))
  goto error;

 FUNC_1(&VAR_1->controls_rwsem);
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_4(&VAR_1->controls_rwsem);
 if (VAR_4 < 0)
  goto error;
 return 0;

 error:
 FUNC_3(VAR_2);
 return VAR_4;
}
