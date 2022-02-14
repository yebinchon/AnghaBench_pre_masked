
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct aic26 {TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,struct snd_soc_dai*,int) ;
 struct aic26* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1, int VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_1->component;
 struct aic26 *VAR_4 = FUNC_1(VAR_3);
 u16 VAR_5;

 FUNC_0(&VAR_4->spi->dev, "aic26_mute(dai=%p, mute=%i)\n",
  VAR_1, VAR_2);

 if (VAR_2)
  VAR_5 = 0x8080;
 else
  VAR_5 = 0;
 FUNC_2(VAR_3, VAR_0, 0x8000, VAR_5);

 return 0;
}
