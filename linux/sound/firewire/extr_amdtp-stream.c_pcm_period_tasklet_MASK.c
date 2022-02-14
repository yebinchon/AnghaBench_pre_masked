
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct amdtp_stream {int pcm; } ;


 struct snd_pcm_substream* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_0)
{
 struct amdtp_stream *VAR_1 = (void *)VAR_0;
 struct snd_pcm_substream *VAR_2 = FUNC_0(VAR_1->pcm);

 if (VAR_2)
  FUNC_1(VAR_2);
}
