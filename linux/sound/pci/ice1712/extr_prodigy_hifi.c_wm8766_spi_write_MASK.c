
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int write_mask; int direction; } ;
struct snd_ice1712 {TYPE_1__ gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ice1712*,int,int) ;
 int FUNC_1 (struct snd_ice1712*,int) ;
 int FUNC_2 (struct snd_ice1712*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct snd_ice1712 *VAR_3, unsigned int VAR_4,
        unsigned int VAR_5)
{
 unsigned int VAR_6;

 FUNC_1(VAR_3, VAR_1|
     VAR_0|VAR_2);
 FUNC_2(VAR_3, ~(VAR_1|
     VAR_0|VAR_2));

 FUNC_0(VAR_3, VAR_2, 0);
 VAR_6 = (VAR_4 << 9) | (VAR_5 & 0x1ff);
 FUNC_4(VAR_3, VAR_6);

 FUNC_0(VAR_3, VAR_2, 1);
 FUNC_3(1);

 FUNC_2(VAR_3, VAR_3->gpio.write_mask);
 FUNC_1(VAR_3, VAR_3->gpio.direction);
}
