
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {scalar_t__ prepare; scalar_t__ params; } ;
struct snd_pcm_runtime {TYPE_1__ oss; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;
typedef scalar_t__ snd_pcm_sframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct snd_pcm_substream*,int ,scalar_t__*) ;
 int FUNC_1 (struct snd_pcm_substream*,scalar_t__) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_oss_file *VAR_4)
{
 struct snd_pcm_substream *VAR_5;
 struct snd_pcm_runtime *VAR_6;
 snd_pcm_sframes_t VAR_7;
 int VAR_8;

 VAR_5 = VAR_4->streams[VAR_3];
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 if ((VAR_8 = FUNC_2(VAR_5)) < 0)
  return VAR_8;
 VAR_6 = VAR_5->runtime;
 if (VAR_6->oss.params || VAR_6->oss.prepare)
  return 0;
 VAR_8 = FUNC_0(VAR_5, VAR_2, &VAR_7);
 if (VAR_8 == -VAR_1)
  VAR_7 = 0;
 else if (VAR_8 < 0)
  return VAR_8;
 return FUNC_1(VAR_5, VAR_7);
}
