
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer {int dummy; } ;
struct snd_device {struct snd_timer* device_data; } ;
typedef int dev ;


 int FUNC_0 (struct snd_device*,int ,int) ;
 int FUNC_1 (struct snd_device*) ;

int FUNC_2(struct snd_timer *VAR_0)
{
 struct snd_device VAR_1;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));
 VAR_1.device_data = VAR_0;
 return FUNC_1(&VAR_1);
}
