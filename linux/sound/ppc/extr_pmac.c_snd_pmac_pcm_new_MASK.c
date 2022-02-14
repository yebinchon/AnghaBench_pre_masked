
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cur_freqs; int cur_formats; } ;
struct TYPE_5__ {int cur_freqs; int cur_formats; } ;
struct snd_pmac {TYPE_3__* pdev; int freqs_ok; TYPE_2__ capture; TYPE_1__ playback; int formats_ok; scalar_t__ can_byte_swap; struct snd_pcm* pcm; TYPE_4__* card; scalar_t__ can_capture; } ;
struct snd_pcm {int name; int info_flags; struct snd_pmac* private_data; } ;
struct TYPE_8__ {int shortname; int driver; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_pcm*,int ,int *,int,int) ;
 int FUNC_1 (TYPE_4__*,int ,int ,int,int,struct snd_pcm**) ;
 int FUNC_2 (struct snd_pcm*,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct snd_pmac *VAR_8)
{
 struct snd_pcm *VAR_9;
 int VAR_10;
 int VAR_11 = 1;

 if (! VAR_8->can_capture)
  VAR_11 = 0;
 VAR_10 = FUNC_1(VAR_8->card, VAR_8->card->driver, 0, 1, VAR_11, &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_2(VAR_9, VAR_5, &VAR_7);
 if (VAR_8->can_capture)
  FUNC_2(VAR_9, VAR_4, &VAR_6);

 VAR_9->private_data = VAR_8;
 VAR_9->info_flags = VAR_3;
 FUNC_3(VAR_9->name, VAR_8->card->shortname);
 VAR_8->pcm = VAR_9;

 VAR_8->formats_ok = VAR_1;
 if (VAR_8->can_byte_swap)
  VAR_8->formats_ok |= VAR_2;

 VAR_8->playback.cur_formats = VAR_8->formats_ok;
 VAR_8->capture.cur_formats = VAR_8->formats_ok;
 VAR_8->playback.cur_freqs = VAR_8->freqs_ok;
 VAR_8->capture.cur_freqs = VAR_8->freqs_ok;


 FUNC_0(VAR_9, VAR_0,
           &VAR_8->pdev->dev,
           64 * 1024, 64 * 1024);

 return 0;
}
