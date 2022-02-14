
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_dai {int dummy; } ;
struct imx_ssi {scalar_t__ base; } ;


 int VAR_0 ;






 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 struct imx_ssi* FUNC_2 (struct snd_soc_dai*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_5,
      int VAR_6, int VAR_7)
{
 struct imx_ssi *VAR_8 = FUNC_2(VAR_5);
 u32 VAR_9, VAR_10;

 VAR_9 = FUNC_1(VAR_8->base + VAR_2);
 VAR_10 = FUNC_1(VAR_8->base + VAR_1);

 switch (VAR_6) {
 case 130:
  VAR_9 &= ~VAR_3;
  VAR_9 |= VAR_7;
  break;
 case 128:
  VAR_9 &= ~VAR_4;
  VAR_9 |= VAR_7;
  break;
 case 129:
  VAR_9 &= ~0xff;
  VAR_9 |= FUNC_0(VAR_7);
  break;
 case 133:
  VAR_9 &= ~VAR_3;
  VAR_9 |= VAR_7;
  break;
 case 131:
  VAR_9 &= ~VAR_4;
  VAR_9 |= VAR_7;
  break;
 case 132:
  VAR_9 &= ~0xff;
  VAR_9 |= FUNC_0(VAR_7);
  break;
 default:
  return -VAR_0;
 }

 FUNC_3(VAR_9, VAR_8->base + VAR_2);
 FUNC_3(VAR_10, VAR_8->base + VAR_1);

 return 0;
}
