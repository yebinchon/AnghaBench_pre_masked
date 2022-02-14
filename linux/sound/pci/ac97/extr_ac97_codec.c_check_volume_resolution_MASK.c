
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97_res_table {int reg; int bits; } ;
struct snd_ac97 {struct snd_ac97_res_table* res_table; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (unsigned short*) ;
 unsigned short FUNC_1 (struct snd_ac97*,int) ;
 int FUNC_2 (struct snd_ac97*,int,unsigned short) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 *VAR_1, int VAR_2, unsigned char *VAR_3, unsigned char *VAR_4)
{
 unsigned short VAR_5[3] = { 0x20, 0x10, 0x01 };
 unsigned char VAR_6[3] = { 63, 31, 15 };
 int VAR_7;


 if (VAR_1->res_table) {
  const struct snd_ac97_res_table *VAR_8;
  for (VAR_8 = VAR_1->res_table; VAR_8->reg; VAR_8++) {
   if (VAR_8->reg == VAR_2) {
    *VAR_3 = VAR_8->bits & 0xff;
    *VAR_4 = (VAR_8->bits >> 8) & 0xff;
    return;
   }
  }
 }

 *VAR_3 = *VAR_4 = 0;
 for (VAR_7 = 0 ; VAR_7 < FUNC_0(VAR_5); VAR_7++) {
  unsigned short VAR_9;
  FUNC_2(
   VAR_1, VAR_2,
   VAR_0 | VAR_5[VAR_7] | (VAR_5[VAR_7] << 8)
  );




  VAR_9 = FUNC_1(VAR_1, VAR_2);
  VAR_9 = FUNC_1(VAR_1, VAR_2);
  if (! *VAR_3 && (VAR_9 & 0x7f) == VAR_5[VAR_7])
   *VAR_3 = VAR_6[VAR_7];
  if (! *VAR_4 && ((VAR_9 >> 8) & 0x7f) == VAR_5[VAR_7])
   *VAR_4 = VAR_6[VAR_7];
  if (*VAR_3 && *VAR_4)
   break;
 }
}
