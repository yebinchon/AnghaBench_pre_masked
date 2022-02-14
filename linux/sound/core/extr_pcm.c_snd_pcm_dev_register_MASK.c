
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_substream* next; } ;
struct snd_pcm {TYPE_1__* streams; int list; int device; int card; } ;
struct snd_device {struct snd_pcm* device_data; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (struct snd_pcm*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct snd_pcm*) ;
 int * VAR_5 ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int,int ,int ,int *,struct snd_pcm*,int *) ;

__attribute__((used)) static int FUNC_8(struct snd_device *VAR_6)
{
 int VAR_7, VAR_8;
 struct snd_pcm_substream *VAR_9;
 struct snd_pcm *VAR_10;

 if (FUNC_4(!VAR_6 || !VAR_6->device_data))
  return -VAR_0;
 VAR_10 = VAR_6->device_data;

 FUNC_1(&VAR_4);
 VAR_8 = FUNC_5(VAR_10);
 if (VAR_8)
  goto unlock;
 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  int VAR_11 = -1;
  if (VAR_10->streams[VAR_7].substream == ((void*)0))
   continue;
  switch (VAR_7) {
  case 128:
   VAR_11 = VAR_2;
   break;
  case 129:
   VAR_11 = VAR_1;
   break;
  }

  VAR_8 = FUNC_7(VAR_11, VAR_10->card, VAR_10->device,
       &VAR_5[VAR_7], VAR_10,
       &VAR_10->streams[VAR_7].dev);
  if (VAR_8 < 0) {
   FUNC_0(&VAR_10->list);
   goto unlock;
  }

  for (VAR_9 = VAR_10->streams[VAR_7].substream; VAR_9; VAR_9 = VAR_9->next)
   FUNC_6(VAR_9);
 }

 FUNC_3(VAR_10, VAR_3);

 unlock:
 FUNC_2(&VAR_4);
 return VAR_8;
}
