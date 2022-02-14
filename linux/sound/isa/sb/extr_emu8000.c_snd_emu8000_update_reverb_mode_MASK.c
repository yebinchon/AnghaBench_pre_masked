
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_emu8000 {int reverb_mode; } ;
struct TYPE_4__ {scalar_t__ port; int cmd; } ;
struct TYPE_3__ {int * parms; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_emu8000*) ;
 int FUNC_1 (struct snd_emu8000*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int * VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (struct snd_emu8000*,int,int ,int ) ;

void
FUNC_3(struct snd_emu8000 *VAR_6)
{
 int VAR_7 = VAR_6->reverb_mode;
 int VAR_8;

 if (VAR_7 < 0 || VAR_7 >= VAR_1 ||
     (VAR_7 >= VAR_2 && !VAR_4[VAR_7]))
  return;
 for (VAR_8 = 0; VAR_8 < 28; VAR_8++) {
  int VAR_9;
  if (VAR_3[VAR_8].port == VAR_0)
   VAR_9 = FUNC_0(VAR_6);
  else
   VAR_9 = FUNC_1(VAR_6);
  FUNC_2(VAR_6, VAR_9, VAR_3[VAR_8].cmd, VAR_5[VAR_7].parms[VAR_8]);
 }
}
