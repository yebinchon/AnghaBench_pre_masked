
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct hdac_ext_stream {int dummy; } ;
struct TYPE_2__ {struct hdac_ext_stream* private_data; } ;



__attribute__((used)) static inline
struct hdac_ext_stream *FUNC_0(struct snd_pcm_substream *VAR_0)
{
 return VAR_0->runtime->private_data;
}
