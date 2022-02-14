
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct aic26 {unsigned int mclk; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,struct snd_soc_dai*,int,unsigned int,int) ;
 struct aic26* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_1,
       int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_1->component;
 struct aic26 *VAR_6 = FUNC_1(VAR_5);

 FUNC_0(&VAR_6->spi->dev, "aic26_set_sysclk(dai=%p, clk_id==%i,"
  " freq=%i, dir=%i)\n",
  VAR_1, VAR_2, VAR_3, VAR_4);


 if ((VAR_3 < 2000000) || (VAR_3 > 50000000))
  return -VAR_0;

 VAR_6->mclk = VAR_3;
 return 0;
}
