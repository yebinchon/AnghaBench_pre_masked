
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {unsigned int reg; unsigned int shift; unsigned int max; unsigned int invert; unsigned int rreg; unsigned int rshift; } ;
struct snd_soc_dapm_path {int connect; TYPE_2__* sink; } ;
struct TYPE_4__ {int dapm; TYPE_1__* kcontrol_news; } ;
struct TYPE_3__ {scalar_t__ private_value; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (struct soc_mixer_control*) ;
 int FUNC_2 (int ,unsigned int,unsigned int*) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_dapm_path *VAR_1, int VAR_2,
           int VAR_3)
{
 struct soc_mixer_control *VAR_4 = (struct soc_mixer_control *)
  VAR_1->sink->kcontrol_news[VAR_2].private_value;
 unsigned int VAR_5 = VAR_4->reg;
 unsigned int VAR_6 = VAR_4->shift;
 unsigned int VAR_7 = VAR_4->max;
 unsigned int VAR_8 = (1 << FUNC_0(VAR_7)) - 1;
 unsigned int VAR_9 = VAR_4->invert;
 unsigned int VAR_10;

 if (VAR_5 != VAR_0) {
  FUNC_2(VAR_1->sink->dapm, VAR_5, &VAR_10);
  if (FUNC_1(VAR_4) && VAR_3 > 0) {
   if (VAR_5 != VAR_4->rreg)
    FUNC_2(VAR_1->sink->dapm, VAR_4->rreg, &VAR_10);
   VAR_10 = (VAR_10 >> VAR_4->rshift) & VAR_8;
  } else {
   VAR_10 = (VAR_10 >> VAR_6) & VAR_8;
  }
  if (VAR_9)
   VAR_10 = VAR_7 - VAR_10;
  VAR_1->connect = !!VAR_10;
 } else {
  VAR_1->connect = 0;
 }
}
