
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {scalar_t__ suspended; TYPE_1__* driver; } ;
struct TYPE_2__ {int (* resume ) (struct snd_soc_component*) ;} ;


 int FUNC_0 (struct snd_soc_component*) ;

void FUNC_1(struct snd_soc_component *VAR_0)
{
 if (VAR_0->driver->resume)
  VAR_0->driver->resume(VAR_0);
 VAR_0->suspended = 0;
}
