
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_tplg {int dev; } ;
struct TYPE_2__ {int info; int put; int get; } ;
struct snd_soc_tplg_ctl_hdr {TYPE_1__ ops; } ;


 int FUNC_0 (int ,char*,char const*,int ,int ,int ,int ) ;
 int FUNC_1 (struct soc_tplg*) ;

__attribute__((used)) static inline void FUNC_2(struct soc_tplg *VAR_0,
 struct snd_soc_tplg_ctl_hdr *VAR_1, const char *VAR_2)
{
 FUNC_0(VAR_0->dev,
  "ASoC: no complete mixer IO handler for %s type (g,p,i) %d:%d:%d at 0x%lx\n",
  VAR_2, VAR_1->ops.get, VAR_1->ops.put, VAR_1->ops.info,
  FUNC_1(VAR_0));
}
