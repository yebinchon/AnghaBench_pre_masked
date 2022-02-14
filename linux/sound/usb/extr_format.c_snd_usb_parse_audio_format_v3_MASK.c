
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct uac3_as_header_descriptor {int bmFormats; } ;
struct snd_usb_audio {int dummy; } ;
struct audioformat {int fmt_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_usb_audio*,struct audioformat*,int,struct uac3_as_header_descriptor*) ;

int FUNC_2(struct snd_usb_audio *VAR_2,
          struct audioformat *VAR_3,
          struct uac3_as_header_descriptor *VAR_4,
          int VAR_5)
{
 u64 VAR_6 = FUNC_0(VAR_4->bmFormats);
 int VAR_7;





 if (VAR_6 & 0x7f)
  VAR_3->fmt_type = VAR_0;
 else
  VAR_3->fmt_type = VAR_1;

 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_6, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
