
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {TYPE_3__* dev; TYPE_1__* driver; } ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {int owner; } ;
struct TYPE_4__ {int module_get_upon_open; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct snd_soc_component *VAR_1,
     int VAR_2)
{
 if (VAR_1->driver->module_get_upon_open == !!VAR_2 &&
     !FUNC_0(VAR_1->dev->driver->owner))
  return -VAR_0;

 return 0;
}
