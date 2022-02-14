
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int format; int channels; int rate; } ;
struct hda_spdif_out {unsigned short ctls; } ;
struct hda_pcm_stream {int maxbps; int nid; } ;
struct azx_pcm {int codec; struct azx* chip; } ;
struct TYPE_8__ {unsigned int stream_tag; int format_val; } ;
struct azx_dev {TYPE_2__ core; } ;
struct azx {int driver_caps; unsigned int capture_streams; TYPE_1__* card; } ;
struct TYPE_9__ {int prepared; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (struct azx_dev*) ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct azx_dev*) ;
 int FUNC_3 (struct azx_dev*) ;
 int FUNC_4 (struct azx_dev*) ;
 struct azx_dev* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int ,struct hda_pcm_stream*,unsigned int,int ,struct snd_pcm_substream*) ;
 struct hda_spdif_out* FUNC_7 (int ,int ) ;
 unsigned int FUNC_8 (int ,int ,int ,int ,unsigned short) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,unsigned int) ;
 int FUNC_11 (TYPE_3__*) ;
 struct azx_pcm* FUNC_12 (struct snd_pcm_substream*) ;
 struct hda_pcm_stream* FUNC_13 (struct snd_pcm_substream*) ;
 int FUNC_14 (struct azx*,struct azx_dev*) ;

__attribute__((used)) static int FUNC_15(struct snd_pcm_substream *VAR_3)
{
 struct azx_pcm *VAR_4 = FUNC_12(VAR_3);
 struct azx *VAR_5 = VAR_4->chip;
 struct azx_dev *VAR_6 = FUNC_5(VAR_3);
 struct hda_pcm_stream *VAR_7 = FUNC_13(VAR_3);
 struct snd_pcm_runtime *VAR_8 = VAR_3->runtime;
 unsigned int VAR_9, VAR_10;
 int VAR_11;
 struct hda_spdif_out *VAR_12 =
  FUNC_7(VAR_4->codec, VAR_7->nid);
 unsigned short VAR_13 = VAR_12 ? VAR_12->ctls : 0;

 FUNC_14(VAR_5, VAR_6);
 FUNC_3(VAR_6);
 if (FUNC_2(VAR_6)) {
  VAR_11 = -VAR_1;
  goto unlock;
 }

 FUNC_9(FUNC_0(VAR_6));
 VAR_9 = FUNC_8(VAR_8->rate,
      VAR_8->channels,
      VAR_8->format,
      VAR_7->maxbps,
      VAR_13);
 if (!VAR_9) {
  FUNC_1(VAR_5->card->dev,
   "invalid format_val, rate=%d, ch=%d, format=%d\n",
   VAR_8->rate, VAR_8->channels, VAR_8->format);
  VAR_11 = -VAR_2;
  goto unlock;
 }

 VAR_11 = FUNC_10(FUNC_0(VAR_6), VAR_9);
 if (VAR_11 < 0)
  goto unlock;

 FUNC_11(FUNC_0(VAR_6));

 VAR_10 = VAR_6->core.stream_tag;

 if ((VAR_5->driver_caps & VAR_0) &&
     VAR_10 > VAR_5->capture_streams)
  VAR_10 -= VAR_5->capture_streams;
 VAR_11 = FUNC_6(VAR_4->codec, VAR_7, VAR_10,
         VAR_6->core.format_val, VAR_3);

 unlock:
 if (!VAR_11)
  FUNC_0(VAR_6)->prepared = 1;
 FUNC_4(VAR_6);
 return VAR_11;
}
