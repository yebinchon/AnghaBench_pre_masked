
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int id; TYPE_1__* vd; } ;
struct snd_card {int dummy; } ;
struct TYPE_2__ {int access; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_card*,int,int *) ;

__attribute__((used)) static void FUNC_1(struct snd_card *VAR_3,
   struct snd_kcontrol *VAR_4, int VAR_5)
{
 if (VAR_5)
  VAR_4->vd[0].access &= ~VAR_0;
 else
  VAR_4->vd[0].access |= VAR_0;
 FUNC_0(VAR_3, VAR_2 |
    VAR_1, &(VAR_4->id));
}
