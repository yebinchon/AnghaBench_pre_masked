
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int num; struct atiixp_modem* private_data; } ;
struct atiixp_modem {int dummy; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atiixp_modem*,int ,unsigned short) ;
 int FUNC_1 (struct atiixp_modem*,int ,unsigned short,unsigned short) ;

__attribute__((used)) static void FUNC_2(struct snd_ac97 *VAR_4, unsigned short VAR_5,
      unsigned short VAR_6)
{
 struct atiixp_modem *VAR_7 = VAR_4->private_data;
 if (VAR_5 == VAR_0) {
  FUNC_0(VAR_7, VAR_3,
   (VAR_6 << VAR_1) | VAR_2);
  return;
 }
 FUNC_1(VAR_7, VAR_4->num, VAR_5, VAR_6);
}
