
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct mxs_saif {unsigned int mclk; } ;


 int VAR_0 ;

 struct mxs_saif* FUNC_0 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_1,
   int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct mxs_saif *VAR_5 = FUNC_0(VAR_1);

 switch (VAR_2) {
 case 128:
  VAR_5->mclk = VAR_3;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
