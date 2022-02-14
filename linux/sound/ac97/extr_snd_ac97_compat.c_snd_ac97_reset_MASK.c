
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int private_data; } ;
struct ac97_controller {int dummy; } ;
struct ac97_codec_device {int vendor_id; int num; struct ac97_controller* ac97_ctrl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int,int ,unsigned int) ;
 int FUNC_1 (struct snd_ac97*) ;
 int FUNC_2 (struct snd_ac97*) ;
 unsigned int FUNC_3 (struct ac97_controller*,int ) ;
 struct ac97_codec_device* FUNC_4 (int ) ;

int FUNC_5(struct snd_ac97 *VAR_1, bool VAR_2, unsigned int VAR_3,
 unsigned int VAR_4)
{
 struct ac97_codec_device *VAR_5 = FUNC_4(VAR_1->private_data);
 struct ac97_controller *VAR_6 = VAR_5->ac97_ctrl;
 unsigned int VAR_7;

 if (VAR_2) {
  FUNC_2(VAR_1);
  VAR_7 = FUNC_3(VAR_6, VAR_5->num);
  if (FUNC_0(VAR_7, VAR_5->vendor_id, VAR_4))
   return 1;
 }

 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 VAR_7 = FUNC_3(VAR_6, VAR_5->num);
 if (FUNC_0(VAR_7, VAR_5->vendor_id, VAR_4))
  return 0;

 return -VAR_0;
}
