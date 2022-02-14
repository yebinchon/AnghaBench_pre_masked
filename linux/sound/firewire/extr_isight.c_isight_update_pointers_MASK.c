
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_runtime {unsigned int buffer_size; scalar_t__ period_size; } ;
struct isight {unsigned int buffer_pointer; scalar_t__ period_counter; TYPE_1__* pcm; } ;
struct TYPE_2__ {struct snd_pcm_runtime* runtime; } ;


 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct isight *VAR_0, unsigned int VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->pcm->runtime;
 unsigned int VAR_3;

 FUNC_1();

 VAR_3 = VAR_0->buffer_pointer;
 VAR_3 += VAR_1;
 if (VAR_3 >= VAR_2->buffer_size)
  VAR_3 -= VAR_2->buffer_size;
 FUNC_0(VAR_0->buffer_pointer, VAR_3);

 VAR_0->period_counter += VAR_1;
 if (VAR_0->period_counter >= VAR_2->period_size) {
  VAR_0->period_counter -= VAR_2->period_size;
  FUNC_2(VAR_0->pcm);
 }
}
