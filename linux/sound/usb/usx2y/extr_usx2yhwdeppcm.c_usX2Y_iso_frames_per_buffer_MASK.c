
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usX2Ydev {int rate; } ;
struct snd_pcm_runtime {int buffer_size; } ;



__attribute__((used)) static inline int FUNC_0(struct snd_pcm_runtime *VAR_0,
           struct usX2Ydev * VAR_1)
{
 return (VAR_0->buffer_size * 1000) / VAR_1->rate + 1;
}
