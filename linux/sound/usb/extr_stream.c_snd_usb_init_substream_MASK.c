
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_substream {int direction; scalar_t__ channels_max; struct snd_usb_stream* stream; struct snd_usb_power_domain* str_pd; int ep_num; int fmt_type; int num_formats; int formats; int fmt_list; scalar_t__ pkt_offset_adj; int dev; int speed; int tx_length_quirk; int txfr_quirk; int lock; } ;
struct snd_usb_stream {TYPE_1__* chip; int pcm; struct snd_usb_substream* substream; } ;
struct snd_usb_power_domain {int dummy; } ;
struct audioformat {scalar_t__ channels; int endpoint; int fmt_type; int formats; int list; } ;
struct TYPE_2__ {int tx_length_quirk; int txfr_quirk; int dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,struct snd_usb_power_domain*,int ) ;
 int FUNC_4 (struct snd_usb_substream*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct snd_usb_stream *VAR_1,
       int VAR_2,
       struct audioformat *VAR_3,
       struct snd_usb_power_domain *VAR_4)
{
 struct snd_usb_substream *VAR_5 = &VAR_1->substream[VAR_2];

 FUNC_0(&VAR_5->fmt_list);
 FUNC_6(&VAR_5->lock);

 VAR_5->stream = VAR_1;
 VAR_5->direction = VAR_2;
 VAR_5->dev = VAR_1->chip->dev;
 VAR_5->txfr_quirk = VAR_1->chip->txfr_quirk;
 VAR_5->tx_length_quirk = VAR_1->chip->tx_length_quirk;
 VAR_5->speed = FUNC_2(VAR_5->dev);
 VAR_5->pkt_offset_adj = 0;

 FUNC_5(VAR_1->pcm, VAR_2);

 FUNC_1(&VAR_3->list, &VAR_5->fmt_list);
 VAR_5->formats |= VAR_3->formats;
 VAR_5->num_formats++;
 VAR_5->fmt_type = VAR_3->fmt_type;
 VAR_5->ep_num = VAR_3->endpoint;
 if (VAR_3->channels > VAR_5->channels_max)
  VAR_5->channels_max = VAR_3->channels;

 if (VAR_4) {
  VAR_5->str_pd = VAR_4;

  FUNC_3(VAR_5->stream->chip, VAR_4,
      VAR_0);
 }

 FUNC_4(VAR_5);
}
