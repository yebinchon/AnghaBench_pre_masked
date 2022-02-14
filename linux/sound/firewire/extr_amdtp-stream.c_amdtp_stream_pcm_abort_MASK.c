
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct amdtp_stream {int pcm; } ;


 struct snd_pcm_substream* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

void FUNC_2(struct amdtp_stream *VAR_0)
{
 struct snd_pcm_substream *VAR_1;

 VAR_1 = FUNC_0(VAR_0->pcm);
 if (VAR_1)
  FUNC_1(VAR_1);
}
