
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* output_buffer; scalar_t__ context; } ;
typedef TYPE_1__ audio_resampler_t ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__*) ;

void FUNC_3(audio_resampler_t *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->context)
   FUNC_2(&VAR_0->context);
  if (VAR_0->output_buffer[0])
   FUNC_0(&VAR_0->output_buffer[0]);

  FUNC_1(VAR_0);
 }
}
