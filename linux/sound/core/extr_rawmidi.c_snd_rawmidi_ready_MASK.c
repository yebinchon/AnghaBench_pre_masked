
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rawmidi_substream {struct snd_rawmidi_runtime* runtime; } ;
struct snd_rawmidi_runtime {scalar_t__ avail; scalar_t__ avail_min; } ;



__attribute__((used)) static inline int FUNC_0(struct snd_rawmidi_substream *VAR_0)
{
 struct snd_rawmidi_runtime *VAR_1 = VAR_0->runtime;

 return VAR_1->avail >= VAR_1->avail_min;
}
