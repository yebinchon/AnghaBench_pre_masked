
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct uac_format_type_ii_ext_descriptor {int wSamplesPerFrame; int wMaxBitRate; } ;
struct uac_format_type_ii_discrete_descriptor {int wSamplesPerFrame; int wMaxBitRate; } ;
struct snd_usb_audio {int dummy; } ;
struct audioformat {int channels; int protocol; int frame_size; void* formats; int altsetting; int iface; } ;


 void* VAR_0 ;
 void* VAR_1 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_usb_audio*,struct audioformat*,void*,int) ;
 int FUNC_2 (struct snd_usb_audio*,struct audioformat*) ;
 int FUNC_3 (struct snd_usb_audio*,char*,int,int,...) ;

__attribute__((used)) static int FUNC_4(struct snd_usb_audio *VAR_2,
     struct audioformat *VAR_3,
     u64 VAR_4, void *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 switch (VAR_4) {
 case 131:


  VAR_3->formats = VAR_1;
  break;
 case 130:
  VAR_3->formats = VAR_0;
  break;
 default:
  FUNC_3(VAR_2,
    "%u:%d : unknown format tag %#llx is detected.  processed as MPEG.\n",
    VAR_3->iface, VAR_3->altsetting, VAR_4);
  VAR_3->formats = VAR_0;
  break;
 }

 VAR_3->channels = 1;

 switch (VAR_3->protocol) {
 default:
 case 129: {
  struct uac_format_type_ii_discrete_descriptor *VAR_9 = VAR_5;
  VAR_6 = FUNC_0(VAR_9->wMaxBitRate);
  VAR_7 = FUNC_0(VAR_9->wSamplesPerFrame);
  FUNC_3(VAR_2, "found format II with max.bitrate = %d, frame size=%d\n", VAR_6, VAR_7);
  VAR_3->frame_size = VAR_7;
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_5, 8);
  break;
 }
 case 128: {
  struct uac_format_type_ii_ext_descriptor *VAR_10 = VAR_5;
  VAR_6 = FUNC_0(VAR_10->wMaxBitRate);
  VAR_7 = FUNC_0(VAR_10->wSamplesPerFrame);
  FUNC_3(VAR_2, "found format II with max.bitrate = %d, frame size=%d\n", VAR_6, VAR_7);
  VAR_3->frame_size = VAR_7;
  VAR_8 = FUNC_2(VAR_2, VAR_3);
  break;
 }
 }

 return VAR_8;
}
