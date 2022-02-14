
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pdacf {int ak4117; struct snd_pcm* pcm; TYPE_2__* card; } ;
struct snd_pcm {int nonatomic; TYPE_1__* streams; int name; scalar_t__ info_flags; struct snd_pdacf* private_data; } ;
struct TYPE_4__ {int shortname; } ;
struct TYPE_3__ {int substream; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*,char*,int ,int ,int,struct snd_pcm**) ;
 int FUNC_2 (struct snd_pcm*,size_t,int *) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct snd_pdacf *VAR_2)
{
 struct snd_pcm *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2->card, "PDAudioCF", 0, 0, 1, &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_2(VAR_3, VAR_0, &VAR_1);

 VAR_3->private_data = VAR_2;
 VAR_3->info_flags = 0;
 VAR_3->nonatomic = 1;
 FUNC_3(VAR_3->name, VAR_2->card->shortname);
 VAR_2->pcm = VAR_3;

 VAR_4 = FUNC_0(VAR_2->ak4117, VAR_3->streams[VAR_0].substream);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
