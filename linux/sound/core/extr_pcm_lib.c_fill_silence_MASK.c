
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* ops; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int format; } ;
struct TYPE_2__ {int (* fill_silence ) (struct snd_pcm_substream*,int,unsigned long,unsigned long) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*,unsigned long) ;
 int FUNC_1 (struct snd_pcm_runtime*,int,unsigned long) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct snd_pcm_substream*,int,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1, int VAR_2,
   unsigned long VAR_3, void *VAR_4, unsigned long VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_1->runtime;

 if (VAR_1->stream != VAR_0)
  return 0;
 if (VAR_1->ops->fill_silence)
  return VAR_1->ops->fill_silence(VAR_1, VAR_2,
          VAR_3, VAR_5);

 FUNC_2(VAR_6->format,
       FUNC_1(VAR_6, VAR_2, VAR_3),
       FUNC_0(VAR_6, VAR_5));
 return 0;
}
