
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_akm4xxx {int num_dacs; unsigned char total_regs; } ;


 int FUNC_0 (struct snd_akm4xxx*,unsigned int,unsigned char) ;
 int FUNC_1 (struct snd_akm4xxx*,unsigned int,unsigned char,int) ;

__attribute__((used)) static void FUNC_2(struct snd_akm4xxx *VAR_0, int VAR_1)
{
 unsigned int VAR_2;
 unsigned char VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_dacs/2; VAR_2++) {
  FUNC_1(VAR_0, VAR_2, 0x01, VAR_1 ? 0x00 : 0x03);
  if (VAR_1)
   continue;

  for (VAR_3 = 0x04; VAR_3 < VAR_0->total_regs; VAR_3++)
   FUNC_1(VAR_0, VAR_2, VAR_3,
       FUNC_0(VAR_0, VAR_2, VAR_3));
 }
}
