
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct pkt_desc {unsigned int data_blocks; int data_block_counter; int * ctx_payload; } ;
struct amdtp_stream {struct amdtp_am824* protocol; } ;
struct amdtp_am824 {unsigned int frame_multiplier; scalar_t__ midi_ports; } ;
typedef int __be32 ;


 int FUNC_0 (struct amdtp_stream*,int *,unsigned int,int ) ;
 int FUNC_1 (struct amdtp_stream*,struct snd_pcm_substream*,int *,unsigned int,unsigned int) ;
 int FUNC_2 (struct amdtp_stream*,int *,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(struct amdtp_stream *VAR_0,
         const struct pkt_desc *VAR_1,
         unsigned int VAR_2,
         struct snd_pcm_substream *VAR_3)
{
 struct amdtp_am824 *VAR_4 = VAR_0->protocol;
 unsigned int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
  const struct pkt_desc *VAR_7 = VAR_1 + VAR_6;
  __be32 *VAR_8 = VAR_7->ctx_payload;
  unsigned int VAR_9 = VAR_7->data_blocks;

  if (VAR_3) {
   FUNC_1(VAR_0, VAR_3, VAR_8, VAR_9, VAR_5);
   VAR_5 += VAR_9 * VAR_4->frame_multiplier;
  } else {
   FUNC_2(VAR_0, VAR_8, VAR_9);
  }

  if (VAR_4->midi_ports) {
   FUNC_0(VAR_0, VAR_8, VAR_9,
         VAR_7->data_block_counter);
  }
 }

 return VAR_5;
}
