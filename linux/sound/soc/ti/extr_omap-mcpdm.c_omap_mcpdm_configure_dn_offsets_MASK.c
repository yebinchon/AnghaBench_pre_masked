
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_pcm_runtime {int cpu_dai; } ;
struct omap_mcpdm {int dn_rx_offset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct omap_mcpdm* FUNC_2 (int ) ;

void FUNC_3(struct snd_soc_pcm_runtime *VAR_0,
        u8 VAR_1, u8 VAR_2)
{
 struct omap_mcpdm *VAR_3 = FUNC_2(VAR_0->cpu_dai);

 VAR_3->dn_rx_offset = FUNC_0(VAR_1) | FUNC_1(VAR_2);
}
