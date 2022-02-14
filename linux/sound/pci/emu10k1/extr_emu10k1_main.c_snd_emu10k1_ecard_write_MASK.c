
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {unsigned long port; } ;


 unsigned short VAR_0 ;
 unsigned int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned int,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct snd_emu10k1 *VAR_5, unsigned int VAR_6)
{
 unsigned short VAR_7;
 unsigned int VAR_8;
 unsigned long VAR_9;
 unsigned int VAR_10;

 VAR_9 = VAR_5->port + VAR_2;
 VAR_10 = FUNC_0(VAR_9) & ~(VAR_3 | VAR_1 | VAR_4);
 FUNC_1(VAR_10, VAR_9);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {


  VAR_8 = ((VAR_6 & 0x1) ? VAR_4 : 0);
  VAR_6 >>= 1;

  FUNC_1(VAR_10 | VAR_8, VAR_9);


  FUNC_1(VAR_10 | VAR_8 | VAR_1, VAR_9);
  FUNC_1(VAR_10 | VAR_8, VAR_9);
 }


 FUNC_1(VAR_10 | VAR_3, VAR_9);
 FUNC_1(VAR_10, VAR_9);
}
