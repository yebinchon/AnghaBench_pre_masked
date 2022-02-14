
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int (* get_data ) (struct snd_ice1712*) ;int (* set_data ) (struct snd_ice1712*,unsigned int) ;} ;
struct snd_ice1712 {TYPE_1__ gpio; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (unsigned char,int ) ;
 unsigned int FUNC_4 (struct snd_ice1712*) ;
 int FUNC_5 (struct snd_ice1712*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct snd_ice1712 *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6;
 unsigned char VAR_7;

 VAR_5 = VAR_3->gpio.get_data(VAR_3);
 VAR_6 = (VAR_5 & ~VAR_0) | FUNC_1(VAR_4);




 VAR_3->gpio.set_data(VAR_3, VAR_6);

 VAR_7 = FUNC_2(FUNC_0(VAR_3, VAR_1));
 FUNC_3(VAR_7 | VAR_2, FUNC_0(VAR_3, VAR_1));
}
