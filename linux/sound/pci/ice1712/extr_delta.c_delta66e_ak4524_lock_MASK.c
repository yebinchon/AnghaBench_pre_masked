
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;
struct snd_akm4xxx {struct snd_ice1712** private_data; scalar_t__* private_value; } ;
struct snd_ak4xxx_private {int cs_addr; int cs_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*) ;

__attribute__((used)) static void FUNC_1(struct snd_akm4xxx *VAR_2, int VAR_3)
{
 struct snd_ak4xxx_private *VAR_4 = (void *)VAR_2->private_value[0];
 struct snd_ice1712 *VAR_5 = VAR_2->private_data[0];

 FUNC_0(VAR_5);
 VAR_4->cs_mask =
 VAR_4->cs_addr = VAR_3 == 0 ? VAR_0 :
        VAR_1;
}
