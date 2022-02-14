
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {TYPE_1__* vd; } ;
struct snd_ctl_elem_id {int dummy; } ;
struct snd_card {int dummy; } ;
struct TYPE_2__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ctl_elem_id*,struct snd_kcontrol*,int) ;
 int FUNC_1 (struct snd_card*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_card *VAR_3,
        struct snd_kcontrol *VAR_4,
        int VAR_5, int VAR_6)
{
 struct snd_ctl_elem_id VAR_7;

 if (! VAR_4)
  return;
 if (VAR_6)
  VAR_4->vd[VAR_5].access &= ~VAR_0;
 else
  VAR_4->vd[VAR_5].access |= VAR_0;
 FUNC_1(VAR_3, VAR_2 |
         VAR_1,
         FUNC_0(&VAR_7, VAR_4, VAR_5));
}
