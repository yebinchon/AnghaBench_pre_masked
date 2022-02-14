
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct imx_ssi {scalar_t__ base; } ;


 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 struct imx_ssi* FUNC_1 (struct snd_soc_dai*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_4,
      int VAR_5, unsigned int VAR_6, int VAR_7)
{
 struct imx_ssi *VAR_8 = FUNC_1(VAR_4);
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_8->base + VAR_2);

 switch (VAR_5) {
 case 128:
  if (VAR_7 == VAR_1)
   VAR_9 |= VAR_3;
  else
   VAR_9 &= ~VAR_3;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_9, VAR_8->base + VAR_2);

 return 0;
}
