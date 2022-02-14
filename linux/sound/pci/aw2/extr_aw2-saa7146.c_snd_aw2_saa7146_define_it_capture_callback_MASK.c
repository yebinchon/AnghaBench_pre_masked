
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ snd_aw2_saa7146_it_cb ;
struct TYPE_2__ {void* p_callback_param; scalar_t__ p_it_callback; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_0(unsigned int VAR_2,
      snd_aw2_saa7146_it_cb
      VAR_3,
      void *VAR_4)
{
 if (VAR_2 < VAR_0) {
  VAR_1[VAR_2].p_it_callback =
      (snd_aw2_saa7146_it_cb) VAR_3;
  VAR_1[VAR_2].p_callback_param =
      (void *)VAR_4;
 }
}
