
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int direction; } ;
struct snd_ice1712 {TYPE_1__ gpio; } ;


 unsigned int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;
 int FUNC_2 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static inline void FUNC_3(struct snd_ice1712 *VAR_0,
            unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned VAR_3;

 VAR_0->gpio.direction |= VAR_1;
 FUNC_1(VAR_0, VAR_0->gpio.direction);
 VAR_3 = FUNC_0(VAR_0);
 VAR_3 &= ~VAR_1;
 VAR_3 |= VAR_1 & VAR_2;
 FUNC_2(VAR_0, VAR_3);
}
