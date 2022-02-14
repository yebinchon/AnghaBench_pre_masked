
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (struct snd_cs46xx*,int ) ;
 unsigned int FUNC_1 (struct snd_cs46xx*,int ) ;
 int FUNC_2 (struct snd_cs46xx*,int ,unsigned int) ;
 int FUNC_3 (struct snd_cs46xx*,int ,unsigned int) ;
 int FUNC_4 (struct snd_cs46xx*) ;
 int FUNC_5 (struct snd_cs46xx*) ;

__attribute__((used)) static void FUNC_6(struct snd_cs46xx *VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = FUNC_0(VAR_6, VAR_4);
 VAR_7 &= ~0x0000f03f;
 VAR_7 |= 0x00000010;
 FUNC_2(VAR_6, VAR_4, VAR_7);

 VAR_7 = FUNC_0(VAR_6, VAR_2);
 VAR_7 &= ~0x0000003f;
 VAR_7 |= 0x00000011;
 FUNC_2(VAR_6, VAR_2, VAR_7);




 VAR_7 = FUNC_0(VAR_6, VAR_3);
 FUNC_2(VAR_6, VAR_3, VAR_7 & 0x0000ffff);




 VAR_7 = FUNC_0(VAR_6, VAR_1);
 FUNC_2(VAR_6, VAR_1, VAR_7 & 0xffff0000);




 FUNC_5(VAR_6);

 FUNC_4(VAR_6);




 FUNC_3(VAR_6, VAR_0, 0);





 VAR_7 = FUNC_1(VAR_6, VAR_0) & ~VAR_5;
 FUNC_3(VAR_6, VAR_0, VAR_7);
}
