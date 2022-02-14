
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {int num; int private_data; } ;
struct ac97_controller {TYPE_1__* ops; } ;
struct ac97_codec_device {struct ac97_controller* ac97_ctrl; } ;
struct TYPE_2__ {unsigned short (* read ) (struct ac97_controller*,int ,unsigned short) ;} ;


 unsigned short FUNC_0 (struct ac97_controller*,int ,unsigned short) ;
 struct ac97_codec_device* FUNC_1 (int ) ;

__attribute__((used)) static unsigned short FUNC_2(struct snd_ac97 *VAR_0,
           unsigned short VAR_1)
{
 struct ac97_codec_device *VAR_2 = FUNC_1(VAR_0->private_data);
 struct ac97_controller *VAR_3 = VAR_2->ac97_ctrl;

 return VAR_3->ops->read(VAR_3, VAR_0->num, VAR_1);
}
