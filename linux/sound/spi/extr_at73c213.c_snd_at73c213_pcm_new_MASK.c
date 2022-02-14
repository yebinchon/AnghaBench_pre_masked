
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm {int name; int info_flags; struct snd_at73c213* private_data; } ;
struct snd_at73c213 {TYPE_2__* ssc; struct snd_pcm* pcm; TYPE_3__* card; } ;
struct TYPE_6__ {int shortname; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm*,int ,int *,int,int) ;
 int FUNC_1 (TYPE_3__*,int ,int,int,int ,struct snd_pcm**) ;
 int FUNC_2 (struct snd_pcm*,int ,int *) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct snd_at73c213 *VAR_4, int VAR_5)
{
 struct snd_pcm *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4->card, VAR_4->card->shortname,
   VAR_5, 1, 0, &VAR_6);
 if (VAR_7 < 0)
  goto out;

 VAR_6->private_data = VAR_4;
 VAR_6->info_flags = VAR_1;
 FUNC_3(VAR_6->name, "at73c213");
 VAR_4->pcm = VAR_6;

 FUNC_2(VAR_6, VAR_2, &VAR_3);

 FUNC_0(VAR_4->pcm,
   VAR_0, &VAR_4->ssc->pdev->dev,
   64 * 1024, 64 * 1024);
out:
 return VAR_7;
}
