
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap {int num; } ;
struct mp_audio_buffer {int format; int srate; int sstride; int num_planes; struct mp_chmap channels; scalar_t__ num_samples; scalar_t__ allocated; int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct mp_audio_buffer *VAR_1, int VAR_2,
                                const struct mp_chmap *VAR_3, int VAR_4)
{
    for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
        FUNC_0(&VAR_1->data[VAR_5]);
    VAR_1->format = VAR_2;
    VAR_1->channels = *VAR_3;
    VAR_1->srate = VAR_4;
    VAR_1->allocated = 0;
    VAR_1->num_samples = 0;
    VAR_1->sstride = FUNC_2(VAR_1->format);
    VAR_1->num_planes = 1;
    if (FUNC_1(VAR_1->format)) {
        VAR_1->num_planes = VAR_1->channels.num;
    } else {
        VAR_1->sstride *= VAR_1->channels.num;
    }
}
