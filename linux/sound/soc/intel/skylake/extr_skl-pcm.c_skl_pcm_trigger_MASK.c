
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dapm_widget {int ignore_suspend; } ;
struct snd_soc_dai {struct snd_soc_dapm_widget* capture_widget; struct snd_soc_dapm_widget* playback_widget; int dev; } ;
struct snd_pcm_substream {int stream; } ;
struct skl_module_cfg {int pipe; } ;
struct skl_dev {int dummy; } ;
struct hdac_ext_stream {int lpib; int dpib; } ;
struct hdac_bus {int remap_addr; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 struct hdac_bus* FUNC_0 (struct snd_pcm_substream*) ;
 struct hdac_ext_stream* FUNC_1 (struct snd_pcm_substream*) ;
 struct skl_dev* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (struct hdac_ext_stream*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct snd_pcm_substream*,int) ;
 int FUNC_6 (struct skl_dev*,int ) ;
 int FUNC_7 (struct skl_dev*,int ) ;
 struct skl_module_cfg* FUNC_8 (struct snd_soc_dai*,int ) ;
 int FUNC_9 (struct hdac_bus*,struct hdac_ext_stream*,int) ;
 int FUNC_10 (struct hdac_bus*,int,int) ;
 int FUNC_11 (struct hdac_bus*,struct hdac_ext_stream*,int ) ;
 int FUNC_12 (struct hdac_ext_stream*,int ) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct snd_pcm_substream *VAR_5, int VAR_6,
  struct snd_soc_dai *VAR_7)
{
 struct skl_dev *VAR_8 = FUNC_2(VAR_7->dev);
 struct skl_module_cfg *VAR_9;
 struct hdac_bus *VAR_10 = FUNC_0(VAR_5);
 struct hdac_ext_stream *VAR_11 = FUNC_1(VAR_5);
 struct snd_soc_dapm_widget *VAR_12;
 int VAR_13;

 VAR_9 = FUNC_8(VAR_7, VAR_5->stream);
 if (!VAR_9)
  return -VAR_3;

 if (VAR_5->stream == VAR_4)
  VAR_12 = VAR_7->playback_widget;
 else
  VAR_12 = VAR_7->capture_widget;

 switch (VAR_6) {
 case 131:
  if (!VAR_12->ignore_suspend) {





   FUNC_10(VAR_10, 1,
      FUNC_3(VAR_11)->index);
   FUNC_11(VAR_10, VAR_11,
       VAR_11->lpib);
   FUNC_12(VAR_11, VAR_11->lpib);
  }


 case 130:
 case 132:






  VAR_13 = FUNC_5(VAR_5, VAR_6);
  if (VAR_13 < 0)
   return VAR_13;
  return FUNC_6(VAR_8, VAR_9->pipe);
  break;

 case 133:
 case 128:
 case 129:





  VAR_13 = FUNC_7(VAR_8, VAR_9->pipe);
  if (VAR_13 < 0)
   return VAR_13;

  VAR_13 = FUNC_5(VAR_5, VAR_6);
  if ((VAR_6 == 128) && !VAR_12->ignore_suspend) {

   VAR_11->dpib = FUNC_4(VAR_10->remap_addr +
     VAR_0 +
     (VAR_1 *
     FUNC_3(VAR_11)->index));

   VAR_11->lpib = FUNC_13(
       FUNC_3(VAR_11));
   FUNC_9(VAR_10, VAR_11, 0);
  }
  break;

 default:
  return -VAR_2;
 }

 return 0;
}
