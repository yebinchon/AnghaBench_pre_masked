
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; TYPE_1__* card; } ;
struct snd_pcm {int dummy; } ;
struct snd_card {int dev; } ;
struct TYPE_6__ {int tasklet; } ;
struct TYPE_5__ {int tasklet; } ;
struct siu_port {TYPE_3__ capture; TYPE_2__ playback; struct snd_pcm* pcm; } ;
struct siu_info {int port_id; } ;
struct platform_device {int id; } ;
struct TYPE_4__ {struct snd_card* snd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 struct siu_info* VAR_4 ;
 int FUNC_1 (int,struct siu_port**,struct snd_card*) ;
 int VAR_5 ;
 struct siu_port** VAR_6 ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ,unsigned long) ;
 struct platform_device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_7)
{

 struct snd_card *VAR_8 = VAR_7->card->snd_card;
 struct snd_pcm *VAR_9 = VAR_7->pcm;
 struct siu_info *VAR_10 = VAR_4;
 struct platform_device *VAR_11 = FUNC_4(VAR_8->dev);
 int VAR_12;
 int VAR_13;


 if (VAR_11->id < 0 || VAR_11->id >= VAR_2)
  return -VAR_0;

 VAR_10->port_id = VAR_11->id;







 for (VAR_13 = VAR_11->id; VAR_13 < VAR_11->id + 1; VAR_13++) {
  struct siu_port **VAR_14 = &VAR_6[VAR_13];

  VAR_12 = FUNC_1(VAR_13, VAR_14, VAR_8);
  if (VAR_12 < 0)
   return VAR_12;

  FUNC_2(VAR_9,
    VAR_3, VAR_8->dev,
    VAR_1, VAR_1);

  (*VAR_14)->pcm = VAR_9;


  FUNC_3(&(*VAR_14)->playback.tasklet, VAR_5,
        (unsigned long)&(*VAR_14)->playback);
  FUNC_3(&(*VAR_14)->capture.tasklet, VAR_5,
        (unsigned long)&(*VAR_14)->capture);
 }

 FUNC_0(VAR_8->dev, "SuperH SIU driver initialized.\n");
 return 0;
}
