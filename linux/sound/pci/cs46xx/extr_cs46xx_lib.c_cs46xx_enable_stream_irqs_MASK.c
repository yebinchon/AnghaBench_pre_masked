
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
 unsigned int FUNC_0 (struct snd_cs46xx*,int ) ;
 int FUNC_1 (struct snd_cs46xx*,int ,unsigned int) ;
 int FUNC_2 (struct snd_cs46xx*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct snd_cs46xx *VAR_5)
{
 unsigned int VAR_6;

 FUNC_2(VAR_5, VAR_0, VAR_4 | VAR_3);

 VAR_6 = FUNC_0(VAR_5, VAR_2);
 VAR_6 &= ~0x0000f03f;
 FUNC_1(VAR_5, VAR_2, VAR_6);

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 VAR_6 &= ~0x0000003f;
 VAR_6 |= 0x00000001;
 FUNC_1(VAR_5, VAR_1, VAR_6);
}
