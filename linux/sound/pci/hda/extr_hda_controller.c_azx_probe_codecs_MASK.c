
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdac_bus {int codec_mask; } ;
struct hda_codec {int beep_mode; int jackpoll_interval; } ;
struct azx {int codec_probe_mask; TYPE_1__* card; int beep_mode; int jackpoll_interval; int bus; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct hdac_bus* FUNC_0 (struct azx*) ;
 int FUNC_1 (struct azx*,int) ;
 int FUNC_2 (struct azx*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int) ;
 scalar_t__ FUNC_5 (struct azx*,int) ;
 int FUNC_6 (int *,TYPE_1__*,int,struct hda_codec**) ;

int FUNC_7(struct azx *VAR_2, unsigned int VAR_3)
{
 struct hdac_bus *VAR_4 = FUNC_0(VAR_2);
 int VAR_5, VAR_6, VAR_7;

 VAR_6 = 0;
 if (!VAR_3)
  VAR_3 = VAR_0;


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if ((VAR_4->codec_mask & (1 << VAR_5)) & VAR_2->codec_probe_mask) {
   if (FUNC_5(VAR_2, VAR_5) < 0) {



    FUNC_4(VAR_2->card->dev,
      "Codec #%d probe error; disabling it...\n", VAR_5);
    VAR_4->codec_mask &= ~(1 << VAR_5);







    FUNC_2(VAR_2);
    FUNC_1(VAR_2, 1);
   }
  }
 }


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if ((VAR_4->codec_mask & (1 << VAR_5)) & VAR_2->codec_probe_mask) {
   struct hda_codec *VAR_8;
   VAR_7 = FUNC_6(&VAR_2->bus, VAR_2->card, VAR_5, &VAR_8);
   if (VAR_7 < 0)
    continue;
   VAR_8->jackpoll_interval = VAR_2->jackpoll_interval;
   VAR_8->beep_mode = VAR_2->beep_mode;
   VAR_6++;
  }
 }
 if (!VAR_6) {
  FUNC_3(VAR_2->card->dev, "no codecs initialized\n");
  return -VAR_1;
 }
 return 0;
}
