
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int of_node; } ;
struct ac97_controller {int ** codecs; } ;
struct ac97_codec_device {size_t num; struct ac97_controller* ac97_ctrl; } ;


 int FUNC_0 (struct ac97_codec_device*) ;
 int FUNC_1 (int ) ;
 struct ac97_codec_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct ac97_codec_device *VAR_1;
 struct ac97_controller *VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 VAR_2 = VAR_1->ac97_ctrl;
 VAR_2->codecs[VAR_1->num] = ((void*)0);
 FUNC_1(VAR_0->of_node);
 FUNC_0(VAR_1);
}
