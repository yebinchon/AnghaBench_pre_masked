
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct snd_pcm_substream {int pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ tstamp_mode; TYPE_1__* status; } ;
typedef int name ;
struct TYPE_2__ {int tstamp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct snd_pcm_substream*,char*,int) ;
 int FUNC_3 (struct snd_pcm_runtime*,struct timespec*) ;
 int FUNC_4 (struct snd_pcm_substream*,int ) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_6 (struct snd_pcm_substream*,int ) ;

void FUNC_7(struct snd_pcm_substream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_3->runtime;

 FUNC_5(VAR_3);
 if (VAR_4->tstamp_mode == VAR_1)
  FUNC_3(VAR_4, (struct timespec *)&VAR_4->status->tstamp);
 FUNC_4(VAR_3, VAR_0);
 if (FUNC_6(VAR_3, VAR_2)) {
  char VAR_5[16];
  FUNC_2(VAR_3, VAR_5, sizeof(VAR_5));
  FUNC_1(VAR_3->pcm, "XRUN: %s\n", VAR_5);
  FUNC_0(VAR_3);
 }
}
