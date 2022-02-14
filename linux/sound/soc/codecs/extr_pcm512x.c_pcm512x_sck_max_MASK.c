
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm512x_priv {int pll_out; } ;


 unsigned long FUNC_0 (struct pcm512x_priv*) ;

__attribute__((used)) static unsigned long FUNC_1(struct pcm512x_priv *VAR_0)
{
 if (!VAR_0->pll_out)
  return 25000000;
 return FUNC_0(VAR_0);
}
