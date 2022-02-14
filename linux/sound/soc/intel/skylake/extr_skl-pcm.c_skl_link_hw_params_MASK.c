
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_soc_dai* codec_dai; } ;
struct snd_soc_dai {TYPE_4__* driver; TYPE_1__* component; int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct skl_pipe_params {scalar_t__ stream; int link_dma_id; int link_bps; int format; int link_index; int s_freq; int ch; int s_fmt; int member_0; } ;
struct hdac_ext_stream {int dummy; } ;
struct hdac_ext_link {int index; } ;
struct hdac_bus {int dummy; } ;
struct TYPE_10__ {int stream_tag; } ;
struct TYPE_8__ {int sig_bits; } ;
struct TYPE_7__ {int sig_bits; } ;
struct TYPE_9__ {TYPE_3__ capture; TYPE_2__ playback; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct hdac_bus* FUNC_0 (int ) ;
 TYPE_5__* FUNC_1 (struct hdac_ext_stream*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_soc_dai*,struct skl_pipe_params*) ;
 struct hdac_ext_link* FUNC_6 (struct hdac_bus*,int ) ;
 struct hdac_ext_stream* FUNC_7 (struct hdac_bus*,struct snd_pcm_substream*,int ) ;
 int FUNC_8 (int ) ;
 struct snd_soc_pcm_runtime* FUNC_9 (struct snd_pcm_substream*) ;
 int FUNC_10 (struct snd_soc_dai*,struct snd_pcm_substream*,void*) ;
 int FUNC_11 (struct snd_soc_dai*,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct snd_pcm_substream *VAR_4,
    struct snd_pcm_hw_params *VAR_5,
    struct snd_soc_dai *VAR_6)
{
 struct hdac_bus *VAR_7 = FUNC_0(VAR_6->dev);
 struct hdac_ext_stream *VAR_8;
 struct snd_soc_pcm_runtime *VAR_9 = FUNC_9(VAR_4);
 struct snd_soc_dai *VAR_10 = VAR_9->codec_dai;
 struct skl_pipe_params VAR_11 = {0};
 struct hdac_ext_link *VAR_12;
 int VAR_13;

 VAR_8 = FUNC_7(VAR_7, VAR_4,
     VAR_2);
 if (!VAR_8)
  return -VAR_0;

 FUNC_10(VAR_6, VAR_4, (void *)VAR_8);

 VAR_12 = FUNC_6(VAR_7, VAR_10->component->name);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_1(VAR_8)->stream_tag;


 if (VAR_4->stream == VAR_3)
  FUNC_11(VAR_10, VAR_13, 0, 0, 0);
 else
  FUNC_11(VAR_10, 0, VAR_13, 0, 0);

 VAR_11.s_fmt = FUNC_8(FUNC_3(VAR_5));
 VAR_11.ch = FUNC_2(VAR_5);
 VAR_11.s_freq = FUNC_4(VAR_5);
 VAR_11.stream = VAR_4->stream;
 VAR_11.link_dma_id = VAR_13 - 1;
 VAR_11.link_index = VAR_12->index;
 VAR_11.format = FUNC_3(VAR_5);

 if (VAR_4->stream == VAR_3)
  VAR_11.link_bps = VAR_10->driver->playback.sig_bits;
 else
  VAR_11.link_bps = VAR_10->driver->capture.sig_bits;

 return FUNC_5(VAR_6, &VAR_11);
}
