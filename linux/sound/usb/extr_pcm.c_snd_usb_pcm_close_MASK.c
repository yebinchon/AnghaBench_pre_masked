
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_substream {int interface; TYPE_2__* stream; int * pcm_substream; int dev; } ;
struct snd_usb_stream {TYPE_1__* chip; struct snd_usb_substream* substream; } ;
struct snd_pcm_substream {int stream; } ;
struct TYPE_4__ {int chip; } ;
struct TYPE_3__ {int keep_iface; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_usb_substream*) ;
 struct snd_usb_stream* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snd_usb_substream*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_usb_substream*,int) ;
 int FUNC_7 (int ,int,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_1)
{
 int VAR_2 = VAR_1->stream;
 struct snd_usb_stream *VAR_3 = FUNC_1(VAR_1);
 struct snd_usb_substream *VAR_4 = &VAR_3->substream[VAR_2];
 int VAR_5;

 FUNC_6(VAR_4, 1);
 FUNC_0(VAR_4);

 if (!VAR_3->chip->keep_iface &&
     VAR_4->interface >= 0 &&
     !FUNC_3(VAR_4->stream->chip)) {
  FUNC_7(VAR_4->dev, VAR_4->interface, 0);
  VAR_4->interface = -1;
  VAR_5 = FUNC_4(VAR_4, VAR_0);
  FUNC_5(VAR_4->stream->chip);
  if (VAR_5 < 0)
   return VAR_5;
 }

 VAR_4->pcm_substream = ((void*)0);
 FUNC_2(VAR_4->stream->chip);

 return 0;
}
