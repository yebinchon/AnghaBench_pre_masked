
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int dapm; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_card *VAR_0)
{
 FUNC_0(&VAR_0->dapm, "Headphone");
 FUNC_0(&VAR_0->dapm, "Headset Mic");
 FUNC_0(&VAR_0->dapm, "Main AMIC");
 FUNC_0(&VAR_0->dapm, "Main DMIC");
 FUNC_0(&VAR_0->dapm, "Main Speaker");
 FUNC_0(&VAR_0->dapm, "WM1250 Output");
 FUNC_0(&VAR_0->dapm, "WM1250 Input");

 return 0;
}
