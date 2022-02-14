
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dapm_widget {int id; int channel; TYPE_1__* dapm; } ;
struct snd_soc_dapm_path {TYPE_3__* sink; TYPE_2__* source; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,char*,char*,int ,int ) ;


 int FUNC_1 (struct snd_soc_dapm_path*,int,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_path *VAR_0,
    struct snd_soc_dapm_widget *VAR_1,
    int VAR_2)
{
 switch (VAR_1->id) {
 case 128:
 case 129:
  break;
 default:
  return 0;
 }

 FUNC_0(VAR_1->dapm->dev, "%s DAI route %s -> %s\n",
  VAR_1->channel < VAR_2 ? "Connecting" : "Disconnecting",
  VAR_0->source->name, VAR_0->sink->name);

 if (VAR_1->channel < VAR_2)
  FUNC_1(VAR_0, 1, "dai update");
 else
  FUNC_1(VAR_0, 0, "dai update");

 return 0;
}
