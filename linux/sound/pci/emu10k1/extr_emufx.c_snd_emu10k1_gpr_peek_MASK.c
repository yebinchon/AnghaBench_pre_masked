
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_emu10k1_fx8010_code {int * gpr_map; int gpr_valid; } ;
struct snd_emu10k1 {scalar_t__ gpr_base; scalar_t__ audigy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct snd_emu10k1*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_emu10k1 *VAR_1,
    struct snd_emu10k1_fx8010_code *VAR_2)
{
 int VAR_3;
 u32 VAR_4;

 for (VAR_3 = 0; VAR_3 < (VAR_1->audigy ? 0x200 : 0x100); VAR_3++) {
  FUNC_1(VAR_3, VAR_2->gpr_valid);
  VAR_4 = FUNC_2(VAR_1, VAR_1->gpr_base + VAR_3, 0);
  if (FUNC_0(VAR_4, &VAR_2->gpr_map[VAR_3]))
   return -VAR_0;
 }
 return 0;
}
