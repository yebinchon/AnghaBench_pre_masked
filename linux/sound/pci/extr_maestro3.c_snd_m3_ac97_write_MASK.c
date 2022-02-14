
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_m3 {int dummy; } ;
struct snd_ac97 {int id; struct snd_m3* private_data; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct snd_m3*) ;
 int FUNC_1 (struct snd_m3*,unsigned short,int ) ;
 int FUNC_2 (struct snd_m3*,unsigned short,int ) ;

__attribute__((used)) static void
FUNC_3(struct snd_ac97 *VAR_3, unsigned short VAR_4, unsigned short VAR_5)
{
 struct snd_m3 *VAR_6 = VAR_3->private_data;

 if (FUNC_0(VAR_6))
  return;
 FUNC_2(VAR_6, VAR_5, VAR_2);
 FUNC_1(VAR_6, VAR_4 & 0x7f, VAR_1);





 if (VAR_3->id == 0x45838308 && VAR_4 == VAR_0) {
  FUNC_0(VAR_6);
  FUNC_2(VAR_6, VAR_5, VAR_2);
  FUNC_1(VAR_6, VAR_4 & 0x7f, VAR_1);
 }
}
