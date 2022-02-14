
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* set_data ) (struct snd_ice1712*,unsigned int) ;} ;
struct snd_ice1712 {TYPE_1__ gpio; } ;


 int FUNC_0 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static inline void FUNC_1(struct snd_ice1712 *VAR_0, unsigned int VAR_1)
{
 VAR_0->gpio.set_data(VAR_0, VAR_1);
}
