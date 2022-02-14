
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; } ;
struct ct_atc {int (* spdif_out_passthru ) (struct ct_atc*,int ) ;} ;
struct TYPE_2__ {scalar_t__ device; } ;


 scalar_t__ VAR_0 ;
 struct ct_atc* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct ct_atc*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct ct_atc *VAR_2 = FUNC_0(VAR_1);


 if (VAR_0 == VAR_1->pcm->device)
  VAR_2->spdif_out_passthru(VAR_2, 0);



 return 0;
}
