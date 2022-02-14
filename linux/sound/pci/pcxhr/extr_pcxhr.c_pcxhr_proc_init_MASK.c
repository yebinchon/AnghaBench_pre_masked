
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcxhr {int card; TYPE_1__* mgr; } ;
struct TYPE_2__ {scalar_t__ is_hr_stereo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,struct snd_pcxhr*,int ) ;
 int FUNC_1 (int ,char*,struct snd_pcxhr*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_pcxhr *VAR_5)
{
 FUNC_0(VAR_5->card, "info", VAR_5, VAR_2);
 FUNC_0(VAR_5->card, "sync", VAR_5, VAR_4);

 if (VAR_5->mgr->is_hr_stereo)
  FUNC_1(VAR_5->card, "gpio", VAR_5,
         VAR_0,
         VAR_1);
 FUNC_0(VAR_5->card, "ltc", VAR_5, VAR_3);
}
