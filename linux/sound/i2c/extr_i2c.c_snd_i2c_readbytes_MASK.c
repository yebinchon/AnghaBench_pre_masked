
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_i2c_device {TYPE_2__* bus; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* readbytes ) (struct snd_i2c_device*,unsigned char*,int) ;} ;


 int FUNC_0 (struct snd_i2c_device*,unsigned char*,int) ;

int FUNC_1(struct snd_i2c_device *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 return VAR_0->bus->ops->readbytes(VAR_0, VAR_1, VAR_2);
}
