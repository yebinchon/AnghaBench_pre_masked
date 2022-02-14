
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct psc_dma {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,struct snd_soc_dai*,unsigned int) ;
 struct psc_dma* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, unsigned int VAR_3)
{
 struct psc_dma *VAR_4 = FUNC_1(VAR_2);
 FUNC_0(VAR_4->dev, "psc_i2s_set_fmt(cpu_dai=%p, format=%i)\n",
    VAR_2, VAR_3);
 return (VAR_3 == VAR_1) ? 0 : -VAR_0;
}
