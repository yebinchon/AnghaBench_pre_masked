
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ac97 {int id; TYPE_1__* bus; } ;
struct TYPE_4__ {int (* read ) (struct snd_ac97*,int ) ;} ;
struct TYPE_3__ {TYPE_2__* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ac97*,int ) ;
 int FUNC_1 (struct snd_ac97*,int ) ;

__attribute__((used)) static bool FUNC_2(struct snd_ac97 *VAR_2, unsigned int VAR_3,
 unsigned int VAR_4)
{
 VAR_2->id = VAR_2->bus->ops->read(VAR_2, VAR_0) << 16;
 VAR_2->id |= VAR_2->bus->ops->read(VAR_2, VAR_1);

 if (VAR_2->id == 0x0 || VAR_2->id == 0xffffffff)
  return 0;

 if (VAR_3 != 0 && VAR_3 != (VAR_2->id & VAR_4))
  return 0;

 return 1;
}
