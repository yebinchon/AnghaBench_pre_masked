
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ml403_ac97cr {int dummy; } ;
struct snd_device {struct snd_ml403_ac97cr* device_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_ml403_ac97cr*) ;

__attribute__((used)) static int FUNC_2(struct snd_device *VAR_1)
{
 struct snd_ml403_ac97cr *VAR_2 = VAR_1->device_data;
 FUNC_0(VAR_0, "dev_free():\n");
 return FUNC_1(VAR_2);
}
