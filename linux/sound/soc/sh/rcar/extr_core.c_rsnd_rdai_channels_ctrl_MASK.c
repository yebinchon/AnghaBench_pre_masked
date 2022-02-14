
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_dai {int max_channels; } ;



int FUNC_0(struct rsnd_dai *VAR_0,
       int VAR_1)
{
 if (VAR_1 > 0)
  VAR_0->max_channels = VAR_1;

 return VAR_0->max_channels;
}
