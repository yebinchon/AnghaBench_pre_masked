
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dbg; } ;
struct snd_emu10k1 {TYPE_1__ fx8010; scalar_t__ audigy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_emu10k1*,int ,int ,int ) ;

void FUNC_1(struct snd_emu10k1 *VAR_4)
{

 if (VAR_4->audigy)
  FUNC_0(VAR_4, VAR_0, 0, VAR_4->fx8010.dbg = VAR_1);
 else
  FUNC_0(VAR_4, VAR_2, 0, VAR_4->fx8010.dbg = VAR_3);
}
