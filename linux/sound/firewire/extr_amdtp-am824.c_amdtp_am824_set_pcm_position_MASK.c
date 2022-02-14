
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {struct amdtp_am824* protocol; } ;
struct amdtp_am824 {unsigned int pcm_channels; unsigned int* pcm_positions; } ;



void FUNC_0(struct amdtp_stream *VAR_0, unsigned int VAR_1,
     unsigned int VAR_2)
{
 struct amdtp_am824 *VAR_3 = VAR_0->protocol;

 if (VAR_1 < VAR_3->pcm_channels)
  VAR_3->pcm_positions[VAR_1] = VAR_2;
}
