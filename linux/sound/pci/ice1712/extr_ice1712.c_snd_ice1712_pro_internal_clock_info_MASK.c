
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const* const*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
            struct snd_ctl_elem_info *VAR_1)
{
 static const char * const VAR_2[] = {
  "8000",
  "9600",
  "11025",
  "12000",
  "16000",
  "22050",
  "24000",
  "32000",
  "44100",
  "48000",
  "64000",
  "88200",
  "96000",
  "IEC958 Input",
 };
 return FUNC_0(VAR_1, 1, 14, VAR_2);
}
