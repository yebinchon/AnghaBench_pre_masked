
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {size_t sfc; struct amdtp_am824* protocol; } ;
struct amdtp_am824 {int * midi_fifo_used; } ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct amdtp_stream *VAR_1, unsigned int VAR_2)
{
 struct amdtp_am824 *VAR_3 = VAR_1->protocol;

 VAR_3->midi_fifo_used[VAR_2] += VAR_0[VAR_1->sfc];
}
