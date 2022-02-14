
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct bcm2835_i2s_dev {unsigned int fmt; } ;


 struct bcm2835_i2s_dev* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_0,
          unsigned int VAR_1)
{
 struct bcm2835_i2s_dev *VAR_2 = FUNC_0(VAR_0);
 VAR_2->fmt = VAR_1;
 return 0;
}
