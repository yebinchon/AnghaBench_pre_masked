
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct hdsp {scalar_t__ io_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const* const*) ;
 struct hdsp* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_info *VAR_2)
{
 struct hdsp *VAR_3 = FUNC_1(VAR_1);
 static const char * const VAR_4[] = {
  "32000", "44100", "48000", "64000", "88200", "96000",
  "None", "128000", "176400", "192000"
 };

 return FUNC_0(VAR_2, 1, (VAR_3->io_type == VAR_0) ? 10 : 7,
     VAR_4);
}
