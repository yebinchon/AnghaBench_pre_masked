
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_device {struct snd_ac97* device_data; } ;
struct snd_ac97 {int dummy; } ;


 int FUNC_0 (struct snd_ac97*) ;
 int FUNC_1 (struct snd_ac97*) ;

__attribute__((used)) static int FUNC_2(struct snd_device *VAR_0)
{
 struct snd_ac97 *VAR_1 = VAR_0->device_data;
 FUNC_1(VAR_1);
 return FUNC_0(VAR_1);
}
