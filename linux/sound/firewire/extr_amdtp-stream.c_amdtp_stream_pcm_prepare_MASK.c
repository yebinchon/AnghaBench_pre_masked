
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {scalar_t__ pcm_period_pointer; scalar_t__ pcm_buffer_pointer; int period_tasklet; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct amdtp_stream *VAR_0)
{
 FUNC_0(&VAR_0->period_tasklet);
 VAR_0->pcm_buffer_pointer = 0;
 VAR_0->pcm_period_pointer = 0;
}
