
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ac97 {unsigned short* regs; TYPE_2__* bus; int reg_accessed; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {unsigned short (* read ) (struct snd_ac97*,unsigned short) ;} ;


 unsigned short FUNC_0 (struct snd_ac97*,unsigned short) ;
 int FUNC_1 (unsigned short,int ) ;

__attribute__((used)) static inline unsigned short FUNC_2(struct snd_ac97 *VAR_0, unsigned short VAR_1)
{
 if (! FUNC_1(VAR_1, VAR_0->reg_accessed)) {
  VAR_0->regs[VAR_1] = VAR_0->bus->ops->read(VAR_0, VAR_1);

 }
 return VAR_0->regs[VAR_1];
}
