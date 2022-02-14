
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int channels_min; int channels_max; int stream_name; void* formats; void* rates; } ;
struct TYPE_3__ {int channels_min; int channels_max; int stream_name; void* formats; void* rates; } ;
struct snd_soc_dai_driver {int symmetric_rates; TYPE_2__ capture; TYPE_1__ playback; int pcm_new; int * ops; int name; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_dai_stream {struct rsnd_dai* rdai; int name; } ;
struct rsnd_dai {int name; struct rsnd_priv* priv; struct rsnd_dai_stream capture; struct rsnd_dai_stream playback; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct device*,char*,int ,char*,char*) ;
 int FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,char*,int) ;
 struct snd_soc_dai_driver* FUNC_3 (struct rsnd_priv*,int) ;
 scalar_t__ FUNC_4 (struct rsnd_dai_stream*) ;
 int FUNC_5 (struct rsnd_dai*,struct device_node*,struct device_node*) ;
 int FUNC_6 (struct rsnd_dai*,struct device_node*,struct device_node*) ;
 int FUNC_7 (struct rsnd_dai*,struct device_node*,struct device_node*) ;
 int FUNC_8 (struct rsnd_dai*,struct device_node*,struct device_node*) ;
 int FUNC_9 (struct rsnd_dai*,struct device_node*,struct device_node*) ;
 int FUNC_10 (struct rsnd_dai*,struct device_node*,struct device_node*) ;
 int VAR_3 ;
 struct device* FUNC_11 (struct rsnd_priv*) ;
 int FUNC_12 (struct rsnd_dai*,int) ;
 struct rsnd_dai* FUNC_13 (struct rsnd_priv*,int) ;
 int FUNC_14 (struct rsnd_dai*,int) ;
 int FUNC_15 (struct rsnd_dai*,int) ;
 int VAR_4 ;
 scalar_t__ FUNC_16 (struct rsnd_dai_stream*) ;
 int FUNC_17 (int ,int ,char*,int) ;

__attribute__((used)) static void FUNC_18(struct rsnd_priv *VAR_5,
        struct device_node *VAR_6,
        int VAR_7)
{
 struct device_node *VAR_8, *VAR_9;
 struct rsnd_dai_stream *VAR_10;
 struct rsnd_dai_stream *VAR_11;
 struct snd_soc_dai_driver *VAR_12;
 struct rsnd_dai *VAR_13;
 struct device *VAR_14 = FUNC_11(VAR_5);
 int VAR_15;

 VAR_13 = FUNC_13(VAR_5, VAR_7);
 VAR_12 = FUNC_3(VAR_5, VAR_7);
 VAR_10 = &VAR_13->playback;
 VAR_11 = &VAR_13->capture;

 FUNC_17(VAR_13->name, VAR_0, "rsnd-dai.%d", VAR_7);

 VAR_13->priv = VAR_5;
 VAR_12->name = VAR_13->name;
 VAR_12->ops = &VAR_4;
 VAR_12->pcm_new = VAR_3;

 FUNC_17(VAR_10->name, VAR_0,
   "DAI%d Playback", VAR_7);
 VAR_12->playback.rates = VAR_2;
 VAR_12->playback.formats = VAR_1;
 VAR_12->playback.channels_min = 2;
 VAR_12->playback.channels_max = 8;
 VAR_12->playback.stream_name = VAR_10->name;

 FUNC_17(VAR_11->name, VAR_0,
   "DAI%d Capture", VAR_7);
 VAR_12->capture.rates = VAR_2;
 VAR_12->capture.formats = VAR_1;
 VAR_12->capture.channels_min = 2;
 VAR_12->capture.channels_max = 8;
 VAR_12->capture.stream_name = VAR_11->name;

 VAR_10->rdai = VAR_13;
 VAR_11->rdai = VAR_13;
 FUNC_12(VAR_13, 2);
 FUNC_14(VAR_13, 1);
 FUNC_15(VAR_13, 32);

 for (VAR_15 = 0;; VAR_15++) {
  VAR_8 = FUNC_2(VAR_6, "playback", VAR_15);
  VAR_9 = FUNC_2(VAR_6, "capture", VAR_15);

  if (!VAR_8 && !VAR_9)
   break;

  FUNC_9(VAR_13, VAR_8, VAR_9);
  FUNC_10(VAR_13, VAR_8, VAR_9);
  FUNC_8(VAR_13, VAR_8, VAR_9);
  FUNC_5(VAR_13, VAR_8, VAR_9);
  FUNC_7(VAR_13, VAR_8, VAR_9);
  FUNC_6(VAR_13, VAR_8, VAR_9);

  FUNC_1(VAR_8);
  FUNC_1(VAR_9);
 }

 if (FUNC_16(VAR_11) ||
     FUNC_16(VAR_10)) {

  VAR_12->symmetric_rates = 1;
 }

 FUNC_0(VAR_14, "%s (%s/%s)\n", VAR_13->name,
  FUNC_4(VAR_10) ? "play" : " -- ",
  FUNC_4(VAR_11) ? "capture" : "  --   ");
}
