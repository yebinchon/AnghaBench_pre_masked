
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int marker; scalar_t__ channel; scalar_t__ byte_idx; } ;
struct snd_usb_substream {int interface; TYPE_2__* stream; TYPE_1__ dsd_dop; struct snd_pcm_substream* pcm_substream; scalar_t__ altset_idx; } ;
struct snd_usb_stream {int pcm; struct snd_usb_substream* substream; } ;
struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_usb_substream* private_data; int hw; } ;
struct TYPE_4__ {int chip; } ;


 int FUNC_0 (struct snd_pcm_runtime*,struct snd_usb_substream*) ;
 int FUNC_1 (struct snd_usb_substream*,int ,int) ;
 struct snd_usb_stream* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1)
{
 int VAR_2 = VAR_1->stream;
 struct snd_usb_stream *VAR_3 = FUNC_2(VAR_1);
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;
 struct snd_usb_substream *VAR_5 = &VAR_3->substream[VAR_2];
 int VAR_6;

 VAR_5->interface = -1;
 VAR_5->altset_idx = 0;
 VAR_4->hw = VAR_0;
 VAR_4->private_data = VAR_5;
 VAR_5->pcm_substream = VAR_1;



 VAR_5->dsd_dop.byte_idx = 0;
 VAR_5->dsd_dop.channel = 0;
 VAR_5->dsd_dop.marker = 1;

 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6 == 0) {
  VAR_6 = FUNC_1(VAR_5, VAR_3->pcm, VAR_2);
  if (VAR_6)
   FUNC_3(VAR_5->stream->chip);
 }
 return VAR_6;
}
