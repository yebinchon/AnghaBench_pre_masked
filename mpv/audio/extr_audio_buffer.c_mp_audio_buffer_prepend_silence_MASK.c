
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_audio_buffer {int num_planes; int sstride; int format; int * data; scalar_t__ num_samples; } ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mp_audio_buffer*,int *,int,int *,int ,scalar_t__) ;
 int FUNC_3 (struct mp_audio_buffer*,scalar_t__) ;

void FUNC_4(struct mp_audio_buffer *VAR_0, int VAR_1)
{
    FUNC_1(VAR_1 >= 0);
    FUNC_3(VAR_0, VAR_0->num_samples + VAR_1);
    FUNC_2(VAR_0, VAR_0->data, VAR_1, VAR_0->data, 0, VAR_0->num_samples);
    VAR_0->num_samples += VAR_1;
    for (int VAR_2 = 0; VAR_2 < VAR_0->num_planes; VAR_2++)
        FUNC_0(VAR_0->data[VAR_2], VAR_1 * VAR_0->sstride, VAR_0->format);
}
