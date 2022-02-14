
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mp_audio_buffer {scalar_t__ num_samples; int data; } ;


 int FUNC_0 (struct mp_audio_buffer*,int ,scalar_t__,int **,int ,int) ;
 int FUNC_1 (struct mp_audio_buffer*,scalar_t__) ;

void FUNC_2(struct mp_audio_buffer *VAR_0, void **VAR_1, int VAR_2)
{
    FUNC_1(VAR_0, VAR_0->num_samples + VAR_2);
    FUNC_0(VAR_0, VAR_0->data, VAR_0->num_samples, (uint8_t **)VAR_1, 0, VAR_2);
    VAR_0->num_samples += VAR_2;
}
