
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct pkt_desc {int dummy; } ;
struct amdtp_stream {unsigned int (* process_ctx_payloads ) (struct amdtp_stream*,struct pkt_desc const*,unsigned int,struct snd_pcm_substream*) ;int pcm; } ;


 struct snd_pcm_substream* FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct amdtp_stream*,struct pkt_desc const*,unsigned int,struct snd_pcm_substream*) ;
 int FUNC_2 (struct amdtp_stream*,struct snd_pcm_substream*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct amdtp_stream *VAR_0,
     const struct pkt_desc *VAR_1,
     unsigned int VAR_2)
{
 struct snd_pcm_substream *VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_0(VAR_0->pcm);
 VAR_4 = VAR_0->process_ctx_payloads(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_3)
  FUNC_2(VAR_0, VAR_3, VAR_4);
}
