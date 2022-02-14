
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm512x_priv {int overclock_pll; } ;



__attribute__((used)) static unsigned long FUNC_0(struct pcm512x_priv *VAR_0)
{
 return 25000000 + 25000000 * VAR_0->overclock_pll / 100;
}
