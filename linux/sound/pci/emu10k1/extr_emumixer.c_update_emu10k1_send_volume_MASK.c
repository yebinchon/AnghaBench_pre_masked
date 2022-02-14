
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {scalar_t__ audigy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_emu10k1*,int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct snd_emu10k1 *VAR_5, int VAR_6, unsigned char *VAR_7)
{
 FUNC_0(VAR_5, VAR_3, VAR_6, VAR_7[0]);
 FUNC_0(VAR_5, VAR_4, VAR_6, VAR_7[1]);
 FUNC_0(VAR_5, VAR_2, VAR_6, VAR_7[2]);
 FUNC_0(VAR_5, VAR_1, VAR_6, VAR_7[3]);
 if (VAR_5->audigy) {
  unsigned int VAR_8 = ((unsigned int)VAR_7[4] << 24) |
   ((unsigned int)VAR_7[5] << 16) |
   ((unsigned int)VAR_7[6] << 8) |
   (unsigned int)VAR_7[7];
  FUNC_0(VAR_5, VAR_0, VAR_6, VAR_8);
 }
}
