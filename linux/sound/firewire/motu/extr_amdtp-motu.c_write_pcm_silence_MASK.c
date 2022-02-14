
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct amdtp_stream {int data_block_quadlets; struct amdtp_motu* protocol; } ;
struct amdtp_motu {unsigned int pcm_chunks; int pcm_byte_offset; } ;
typedef int __be32 ;



__attribute__((used)) static void FUNC_0(struct amdtp_stream *VAR_0, __be32 *VAR_1,
         unsigned int VAR_2)
{
 struct amdtp_motu *VAR_3 = VAR_0->protocol;
 unsigned int VAR_4, VAR_5, VAR_6;
 u8 *VAR_7;

 VAR_4 = VAR_3->pcm_chunks;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  VAR_7 = (u8 *)VAR_1 + VAR_3->pcm_byte_offset;

  for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
   VAR_7[0] = 0;
   VAR_7[1] = 0;
   VAR_7[2] = 0;
   VAR_7 += 3;
  }

  VAR_1 += VAR_0->data_block_quadlets;
 }
}
