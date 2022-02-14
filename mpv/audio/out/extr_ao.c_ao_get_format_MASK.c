
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap {int dummy; } ;
struct ao {int samplerate; int format; struct mp_chmap channels; } ;



void FUNC_0(struct ao *VAR_0,
                   int *VAR_1, int *VAR_2, struct mp_chmap *VAR_3)
{
    *VAR_1 = VAR_0->samplerate;
    *VAR_2 = VAR_0->format;
    *VAR_3 = VAR_0->channels;
}
