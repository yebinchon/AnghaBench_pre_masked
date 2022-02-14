
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct uac_format_type_i_continuous_descriptor {int bFormatType; } ;
struct snd_usb_audio {scalar_t__ usb_id; } ;
struct audioformat {int fmt_type; scalar_t__ rates; int altsetting; int iface; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct snd_usb_audio*,struct audioformat*,int ,struct uac_format_type_i_continuous_descriptor*) ;
 int FUNC_2 (struct snd_usb_audio*,struct audioformat*,int ,struct uac_format_type_i_continuous_descriptor*) ;
 int FUNC_3 (struct snd_usb_audio*,char*,int ,int ,int) ;

int FUNC_4(struct snd_usb_audio *VAR_3,
          struct audioformat *VAR_4, u64 VAR_5,
          struct uac_format_type_i_continuous_descriptor *VAR_6,
          int VAR_7)
{
 int VAR_8;

 switch (VAR_6->bFormatType) {
 case 130:
 case 128:
  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
  break;
 case 129:
  VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
  break;
 default:
  FUNC_3(VAR_3,
    "%u:%d : format type %d is not supported yet\n",
    VAR_4->iface, VAR_4->altsetting,
    VAR_6->bFormatType);
  return -VAR_0;
 }
 VAR_4->fmt_type = VAR_6->bFormatType;
 if (VAR_8 < 0)
  return VAR_8;





 if (VAR_3->usb_id == FUNC_0(0x041e, 0x3000) ||
     VAR_3->usb_id == FUNC_0(0x041e, 0x3020) ||
     VAR_3->usb_id == FUNC_0(0x041e, 0x3061)) {
  if (VAR_6->bFormatType == 130 &&
      VAR_4->rates != VAR_1 &&
      VAR_4->rates != VAR_2)
   return -VAR_0;
 }

 return 0;
}
