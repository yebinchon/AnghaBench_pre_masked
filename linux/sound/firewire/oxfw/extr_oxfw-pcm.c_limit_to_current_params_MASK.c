
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; TYPE_2__* runtime; struct snd_oxfw* private_data; } ;
struct snd_oxfw_stream_formation {int rate; int pcm; } ;
struct snd_oxfw {int dummy; } ;
typedef enum avc_general_plug_dir { ____Placeholder_avc_general_plug_dir } avc_general_plug_dir ;
struct TYPE_3__ {int rate_max; int rate_min; int channels_max; int channels_min; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_oxfw*,int,struct snd_oxfw_stream_formation*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_3)
{
 struct snd_oxfw *VAR_4 = VAR_3->private_data;
 struct snd_oxfw_stream_formation VAR_5;
 enum avc_general_plug_dir VAR_6;
 int VAR_7;

 if (VAR_3->stream == VAR_2)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_0;

 VAR_7 = FUNC_0(VAR_4, VAR_6, &VAR_5);
 if (VAR_7 < 0)
  goto end;

 VAR_3->runtime->hw.channels_min = VAR_5.pcm;
 VAR_3->runtime->hw.channels_max = VAR_5.pcm;
 VAR_3->runtime->hw.rate_min = VAR_5.rate;
 VAR_3->runtime->hw.rate_max = VAR_5.rate;
end:
 return VAR_7;
}
