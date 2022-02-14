
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm* pcm; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;
struct snd_pcm {TYPE_1__* card; int open_wait; int open_mutex; } ;
struct inode {int dummy; } ;
struct file {struct snd_pcm_oss_file* private_data; } ;
struct TYPE_2__ {int module; int shutdown; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*,struct file*) ;
 int FUNC_5 (struct snd_pcm_oss_file*) ;
 int FUNC_6 (struct snd_pcm_oss_file*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3, struct file *VAR_4)
{
 struct snd_pcm *VAR_5;
 struct snd_pcm_substream *VAR_6;
 struct snd_pcm_oss_file *VAR_7;

 VAR_7 = VAR_4->private_data;
 VAR_6 = VAR_7->streams[VAR_2];
 if (VAR_6 == ((void*)0))
  VAR_6 = VAR_7->streams[VAR_1];
 if (FUNC_3(!VAR_6))
  return -VAR_0;
 VAR_5 = VAR_6->pcm;
 if (!VAR_5->card->shutdown)
  FUNC_6(VAR_7);
 FUNC_1(&VAR_5->open_mutex);
 FUNC_5(VAR_7);
 FUNC_2(&VAR_5->open_mutex);
 FUNC_7(&VAR_5->open_wait);
 FUNC_0(VAR_5->card->module);
 FUNC_4(VAR_5->card, VAR_4);
 return 0;
}
