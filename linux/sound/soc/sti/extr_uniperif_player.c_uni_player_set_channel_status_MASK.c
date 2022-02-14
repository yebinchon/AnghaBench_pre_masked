
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* status; } ;
struct TYPE_4__ {scalar_t__ encoding_mode; TYPE_1__ iec958; } ;
struct uniperif {scalar_t__ ver; int ctrl_lock; TYPE_2__ stream_settings; } ;
struct snd_pcm_runtime {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct uniperif*) ;
 int FUNC_1 (struct uniperif*,int,unsigned int) ;
 int FUNC_2 (struct uniperif*) ;
 int FUNC_3 (struct uniperif*,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct uniperif *VAR_14,
       struct snd_pcm_runtime *VAR_15)
{
 int VAR_16;
 unsigned int VAR_17;






 FUNC_4(&VAR_14->ctrl_lock);
 if (VAR_15) {
  switch (VAR_15->rate) {
  case 22050:
   VAR_14->stream_settings.iec958.status[3] =
      VAR_3;
   break;
  case 44100:
   VAR_14->stream_settings.iec958.status[3] =
      VAR_6;
   break;
  case 88200:
   VAR_14->stream_settings.iec958.status[3] =
      VAR_8;
   break;
  case 176400:
   VAR_14->stream_settings.iec958.status[3] =
      VAR_1;
   break;
  case 24000:
   VAR_14->stream_settings.iec958.status[3] =
      VAR_4;
   break;
  case 48000:
   VAR_14->stream_settings.iec958.status[3] =
      VAR_7;
   break;
  case 96000:
   VAR_14->stream_settings.iec958.status[3] =
      VAR_9;
   break;
  case 192000:
   VAR_14->stream_settings.iec958.status[3] =
      VAR_2;
   break;
  case 32000:
   VAR_14->stream_settings.iec958.status[3] =
      VAR_5;
   break;
  default:

   VAR_14->stream_settings.iec958.status[3] =
      VAR_10;
   break;
  }
 }




 if (VAR_14->stream_settings.iec958.status[0] & VAR_0)
  VAR_14->stream_settings.encoding_mode =
   VAR_12;
 else
  VAR_14->stream_settings.encoding_mode =
   VAR_13;

 if (VAR_14->stream_settings.encoding_mode ==
  VAR_13)

  FUNC_3(VAR_14, 0);
 else

  FUNC_3(VAR_14, 1);


 for (VAR_16 = 0; VAR_16 < 6; ++VAR_16) {
  VAR_17 =
  VAR_14->stream_settings.iec958.status[0 + (VAR_16 * 4)] & 0xf;
  VAR_17 |=
  VAR_14->stream_settings.iec958.status[1 + (VAR_16 * 4)] << 8;
  VAR_17 |=
  VAR_14->stream_settings.iec958.status[2 + (VAR_16 * 4)] << 16;
  VAR_17 |=
  VAR_14->stream_settings.iec958.status[3 + (VAR_16 * 4)] << 24;
  FUNC_1(VAR_14, VAR_16, VAR_17);
 }
 FUNC_5(&VAR_14->ctrl_lock);


 if (VAR_14->ver < VAR_11)
  FUNC_2(VAR_14);
 else
  FUNC_0(VAR_14);
}
