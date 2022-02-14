
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {int data_block_quadlets; struct amdtp_am824* protocol; } ;
struct amdtp_am824 {unsigned int pcm_channels; size_t* pcm_positions; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct amdtp_stream *VAR_0,
         __be32 *VAR_1, unsigned int VAR_2)
{
 struct amdtp_am824 *VAR_3 = VAR_0->protocol;
 unsigned int VAR_4, VAR_5, VAR_6 = VAR_3->pcm_channels;

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5)
   VAR_1[VAR_3->pcm_positions[VAR_5]] = FUNC_0(0x40000000);
  VAR_1 += VAR_0->data_block_quadlets;
 }
}
