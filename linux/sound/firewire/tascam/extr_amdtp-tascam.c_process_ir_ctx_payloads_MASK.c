
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct pkt_desc {unsigned int data_blocks; int * ctx_payload; } ;
struct amdtp_stream {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (struct amdtp_stream*,struct snd_pcm_substream*,int *,unsigned int,unsigned int) ;
 int FUNC_1 (struct amdtp_stream*,int *,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct amdtp_stream *VAR_0,
         const struct pkt_desc *VAR_1,
         unsigned int VAR_2,
         struct snd_pcm_substream *VAR_3)
{
 unsigned int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  const struct pkt_desc *VAR_6 = VAR_1 + VAR_5;
  __be32 *VAR_7 = VAR_6->ctx_payload;
  unsigned int VAR_8 = VAR_6->data_blocks;

  if (VAR_3) {
   FUNC_0(VAR_0, VAR_3, VAR_7, VAR_8, VAR_4);
   VAR_4 += VAR_8;
  }

  FUNC_1(VAR_0, VAR_7, VAR_8);
 }

 return VAR_4;
}
