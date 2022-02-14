
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xlnx_pcm_stream_param {int mmio; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; TYPE_1__* runtime; } ;
struct TYPE_2__ {struct xlnx_pcm_stream_param* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct xlnx_pcm_stream_param*) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1)
{
 int VAR_2;
 struct xlnx_pcm_stream_param *VAR_3 =
   VAR_1->runtime->private_data;
 struct snd_soc_pcm_runtime *VAR_4 = VAR_1->private_data;
 struct snd_soc_component *VAR_5 = FUNC_2(VAR_4,
            VAR_0);

 VAR_2 = FUNC_4(VAR_3->mmio);
 if (VAR_2) {
  FUNC_0(VAR_5->dev, "audio formatter reset failed\n");
  goto err_reset;
 }
 FUNC_3(VAR_3->mmio, VAR_1->stream);

err_reset:
 FUNC_1(VAR_3);
 return 0;
}
