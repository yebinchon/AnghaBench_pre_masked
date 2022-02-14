
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct wm0010_priv {unsigned int sysclk; int pll_clkctrl1; scalar_t__ max_spi_freq; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_3__ {unsigned int max_sysclk; int pll_clkctrl1; scalar_t__ max_pll_spi_speed; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 struct wm0010_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_1, int VAR_2,
        int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct wm0010_priv *VAR_6 = FUNC_1(VAR_1);
 unsigned int VAR_7;

 VAR_6->sysclk = VAR_4;

 if (VAR_4 < VAR_0[FUNC_0(VAR_0)-1].max_sysclk) {
  VAR_6->max_spi_freq = 0;
 } else {
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0); VAR_7++)
   if (VAR_4 >= VAR_0[VAR_7].max_sysclk) {
    VAR_6->max_spi_freq = VAR_0[VAR_7].max_pll_spi_speed;
    VAR_6->pll_clkctrl1 = VAR_0[VAR_7].pll_clkctrl1;
    break;
   }
 }

 return 0;
}
