
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_tscm {unsigned int pcm_channels; } ;
struct amdtp_stream {int data_block_quadlets; struct amdtp_tscm* protocol; } ;
typedef int __be32 ;



__attribute__((used)) static void FUNC_0(struct amdtp_stream *VAR_0, __be32 *VAR_1,
         unsigned int VAR_2)
{
 struct amdtp_tscm *VAR_3 = VAR_0->protocol;
 unsigned int VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_3->pcm_channels;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
   VAR_1[VAR_6] = 0x00000000;
  VAR_1 += VAR_0->data_block_quadlets;
 }
}
