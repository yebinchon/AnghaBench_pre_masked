
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int buffer_size; scalar_t__ dma_area; } ;
struct amdtp_stream {unsigned int pcm_buffer_pointer; int data_block_quadlets; struct amdtp_motu* protocol; } ;
struct amdtp_motu {unsigned int pcm_chunks; int pcm_byte_offset; } ;
typedef int __be32 ;


 int FUNC_0 (struct snd_pcm_runtime*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct amdtp_stream *VAR_0, struct snd_pcm_substream *VAR_1,
    __be32 *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4)
{
 struct amdtp_motu *VAR_5 = VAR_0->protocol;
 unsigned int VAR_6 = VAR_5->pcm_chunks;
 struct snd_pcm_runtime *VAR_7 = VAR_1->runtime;
 unsigned int VAR_8;
 int VAR_9;
 u8 *VAR_10;
 u32 *VAR_11;
 int VAR_12, VAR_13;

 VAR_8 = VAR_0->pcm_buffer_pointer + VAR_4;
 VAR_8 %= VAR_7->buffer_size;

 VAR_11 = (void *)VAR_7->dma_area +
    FUNC_0(VAR_7, VAR_8);
 VAR_9 = VAR_7->buffer_size - VAR_8;

 for (VAR_12 = 0; VAR_12 < VAR_3; ++VAR_12) {
  VAR_10 = (u8 *)VAR_2 + VAR_5->pcm_byte_offset;

  for (VAR_13 = 0; VAR_13 < VAR_6; ++VAR_13) {
   *VAR_11 = (VAR_10[0] << 24) |
          (VAR_10[1] << 16) |
          (VAR_10[2] << 8);
   VAR_10 += 3;
   VAR_11++;
  }
  VAR_2 += VAR_0->data_block_quadlets;
  if (--VAR_9 == 0)
   VAR_11 = (void *)VAR_7->dma_area;
 }
}
