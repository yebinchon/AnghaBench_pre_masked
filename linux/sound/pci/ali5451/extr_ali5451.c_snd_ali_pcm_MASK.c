
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm {int name; int dev_subclass; int dev_class; scalar_t__ info_flags; int private_free; struct snd_ali* private_data; } ;
struct snd_ali {struct snd_pcm** pcm; int pci; TYPE_1__* card; } ;
struct ali_pcm_description {int name; int class; scalar_t__ capture_ops; scalar_t__ playback_ops; int capture_num; int playback_num; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct snd_pcm*,int ,int ,int,int) ;
 int FUNC_3 (TYPE_1__*,int ,int,int ,int ,struct snd_pcm**) ;
 int FUNC_4 (struct snd_pcm*,int ,scalar_t__) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_ali *VAR_5, int VAR_6,
         struct ali_pcm_description *VAR_7)
{
 struct snd_pcm *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_5->card, VAR_7->name, VAR_6,
     VAR_7->playback_num, VAR_7->capture_num, &VAR_8);
 if (VAR_9 < 0) {
  FUNC_0(VAR_5->card->dev,
   "snd_ali_pcm: err called snd_pcm_new.\n");
  return VAR_9;
 }
 VAR_8->private_data = VAR_5;
 VAR_8->private_free = VAR_4;
 if (VAR_7->playback_ops)
  FUNC_4(VAR_8, VAR_2,
    VAR_7->playback_ops);
 if (VAR_7->capture_ops)
  FUNC_4(VAR_8, VAR_1,
    VAR_7->capture_ops);

 FUNC_2(VAR_8, VAR_0,
           FUNC_1(VAR_5->pci),
           64*1024, 128*1024);

 VAR_8->info_flags = 0;
 VAR_8->dev_class = VAR_7->class;
 VAR_8->dev_subclass = VAR_3;
 FUNC_5(VAR_8->name, VAR_7->name);
 VAR_5->pcm[0] = VAR_8;
 return 0;
}
