
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* stream_event ) (struct snd_soc_component*,int) ;} ;


 int FUNC_0 (struct snd_soc_component*,int) ;

int FUNC_1(struct snd_soc_component *VAR_0,
       int VAR_1)
{
 if (VAR_0->driver->stream_event)
  return VAR_0->driver->stream_event(VAR_0, VAR_1);

 return 0;
}
