
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dapm_route {char* source; int sink; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_dai {int id; TYPE_3__* driver; scalar_t__ active; struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct madera_priv {struct madera_dai_priv* dai; } ;
struct madera_dai_priv {int clk; } ;
typedef int routes ;
struct TYPE_5__ {int stream_name; } ;
struct TYPE_4__ {int stream_name; } ;
struct TYPE_6__ {TYPE_2__ playback; TYPE_1__ capture; } ;


 int FUNC_0 (struct snd_soc_dapm_route*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct snd_soc_dapm_route**,int ,int) ;
 struct snd_soc_dapm_context* FUNC_5 (struct snd_soc_component*) ;
 struct madera_priv* FUNC_6 (struct snd_soc_component*) ;
 int FUNC_7 (struct snd_soc_dapm_context*,struct snd_soc_dapm_route*,int ) ;
 int FUNC_8 (struct snd_soc_dapm_context*,struct snd_soc_dapm_route*,int ) ;
 int FUNC_9 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_10(struct snd_soc_dai *VAR_1,
     int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_1->component;
 struct snd_soc_dapm_context *VAR_6 =
  FUNC_5(VAR_5);
 struct madera_priv *VAR_7 = FUNC_6(VAR_5);
 struct madera_dai_priv *VAR_8 = &VAR_7->dai[VAR_1->id - 1];
 struct snd_soc_dapm_route VAR_9[2];
 int VAR_10;

 VAR_10 = FUNC_3(VAR_2);
 if (VAR_10 < 0) {
  FUNC_2(VAR_5->dev, "Illegal DAI clock id %d\n", VAR_2);
  return VAR_10;
 }

 if (VAR_10 == FUNC_3(VAR_8->clk))
  return 0;

 if (VAR_1->active) {
  FUNC_2(VAR_5->dev, "Can't change clock on active DAI %d\n",
   VAR_1->id);
  return -VAR_0;
 }

 FUNC_1(VAR_5->dev, "Setting AIF%d to %s\n", VAR_1->id,
  VAR_10 ? "SYSCLK" : "ASYNCCLK");





 FUNC_4(&VAR_9, 0, sizeof(VAR_9));
 VAR_9[0].sink = VAR_1->driver->capture.stream_name;
 VAR_9[1].sink = VAR_1->driver->playback.stream_name;
 VAR_9[0].source = "ASYNCCLK";
 VAR_9[1].source = "ASYNCCLK";

 if (VAR_10)
  FUNC_8(VAR_6, VAR_9, FUNC_0(VAR_9));
 else
  FUNC_7(VAR_6, VAR_9, FUNC_0(VAR_9));

 VAR_8->clk = VAR_2;

 return FUNC_9(VAR_6);
}
