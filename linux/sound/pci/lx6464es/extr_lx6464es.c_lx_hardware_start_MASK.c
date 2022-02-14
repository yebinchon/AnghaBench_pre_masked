
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
struct lx6464es {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct lx6464es*,int ,int) ;
 int FUNC_3 (struct lx6464es*,int ,int) ;
 int FUNC_4 (struct lx6464es*,struct snd_pcm_runtime*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct lx6464es *VAR_1,
        struct snd_pcm_substream *VAR_2)
{
 int VAR_3 = 0;
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 int VAR_5 = (VAR_2->stream == VAR_0);

 FUNC_0(VAR_1->card->dev, "setting stream format\n");
 VAR_3 = FUNC_4(VAR_1, VAR_4, 0, VAR_5);
 if (VAR_3 < 0) {
  FUNC_1(VAR_1->card->dev, "setting stream format failed\n");
  return VAR_3;
 }

 FUNC_0(VAR_1->card->dev, "starting pipe\n");
 VAR_3 = FUNC_2(VAR_1, 0, VAR_5);
 if (VAR_3 < 0) {
  FUNC_1(VAR_1->card->dev, "starting pipe failed\n");
  return VAR_3;
 }

 FUNC_0(VAR_1->card->dev, "waiting for pipe to start\n");
 VAR_3 = FUNC_3(VAR_1, 0, VAR_5);
 if (VAR_3 < 0) {
  FUNC_1(VAR_1->card->dev, "waiting for pipe failed\n");
  return VAR_3;
 }

 return VAR_3;
}
