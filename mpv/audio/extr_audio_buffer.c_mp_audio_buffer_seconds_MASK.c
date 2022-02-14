
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_audio_buffer {double num_samples; scalar_t__ srate; } ;



double FUNC_0(struct mp_audio_buffer *VAR_0)
{
    return VAR_0->num_samples / (double)VAR_0->srate;
}
