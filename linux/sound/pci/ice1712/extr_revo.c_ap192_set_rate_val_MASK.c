
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {int dummy; } ;
struct snd_akm4xxx {struct snd_ice1712** private_data; } ;


 int FUNC_0 (struct snd_akm4xxx*,unsigned int) ;
 int FUNC_1 (struct snd_ice1712*,int,int) ;

__attribute__((used)) static void FUNC_2(struct snd_akm4xxx *VAR_0, unsigned int VAR_1)
{
 struct snd_ice1712 *VAR_2 = VAR_0->private_data[0];
 int VAR_3;

 FUNC_0(VAR_0, VAR_1);


 FUNC_1(VAR_2, 1 << 8, VAR_1 > 96000 ? 1 << 8 : 0);

 if (VAR_1 > 96000)
  VAR_3 = 2;
 else if (VAR_1 > 48000)
  VAR_3 = 1;
 else
  VAR_3 = 0;
 FUNC_1(VAR_2, 3 << 9, VAR_3 << 9);

 FUNC_1(VAR_2, 1 << 11, 0);
 FUNC_1(VAR_2, 1 << 11, 1 << 11);
}
