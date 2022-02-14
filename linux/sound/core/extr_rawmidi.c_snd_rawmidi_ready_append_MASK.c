
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {int append; struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {size_t avail; size_t avail_min; } ;



__attribute__((used)) static inline int FUNC_0(struct snd_rawmidi_substream *VAR_0,
        size_t VAR_1)
{
 struct snd_rawmidi_runtime *VAR_2 = VAR_0->runtime;

 return VAR_2->avail >= VAR_2->avail_min &&
        (!VAR_0->append || VAR_2->avail >= VAR_1);
}
