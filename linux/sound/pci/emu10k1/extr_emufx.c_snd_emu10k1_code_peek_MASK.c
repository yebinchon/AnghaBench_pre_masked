
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_emu10k1_fx8010_code {int * code; int code_valid; } ;
struct snd_emu10k1 {scalar_t__ audigy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_emu10k1*,int) ;

__attribute__((used)) static int FUNC_4(struct snd_emu10k1 *VAR_1,
     struct snd_emu10k1_fx8010_code *VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_2->code_valid, 0, sizeof(VAR_2->code_valid));
 for (VAR_3 = 0; VAR_3 < (VAR_1->audigy ? 2*1024 : 2*512); VAR_3 += 2) {
  FUNC_2(VAR_3 / 2, VAR_2->code_valid);
  if (FUNC_1(FUNC_3(VAR_1, VAR_3 + 0), &VAR_2->code[VAR_3 + 0]))
   return -VAR_0;
  if (FUNC_1(FUNC_3(VAR_1, VAR_3 + 1), &VAR_2->code[VAR_3 + 1]))
   return -VAR_0;
 }
 return 0;
}
