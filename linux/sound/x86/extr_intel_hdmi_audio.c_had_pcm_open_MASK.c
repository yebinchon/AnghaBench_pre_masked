
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct TYPE_2__ {int substream_refcount; struct snd_pcm_substream* substream; } ;
struct snd_intelhad {int dev; int had_spinlock; TYPE_1__ stream_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snd_pcm_runtime*,int ) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ,int ,int) ;
 struct snd_intelhad* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_3)
{
 struct snd_intelhad *VAR_4;
 struct snd_pcm_runtime *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_6(VAR_3);
 VAR_5 = VAR_3->runtime;

 FUNC_0(VAR_4->dev);


 VAR_5->hw = VAR_2;

 VAR_6 = FUNC_3(VAR_5,
    VAR_0);
 if (VAR_6 < 0)
  goto error;




 VAR_6 = FUNC_5(VAR_3->runtime, 0,
   VAR_1, 64);
 if (VAR_6 < 0)
  goto error;

 VAR_6 = FUNC_4(VAR_5, 0, 32, 24);
 if (VAR_6 < 0)
  goto error;


 FUNC_7(&VAR_4->had_spinlock);
 VAR_4->stream_info.substream = VAR_3;
 VAR_4->stream_info.substream_refcount++;
 FUNC_8(&VAR_4->had_spinlock);

 return VAR_6;
 error:
 FUNC_1(VAR_4->dev);
 FUNC_2(VAR_4->dev);
 return VAR_6;
}
