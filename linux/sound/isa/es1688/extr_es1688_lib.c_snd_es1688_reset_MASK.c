
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_es1688 {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_es1688*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_es1688*,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int) ;

int FUNC_6(struct snd_es1688 *VAR_4)
{
 int VAR_5;

 FUNC_2(3, FUNC_0(VAR_4, VAR_3));
 FUNC_5(10);
 FUNC_2(0, FUNC_0(VAR_4, VAR_3));
 FUNC_5(30);
 for (VAR_5 = 0; VAR_5 < 1000 && !(FUNC_1(FUNC_0(VAR_4, VAR_0)) & 0x80); VAR_5++);
 if (FUNC_1(FUNC_0(VAR_4, VAR_2)) != 0xaa) {
  FUNC_4("ess_reset at 0x%lx: failed!!!\n", VAR_4->port);
  return -VAR_1;
 }
 FUNC_3(VAR_4, 0xc6);
 return 0;
}
