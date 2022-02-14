
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; struct snd_pcm_substream* next; } ;
struct snd_pcm {int open_mutex; TYPE_3__* streams; int list; int open_wait; } ;
struct snd_device {struct snd_pcm* device_data; } ;
struct TYPE_6__ {int dev; struct snd_pcm_substream* substream; } ;
struct TYPE_5__ {int tsleep; int sleep; TYPE_1__* status; } ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (struct snd_pcm*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct snd_pcm_substream*,int ) ;
 int FUNC_7 (struct snd_pcm_substream*) ;
 int FUNC_8 (struct snd_pcm_substream*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct snd_device *VAR_3)
{
 struct snd_pcm *VAR_4 = VAR_3->device_data;
 struct snd_pcm_substream *VAR_5;
 int VAR_6;

 FUNC_2(&VAR_2);
 FUNC_2(&VAR_4->open_mutex);
 FUNC_10(&VAR_4->open_wait);
 FUNC_1(&VAR_4->list);
 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  for (VAR_5 = VAR_4->streams[VAR_6].substream; VAR_5; VAR_5 = VAR_5->next) {
   FUNC_7(VAR_5);
   if (VAR_5->runtime) {
    if (FUNC_5(VAR_5))
     FUNC_6(VAR_5,
           VAR_0);

    VAR_5->runtime->status->state = VAR_0;
    FUNC_10(&VAR_5->runtime->sleep);
    FUNC_10(&VAR_5->runtime->tsleep);
   }
   FUNC_8(VAR_5);
  }
 }

 FUNC_4(VAR_4, VAR_1);
 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  FUNC_9(&VAR_4->streams[VAR_6].dev);
  FUNC_0(&VAR_4->streams[VAR_6]);
 }
 FUNC_3(&VAR_4->open_mutex);
 FUNC_3(&VAR_2);
 return 0;
}
