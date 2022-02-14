
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct special_params {unsigned int clk_src; } ;
struct snd_bebob {struct special_params* maudio_special_quirk; } ;



__attribute__((used)) static int FUNC_0(struct snd_bebob *VAR_0, unsigned int *VAR_1)
{
 struct special_params *VAR_2 = VAR_0->maudio_special_quirk;
 *VAR_1 = VAR_2->clk_src;
 return 0;
}
