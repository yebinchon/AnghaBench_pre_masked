
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long (* c_resolution ) (struct snd_timer*) ;unsigned long resolution; } ;
struct snd_timer {TYPE_1__ hw; } ;


 unsigned long FUNC_0 (struct snd_timer*) ;

__attribute__((used)) static unsigned long FUNC_1(struct snd_timer *VAR_0)
{
 if (VAR_0->hw.c_resolution)
  return VAR_0->hw.c_resolution(VAR_0);
 else
  return VAR_0->hw.resolution;
}
