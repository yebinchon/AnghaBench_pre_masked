
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
 int VAR_3 ;
 int FUNC_0 (struct snd_ice1712*,unsigned int) ;
 int FUNC_1 (struct snd_ice1712*,int,int) ;
 int FUNC_2 (struct snd_ice1712*,int) ;
 int FUNC_3 (struct snd_ice1712*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct snd_ice1712 *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6)
{
 unsigned int VAR_7;

 FUNC_2(VAR_4, VAR_3|VAR_1|VAR_2);
 FUNC_3(VAR_4, ~(VAR_3|VAR_1|VAR_2));

 FUNC_1(VAR_4, VAR_3, 0);
 VAR_7 = ((VAR_0 & 0x03) << 14) | (1 << 13) |
   ((VAR_5 & 0x1f) << 8) | (VAR_6 & 0xff);
 FUNC_0(VAR_4, VAR_7);

 FUNC_1(VAR_4, VAR_3, 1);
 FUNC_4(1);

 FUNC_3(VAR_4, VAR_4->gpio.write_mask);
 FUNC_2(VAR_4, VAR_4->gpio.direction);
}
