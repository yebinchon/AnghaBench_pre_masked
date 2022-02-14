
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int delay; } ;
struct TYPE_2__ {scalar_t__ bufsize; struct snd_pcm_substream* substream; } ;
struct azx_dev {TYPE_1__ core; scalar_t__ insufficient; } ;
struct azx {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct azx_dev*) ;
 int FUNC_1 (struct snd_pcm_runtime*,unsigned int) ;
 unsigned int FUNC_2 (struct snd_pcm_runtime*,int ) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct azx *VAR_2, struct azx_dev *VAR_3)
{
 struct snd_pcm_substream *VAR_4 = VAR_3->core.substream;
 struct snd_pcm_runtime *VAR_5 = VAR_4->runtime;
 unsigned int VAR_6, VAR_7;

 VAR_6 = FUNC_3(FUNC_0(VAR_3));
 if (!VAR_5)
  return VAR_6;

 VAR_5->delay = VAR_0;
 VAR_7 = FUNC_2(VAR_5, VAR_0);
 if (VAR_3->insufficient) {
  if (VAR_6 < VAR_7) {
   VAR_7 = VAR_6;
   VAR_5->delay = FUNC_1(VAR_5, VAR_6);
  } else {
   VAR_3->insufficient = 0;
  }
 }


 if (VAR_4->stream == VAR_1) {
  if (VAR_6 < VAR_7)
   VAR_6 += VAR_3->core.bufsize;
  VAR_6 -= VAR_7;
 }

 return VAR_6;
}
