
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct snd_dbri {TYPE_1__* op; } ;
struct dbri_streaminfo {int pipe; scalar_t__ dvma_buffer; } ;
struct TYPE_4__ {int buffer_size; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 struct dbri_streaminfo* FUNC_0 (struct snd_dbri*,struct snd_pcm_substream*) ;
 scalar_t__ FUNC_1 (struct snd_pcm_substream*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,scalar_t__,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct snd_dbri*,int) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 struct snd_dbri* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_4)
{
 struct snd_dbri *VAR_5 = FUNC_6(VAR_4);
 struct dbri_streaminfo *VAR_6 = FUNC_0(VAR_5, VAR_4);
 int VAR_7;

 FUNC_3(VAR_3, "hw_free.\n");



 if (VAR_6->dvma_buffer) {
  if (FUNC_1(VAR_4) == VAR_0)
   VAR_7 = VAR_2;
  else
   VAR_7 = VAR_1;

  FUNC_2(&VAR_5->op->dev, VAR_6->dvma_buffer,
     VAR_4->runtime->buffer_size, VAR_7);
  VAR_6->dvma_buffer = 0;
 }
 if (VAR_6->pipe != -1) {
  FUNC_4(VAR_5, VAR_6->pipe);
  VAR_6->pipe = -1;
 }

 return FUNC_5(VAR_4);
}
