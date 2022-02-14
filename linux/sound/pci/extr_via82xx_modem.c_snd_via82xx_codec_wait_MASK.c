
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via82xx_modem {int dummy; } ;
struct snd_ac97 {int num; struct via82xx_modem* private_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct via82xx_modem*,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_ac97 *VAR_0)
{
 struct via82xx_modem *VAR_1 = VAR_0->private_data;
 int VAR_2;
 VAR_2 = FUNC_1(VAR_1, VAR_0->num);

 FUNC_0(500);
}
