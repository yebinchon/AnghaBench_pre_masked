
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {unsigned int ecard_ctrl; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct snd_emu10k1*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct snd_emu10k1 *VAR_3,
      unsigned short VAR_4)
{
 unsigned int VAR_5;


 FUNC_0(VAR_3, VAR_3->ecard_ctrl & ~VAR_0);


 FUNC_0(VAR_3, VAR_3->ecard_ctrl & ~VAR_0);

 for (VAR_5 = (1 << 15); VAR_5; VAR_5 >>= 1) {
  unsigned int VAR_6;

  VAR_6 = VAR_3->ecard_ctrl & ~(VAR_0 | VAR_2);

  if (VAR_4 & VAR_5)
   VAR_6 |= VAR_2;


  FUNC_0(VAR_3, VAR_6);
  FUNC_0(VAR_3, VAR_6 | VAR_1);
  FUNC_0(VAR_3, VAR_6);
 }

 FUNC_0(VAR_3, VAR_3->ecard_ctrl);
}
