
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int dev_registered; TYPE_2__* card; TYPE_3__* dev; TYPE_1__* dpcm; } ;
struct device {int dummy; } ;
struct TYPE_10__ {int groups; int release; int parent; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int fe_clients; int be_clients; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_3__*,struct snd_soc_pcm_runtime*) ;
 int FUNC_3 (TYPE_3__*,char*,char const*) ;
 int FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct snd_soc_pcm_runtime *VAR_6, const char *VAR_7)
{
 int VAR_8 = 0;


 VAR_6->dev = FUNC_5(sizeof(struct device), VAR_1);
 if (!VAR_6->dev)
  return -VAR_0;
 VAR_6->dev->parent = VAR_6->card->dev;
 VAR_6->dev->release = VAR_5;
 VAR_6->dev->groups = VAR_4;
 FUNC_3(VAR_6->dev, "%s", VAR_7);
 FUNC_2(VAR_6->dev, VAR_6);
 FUNC_0(&VAR_6->dpcm[VAR_3].be_clients);
 FUNC_0(&VAR_6->dpcm[VAR_2].be_clients);
 FUNC_0(&VAR_6->dpcm[VAR_3].fe_clients);
 FUNC_0(&VAR_6->dpcm[VAR_2].fe_clients);
 VAR_8 = FUNC_4(VAR_6->dev);
 if (VAR_8 < 0) {

  FUNC_6(VAR_6->dev);
  FUNC_1(VAR_6->card->dev,
   "ASoC: failed to register runtime device: %d\n", VAR_8);
  return VAR_8;
 }
 VAR_6->dev_registered = 1;
 return 0;
}
