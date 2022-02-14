
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {int data_block_quadlets; struct amdtp_ff* protocol; } ;
struct amdtp_ff {unsigned int pcm_channels; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct amdtp_stream *VAR_0,
         __le32 *VAR_1, unsigned int VAR_2)
{
 struct amdtp_ff *VAR_3 = VAR_0->protocol;
 unsigned int VAR_4, VAR_5, VAR_6 = VAR_3->pcm_channels;

 for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
  for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5)
   VAR_1[VAR_5] = FUNC_0(0x00000000);
  VAR_1 += VAR_0->data_block_quadlets;
 }
}
