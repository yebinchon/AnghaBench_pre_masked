
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_compr_stream {int error_work; TYPE_1__* runtime; } ;
typedef scalar_t__ snd_pcm_state_t ;
struct TYPE_2__ {scalar_t__ state; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_0 ;

int FUNC_2(struct snd_compr_stream *VAR_1,
    snd_pcm_state_t VAR_2)
{
 if (VAR_1->runtime->state == VAR_2)
  return 0;

 VAR_1->runtime->state = VAR_2;

 FUNC_0("Changing state to: %d\n", VAR_2);

 FUNC_1(VAR_0, &VAR_1->error_work, 0);

 return 0;
}
