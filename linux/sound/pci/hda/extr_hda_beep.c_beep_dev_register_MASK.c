
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_device {struct hda_beep* device_data; } ;
struct hda_beep {int registered; int dev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct snd_device *VAR_0)
{
 struct hda_beep *VAR_1 = VAR_0->device_data;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->dev);
 if (!VAR_2)
  VAR_1->registered = 1;
 return VAR_2;
}
