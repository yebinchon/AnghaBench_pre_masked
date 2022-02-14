
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ac97_controller {void** codecs_pdata; } ;
struct ac97_codec_device {size_t num; struct ac97_controller* ac97_ctrl; } ;



void *FUNC_0(const struct ac97_codec_device *VAR_0)
{
 struct ac97_controller *VAR_1 = VAR_0->ac97_ctrl;

 return VAR_1->codecs_pdata[VAR_0->num];
}
