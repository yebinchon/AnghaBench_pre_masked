
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ac97 {TYPE_2__* bus; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {unsigned short (* read ) (struct snd_ac97*,unsigned short) ;} ;


 int FUNC_0 (struct snd_ac97*,unsigned short) ;
 unsigned short FUNC_1 (struct snd_ac97*,unsigned short) ;

unsigned short FUNC_2(struct snd_ac97 *VAR_0, unsigned short VAR_1)
{
 if (!FUNC_0(VAR_0, VAR_1))
  return 0;
 return VAR_0->bus->ops->read(VAR_0, VAR_1);
}
