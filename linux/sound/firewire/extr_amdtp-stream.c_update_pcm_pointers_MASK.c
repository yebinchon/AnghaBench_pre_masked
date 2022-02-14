
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct amdtp_stream {unsigned int pcm_buffer_pointer; scalar_t__ pcm_period_pointer; int period_tasklet; } ;
struct TYPE_2__ {unsigned int buffer_size; scalar_t__ period_size; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct amdtp_stream *VAR_0,
    struct snd_pcm_substream *VAR_1,
    unsigned int VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = VAR_0->pcm_buffer_pointer + VAR_2;
 if (VAR_3 >= VAR_1->runtime->buffer_size)
  VAR_3 -= VAR_1->runtime->buffer_size;
 FUNC_0(VAR_0->pcm_buffer_pointer, VAR_3);

 VAR_0->pcm_period_pointer += VAR_2;
 if (VAR_0->pcm_period_pointer >= VAR_1->runtime->period_size) {
  VAR_0->pcm_period_pointer -= VAR_1->runtime->period_size;
  FUNC_1(&VAR_0->period_tasklet);
 }
}
