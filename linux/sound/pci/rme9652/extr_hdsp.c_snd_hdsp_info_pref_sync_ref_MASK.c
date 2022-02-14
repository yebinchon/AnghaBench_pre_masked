
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct hdsp {int io_type; } ;



 int VAR_0 ;



 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const* const*) ;
 struct hdsp* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_info *VAR_2)
{
 static const char * const VAR_3[] = {
  "Word", "IEC958", "ADAT1", "ADAT Sync", "ADAT2", "ADAT3"
 };
 struct hdsp *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;

 switch (VAR_4->io_type) {
 case 131:
 case 129:
  VAR_5 = 6;
  break;
 case 128:
  VAR_5 = 4;
  break;
 case 130:
  VAR_5 = 3;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_2, 1, VAR_5, VAR_3);
}
