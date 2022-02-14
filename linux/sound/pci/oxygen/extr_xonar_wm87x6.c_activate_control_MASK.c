
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {unsigned int private_value; int id; TYPE_1__* vd; } ;
struct oxygen {int card; } ;
struct TYPE_2__ {unsigned int access; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_1(struct oxygen *VAR_2,
        struct snd_kcontrol *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;

 if (VAR_3->private_value & VAR_4)
  VAR_5 = 0;
 else
  VAR_5 = VAR_0;
 if ((VAR_3->vd[0].access & VAR_0) != VAR_5) {
  VAR_3->vd[0].access ^= VAR_0;
  FUNC_0(VAR_2->card, VAR_1, &VAR_3->id);
 }
}
