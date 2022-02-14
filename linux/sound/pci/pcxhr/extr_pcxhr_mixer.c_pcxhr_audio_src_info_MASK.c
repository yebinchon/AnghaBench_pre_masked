
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcxhr {TYPE_1__* mgr; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ board_has_mic; scalar_t__ board_has_aes1; } ;


 int FUNC_0 (struct snd_ctl_elem_info*,int,int,char const**) ;
 struct snd_pcxhr* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_info *VAR_1)
{
 static const char *VAR_2[5] = {
  "Line", "Digital", "Digi+SRC", "Mic", "Line+Mic"
 };
 int VAR_3;
 struct snd_pcxhr *VAR_4 = FUNC_1(VAR_0);

 VAR_3 = 2;
 if (VAR_4->mgr->board_has_aes1) {
  VAR_3 = 3;
  if (VAR_4->mgr->board_has_mic)
   VAR_3 = 5;
 }
 return FUNC_0(VAR_1, 1, VAR_3, VAR_2);
}
