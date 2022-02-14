
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;
struct snd_akm4xxx {struct snd_ice1712** private_data; } ;


 int FUNC_0 (struct snd_ice1712*,int) ;
 int FUNC_1 (struct snd_ice1712*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct snd_akm4xxx *VAR_0, int VAR_1)
{
 struct snd_ice1712 *VAR_2 = VAR_0->private_data[0];
 FUNC_1(VAR_2);
 FUNC_2(1);
 FUNC_0(VAR_2, 0x0f);
}
