
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {int (* write ) (struct snd_wm8766*,size_t,size_t) ;} ;
struct snd_wm8766 {size_t* regs; TYPE_1__ ops; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct snd_wm8766*,size_t,size_t) ;

__attribute__((used)) static void FUNC_1(struct snd_wm8766 *VAR_1, u16 VAR_2, u16 VAR_3)
{
 if (VAR_2 < VAR_0)
  VAR_1->regs[VAR_2] = VAR_3;
 VAR_1->ops.write(VAR_1, VAR_2, VAR_3);
}
