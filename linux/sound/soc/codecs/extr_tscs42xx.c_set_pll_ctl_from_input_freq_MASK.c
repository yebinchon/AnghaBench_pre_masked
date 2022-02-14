
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dev; } ;
struct pll_ctl {TYPE_1__* settings; } ;
struct TYPE_2__ {int val; int mask; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int const,...) ;
 struct pll_ctl* FUNC_1 (int const) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_2,
  const int VAR_3)
{
 int VAR_4;
 int VAR_5;
 const struct pll_ctl *VAR_6;

 VAR_6 = FUNC_1(VAR_3);
 if (!VAR_6) {
  VAR_4 = -VAR_0;
  FUNC_0(VAR_2->dev, "No PLL input entry for %d (%d)\n",
   VAR_3, VAR_4);
  return VAR_4;
 }

 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
  VAR_4 = FUNC_2(VAR_2,
   VAR_6->settings[VAR_5].addr,
   VAR_6->settings[VAR_5].mask,
   VAR_6->settings[VAR_5].val);
  if (VAR_4 < 0) {
   FUNC_0(VAR_2->dev, "Failed to set pll ctl (%d)\n",
    VAR_4);
   return VAR_4;
  }
 }

 return 0;
}
