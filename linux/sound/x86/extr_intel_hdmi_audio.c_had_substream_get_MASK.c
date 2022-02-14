
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int substream_refcount; struct snd_pcm_substream* substream; } ;
struct snd_intelhad {int had_spinlock; TYPE_1__ stream_info; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static struct snd_pcm_substream *
FUNC_2(struct snd_intelhad *VAR_0)
{
 struct snd_pcm_substream *VAR_1;
 unsigned long VAR_2;

 FUNC_0(&VAR_0->had_spinlock, VAR_2);
 VAR_1 = VAR_0->stream_info.substream;
 if (VAR_1)
  VAR_0->stream_info.substream_refcount++;
 FUNC_1(&VAR_0->had_spinlock, VAR_2);
 return VAR_1;
}
