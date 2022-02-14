
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_device {struct hda_beep* device_data; } ;
struct hda_beep {TYPE_1__* codec; } ;
struct TYPE_2__ {int * beep; } ;


 int FUNC_0 (struct hda_beep*) ;

__attribute__((used)) static int FUNC_1(struct snd_device *VAR_0)
{
 struct hda_beep *VAR_1 = VAR_0->device_data;

 VAR_1->codec->beep = ((void*)0);
 FUNC_0(VAR_1);
 return 0;
}
