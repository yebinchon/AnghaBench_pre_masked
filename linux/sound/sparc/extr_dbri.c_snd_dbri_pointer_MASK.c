
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_dbri {int dummy; } ;
struct dbri_streaminfo {int offset; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {int buffer_size; } ;


 struct dbri_streaminfo* FUNC_0 (struct snd_dbri*,struct snd_pcm_substream*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,char*,int,int) ;
 struct snd_dbri* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_dbri *VAR_2 = FUNC_3(VAR_1);
 struct dbri_streaminfo *VAR_3 = FUNC_0(VAR_2, VAR_1);
 snd_pcm_uframes_t VAR_4;

 VAR_4 = FUNC_1(VAR_1->runtime, VAR_3->offset)
  % VAR_1->runtime->buffer_size;
 FUNC_2(VAR_0, "I/O pointer: %ld frames of %ld.\n",
  VAR_4, VAR_1->runtime->buffer_size);
 return VAR_4;
}
