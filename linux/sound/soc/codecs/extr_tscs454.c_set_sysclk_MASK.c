
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tscs454 {scalar_t__ sysclk_src_id; unsigned long bclk_freq; int sysclk; } ;
struct snd_soc_component {int dev; } ;
struct pll_ctl {TYPE_1__* settings; } ;
struct TYPE_2__ {int val; int addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int,...) ;
 struct pll_ctl* FUNC_2 (unsigned long) ;
 struct tscs454* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_3)
{
 struct tscs454 *VAR_4 = FUNC_3(VAR_3);
 struct pll_ctl const *VAR_5;
 unsigned long VAR_6;
 int VAR_7;
 int VAR_8;

 if (VAR_4->sysclk_src_id < VAR_1)
  VAR_6 = FUNC_0(VAR_4->sysclk);
 else
  VAR_6 = VAR_4->bclk_freq;
 VAR_5 = FUNC_2(VAR_6);
 if (!VAR_5) {
  VAR_8 = -VAR_0;
  FUNC_1(VAR_3->dev,
    "Invalid PLL input %lu (%d)\n", VAR_6, VAR_8);
  return VAR_8;
 }

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7) {
  VAR_8 = FUNC_4(VAR_3,
    VAR_5->settings[VAR_7].addr,
    VAR_5->settings[VAR_7].val);
  if (VAR_8 < 0) {
   FUNC_1(VAR_3->dev,
     "Failed to set pll setting (%d)\n",
     VAR_8);
   return VAR_8;
  }
 }

 return 0;
}
