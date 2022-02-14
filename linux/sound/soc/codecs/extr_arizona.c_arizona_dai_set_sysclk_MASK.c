
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dapm_route {void* source; int sink; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_dai {int id; TYPE_3__* driver; scalar_t__ active; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct arizona_priv {struct arizona_dai_priv* dai; } ;
struct arizona_dai_priv {int clk; } ;
typedef int routes ;
struct TYPE_5__ {int stream_name; } ;
struct TYPE_4__ {int stream_name; } ;
struct TYPE_6__ {TYPE_2__ playback; TYPE_1__ capture; } ;




 int FUNC_0 (struct snd_soc_dapm_route*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,void*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct snd_soc_dapm_route**,int ,int) ;
 struct snd_soc_dapm_context* FUNC_5 (struct snd_soc_component*) ;
 struct arizona_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_dapm_context*,struct snd_soc_dapm_route*,int ) ;
 int FUNC_8 (struct snd_soc_dapm_context*,struct snd_soc_dapm_route*,int ) ;
 int FUNC_9 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_dai *VAR_2,
      int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_2->component;
 struct snd_soc_dapm_context *VAR_7 = FUNC_5(VAR_6);
 struct arizona_priv *VAR_8 = FUNC_6(VAR_6);
 struct arizona_dai_priv *VAR_9 = &VAR_8->dai[VAR_2->id - 1];
 struct snd_soc_dapm_route VAR_10[2];

 switch (VAR_3) {
 case 128:
 case 129:
  break;
 default:
  return -VAR_1;
 }

 if (VAR_3 == VAR_9->clk)
  return 0;

 if (VAR_2->active) {
  FUNC_3(VAR_6->dev, "Can't change clock on active DAI %d\n",
   VAR_2->id);
  return -VAR_0;
 }

 FUNC_2(VAR_6->dev, "Setting AIF%d to %s\n", VAR_2->id + 1,
  FUNC_1(VAR_3));

 FUNC_4(&VAR_10, 0, sizeof(VAR_10));
 VAR_10[0].sink = VAR_2->driver->capture.stream_name;
 VAR_10[1].sink = VAR_2->driver->playback.stream_name;

 VAR_10[0].source = FUNC_1(VAR_9->clk);
 VAR_10[1].source = FUNC_1(VAR_9->clk);
 FUNC_8(VAR_7, VAR_10, FUNC_0(VAR_10));

 VAR_10[0].source = FUNC_1(VAR_3);
 VAR_10[1].source = FUNC_1(VAR_3);
 FUNC_7(VAR_7, VAR_10, FUNC_0(VAR_10));

 VAR_9->clk = VAR_3;

 return FUNC_9(VAR_7);
}
