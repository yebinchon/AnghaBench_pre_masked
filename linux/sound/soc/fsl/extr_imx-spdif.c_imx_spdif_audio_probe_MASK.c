
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_soc_dai_link_component {char* dai_name; char* name; struct device_node* of_node; } ;
struct TYPE_9__ {struct device_node* of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_8__ {int num_links; int owner; TYPE_1__* dai_link; TYPE_3__* dev; } ;
struct TYPE_7__ {int num_cpus; int num_codecs; int num_platforms; char* name; char* stream_name; int playback_only; int capture_only; struct snd_soc_dai_link_component* platforms; struct snd_soc_dai_link_component* cpus; struct snd_soc_dai_link_component* codecs; } ;
struct imx_spdif_data {TYPE_2__ card; TYPE_1__ dai; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,char*,...) ;
 void* FUNC_1 (TYPE_3__*,int,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char*,int ) ;
 scalar_t__ FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (TYPE_2__*,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct device_node *VAR_6, *VAR_7 = VAR_5->dev.of_node;
 struct imx_spdif_data *VAR_8;
 struct snd_soc_dai_link_component *VAR_9;
 int VAR_10 = 0;

 VAR_6 = FUNC_4(VAR_7, "spdif-controller", 0);
 if (!VAR_6) {
  FUNC_0(&VAR_5->dev, "failed to find spdif-controller\n");
  VAR_10 = -VAR_0;
  goto end;
 }

 VAR_8 = FUNC_1(&VAR_5->dev, sizeof(*VAR_8), VAR_3);
 VAR_9 = FUNC_1(&VAR_5->dev, 3 * sizeof(*VAR_9), VAR_3);
 if (!VAR_8 || !VAR_9) {
  VAR_10 = -VAR_1;
  goto end;
 }

 VAR_8->dai.cpus = &VAR_9[0];
 VAR_8->dai.codecs = &VAR_9[1];
 VAR_8->dai.platforms = &VAR_9[2];

 VAR_8->dai.num_cpus = 1;
 VAR_8->dai.num_codecs = 1;
 VAR_8->dai.num_platforms = 1;

 VAR_8->dai.name = "S/PDIF PCM";
 VAR_8->dai.stream_name = "S/PDIF PCM";
 VAR_8->dai.codecs->dai_name = "snd-soc-dummy-dai";
 VAR_8->dai.codecs->name = "snd-soc-dummy";
 VAR_8->dai.cpus->of_node = VAR_6;
 VAR_8->dai.platforms->of_node = VAR_6;
 VAR_8->dai.playback_only = 1;
 VAR_8->dai.capture_only = 1;

 if (FUNC_5(VAR_7, "spdif-out"))
  VAR_8->dai.capture_only = 0;

 if (FUNC_5(VAR_7, "spdif-in"))
  VAR_8->dai.playback_only = 0;

 if (VAR_8->dai.playback_only && VAR_8->dai.capture_only) {
  FUNC_0(&VAR_5->dev, "no enabled S/PDIF DAI link\n");
  goto end;
 }

 VAR_8->card.dev = &VAR_5->dev;
 VAR_8->card.dai_link = &VAR_8->dai;
 VAR_8->card.num_links = 1;
 VAR_8->card.owner = VAR_4;

 VAR_10 = FUNC_6(&VAR_8->card, "model");
 if (VAR_10)
  goto end;

 VAR_10 = FUNC_2(&VAR_5->dev, &VAR_8->card);
 if (VAR_10 && VAR_10 != -VAR_2)
  FUNC_0(&VAR_5->dev, "snd_soc_register_card failed: %d\n", VAR_10);

end:
 FUNC_3(VAR_6);

 return VAR_10;
}
