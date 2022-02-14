
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_device {struct hda_beep* device_data; } ;
struct hda_beep {int dev; scalar_t__ registered; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hda_beep*) ;

__attribute__((used)) static int FUNC_3(struct snd_device *VAR_0)
{
 struct hda_beep *VAR_1 = VAR_0->device_data;

 if (VAR_1->registered)
  FUNC_1(VAR_1->dev);
 else
  FUNC_0(VAR_1->dev);
 FUNC_2(VAR_1);
 return 0;
}
