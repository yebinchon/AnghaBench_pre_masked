
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm512x_priv {unsigned long overclock_dac; } ;



__attribute__((used)) static unsigned long FUNC_0(struct pcm512x_priv *VAR_0,
         unsigned long VAR_1)
{
 return VAR_1 + VAR_1 * VAR_0->overclock_dac / 100;
}
