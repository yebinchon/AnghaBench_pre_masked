
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_i2c_bus {int dummy; } ;
struct snd_device {struct snd_i2c_bus* device_data; } ;


 int FUNC_0 (struct snd_i2c_bus*) ;

__attribute__((used)) static int FUNC_1(struct snd_device *VAR_0)
{
 struct snd_i2c_bus *VAR_1 = VAR_0->device_data;
 return FUNC_0(VAR_1);
}
