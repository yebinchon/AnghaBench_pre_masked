
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_audio_buffer {int num_samples; int data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mp_audio_buffer*,int ,int,int ,int,int) ;
 int FUNC_2 (struct mp_audio_buffer*,int) ;

void FUNC_3(struct mp_audio_buffer *VAR_0, int VAR_1)
{
    FUNC_0(VAR_1 >= 0 && VAR_1 <= VAR_0->num_samples);
    FUNC_2(VAR_0, VAR_0->num_samples + VAR_1);
    FUNC_1(VAR_0, VAR_0->data, VAR_0->num_samples,
                VAR_0->data, VAR_0->num_samples - VAR_1, VAR_1);
    VAR_0->num_samples += VAR_1;
}
