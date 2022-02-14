
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_info {int dummy; } ;
struct pcxhr_mgr {scalar_t__ is_hr_stereo; scalar_t__ capture_chips; scalar_t__ board_has_aes1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_ctl_elem_info*,int,int,char const**) ;
 struct pcxhr_mgr* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_info *VAR_3)
{
 static const char *VAR_4[7] = {
  "Internal", "WordClock", "AES Sync",
  "AES 1", "AES 2", "AES 3", "AES 4"
 };
 static const char *VAR_5[3] = {
  "Internal", "AES Sync", "AES 1"
 };
 const char **VAR_6;
 struct pcxhr_mgr *VAR_7 = FUNC_2(VAR_2);
 int VAR_8 = 2;
 if (VAR_7->board_has_aes1) {
  VAR_8 += VAR_7->capture_chips;
  if (!VAR_7->is_hr_stereo)
   VAR_8 += 1;
 }
 if (VAR_7->is_hr_stereo) {
  VAR_6 = VAR_5;
  FUNC_0(VAR_8 > (VAR_0+1));
 } else {
  VAR_6 = VAR_4;
  FUNC_0(VAR_8 > (VAR_1+1));
 }
 return FUNC_1(VAR_3, 1, VAR_8, VAR_6);
}
