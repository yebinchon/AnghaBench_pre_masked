
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* set_sysclk ) (struct snd_soc_component*,int,int,unsigned int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_component*,int,int,unsigned int,int) ;

int FUNC_1(struct snd_soc_component *VAR_1,
     int VAR_2, int VAR_3, unsigned int VAR_4,
     int VAR_5)
{
 if (VAR_1->driver->set_sysclk)
  return VAR_1->driver->set_sysclk(VAR_1, VAR_2, VAR_3,
           VAR_4, VAR_5);

 return -VAR_0;
}
