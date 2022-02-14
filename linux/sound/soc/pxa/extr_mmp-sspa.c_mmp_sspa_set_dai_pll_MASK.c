
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sspa_priv {TYPE_1__* sspa; int sysclk; } ;
struct snd_soc_dai {int dummy; } ;
struct TYPE_2__ {int clk; } ;


 int VAR_0 ;


 int FUNC_0 (int ,unsigned int) ;
 struct sspa_priv* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_1, int VAR_2,
     int VAR_3, unsigned int VAR_4,
     unsigned int VAR_5)
{
 struct sspa_priv *VAR_6 = FUNC_1(VAR_1);
 int VAR_7 = 0;

 switch (VAR_2) {
 case 128:
  VAR_7 = FUNC_0(VAR_6->sysclk, VAR_5);
  if (VAR_7)
   return VAR_7;
  break;
 case 129:
  VAR_7 = FUNC_0(VAR_6->sspa->clk, VAR_5);
  if (VAR_7)
   return VAR_7;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
