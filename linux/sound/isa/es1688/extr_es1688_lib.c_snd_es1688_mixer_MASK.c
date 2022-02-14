
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_es1688 {int dummy; } ;
struct snd_card {int mixername; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct snd_card*,int ) ;
 int FUNC_3 (int *,struct snd_es1688*) ;
 int FUNC_4 (struct snd_es1688*) ;
 int * VAR_2 ;
 unsigned char** VAR_3 ;
 int FUNC_5 (struct snd_es1688*,unsigned char,unsigned char) ;
 int FUNC_6 (struct snd_es1688*,unsigned char,unsigned char) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct snd_card *VAR_4, struct snd_es1688 *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;
 unsigned char VAR_8, VAR_9;

 if (FUNC_1(!VAR_5 || !VAR_4))
  return -VAR_0;

 FUNC_7(VAR_4->mixername, FUNC_4(VAR_5));

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  if ((VAR_7 = FUNC_2(VAR_4, FUNC_3(&VAR_2[VAR_6], VAR_5))) < 0)
   return VAR_7;
 }
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_8 = VAR_3[VAR_6][0];
  VAR_9 = VAR_3[VAR_6][1];
  if (VAR_8 < 0xa0)
   FUNC_5(VAR_5, VAR_8, VAR_9);
  else
   FUNC_6(VAR_5, VAR_8, VAR_9);
 }
 return 0;
}
