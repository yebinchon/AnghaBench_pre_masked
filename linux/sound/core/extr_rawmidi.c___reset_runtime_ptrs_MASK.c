
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_runtime {int buffer_size; int avail; scalar_t__ hw_ptr; scalar_t__ appl_ptr; scalar_t__ drain; } ;



__attribute__((used)) static void FUNC_0(struct snd_rawmidi_runtime *VAR_0,
     bool VAR_1)
{
 VAR_0->drain = 0;
 VAR_0->appl_ptr = VAR_0->hw_ptr = 0;
 VAR_0->avail = VAR_1 ? 0 : VAR_0->buffer_size;
}
