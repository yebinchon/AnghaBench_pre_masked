
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {int private_data; } ;
struct ac97_controller {TYPE_1__* ops; } ;
struct ac97_codec_device {struct ac97_controller* ac97_ctrl; } ;
struct TYPE_2__ {int (* reset ) (struct ac97_controller*) ;} ;


 int FUNC_0 (struct ac97_controller*) ;
 struct ac97_codec_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct snd_ac97 *VAR_0)
{
 struct ac97_codec_device *VAR_1 = FUNC_1(VAR_0->private_data);
 struct ac97_controller *VAR_2 = VAR_1->ac97_ctrl;

 if (VAR_2->ops->reset)
  VAR_2->ops->reset(VAR_2);
}
