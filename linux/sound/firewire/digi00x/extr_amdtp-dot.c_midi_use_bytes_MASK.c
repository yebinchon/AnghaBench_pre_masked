
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {size_t sfc; struct amdtp_dot* protocol; } ;
struct amdtp_dot {unsigned int* midi_fifo_used; } ;


 unsigned int* VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct amdtp_stream *VAR_1,
      unsigned int VAR_2, unsigned int VAR_3)
{
 struct amdtp_dot *VAR_4 = VAR_1->protocol;

 VAR_4->midi_fifo_used[VAR_2] += VAR_0[VAR_1->sfc] * VAR_3;
}
