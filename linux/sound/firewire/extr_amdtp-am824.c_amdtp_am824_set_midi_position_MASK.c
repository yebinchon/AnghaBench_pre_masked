
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {struct amdtp_am824* protocol; } ;
struct amdtp_am824 {unsigned int midi_position; } ;



void FUNC_0(struct amdtp_stream *VAR_0,
       unsigned int VAR_1)
{
 struct amdtp_am824 *VAR_2 = VAR_0->protocol;

 VAR_2->midi_position = VAR_1;
}
