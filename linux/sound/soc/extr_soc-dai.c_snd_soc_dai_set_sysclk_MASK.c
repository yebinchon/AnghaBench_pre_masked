
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int component; TYPE_2__* driver; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_sysclk ) (struct snd_soc_dai*,int,unsigned int,int) ;} ;


 int FUNC_0 (int ,int,int ,unsigned int,int) ;
 int FUNC_1 (struct snd_soc_dai*,int,unsigned int,int) ;

int FUNC_2(struct snd_soc_dai *VAR_0, int VAR_1,
      unsigned int VAR_2, int VAR_3)
{
 if (VAR_0->driver->ops->set_sysclk)
  return VAR_0->driver->ops->set_sysclk(VAR_0, VAR_1, VAR_2, VAR_3);

 return FUNC_0(VAR_0->component, VAR_1, 0,
         VAR_2, VAR_3);
}
