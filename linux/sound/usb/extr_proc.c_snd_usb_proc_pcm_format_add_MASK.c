
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_stream {int pcm_index; TYPE_1__* chip; } ;
struct snd_card {int dummy; } ;
struct TYPE_2__ {struct snd_card* card; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_card*,char*,struct snd_usb_stream*,int ) ;
 int FUNC_1 (char*,char*,int) ;

void FUNC_2(struct snd_usb_stream *VAR_1)
{
 char VAR_2[32];
 struct snd_card *VAR_3 = VAR_1->chip->card;

 FUNC_1(VAR_2, "stream%d", VAR_1->pcm_index);
 FUNC_0(VAR_3, VAR_2, VAR_1, VAR_0);
}
