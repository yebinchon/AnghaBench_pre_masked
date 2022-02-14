
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mp_audio_buffer {int num_samples; int ** data; } ;



void FUNC_0(struct mp_audio_buffer *VAR_0, uint8_t ***VAR_1,
                          int *VAR_2)
{
    *VAR_1 = VAR_0->data;
    *VAR_2 = VAR_0->num_samples;
}
