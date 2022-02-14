
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct fsl_sai {int slots; int slot_width; } ;


 struct fsl_sai* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_0, u32 VAR_1,
    u32 VAR_2, int VAR_3, int VAR_4)
{
 struct fsl_sai *VAR_5 = FUNC_0(VAR_0);

 VAR_5->slots = VAR_3;
 VAR_5->slot_width = VAR_4;

 return 0;
}
