
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssp_priv {struct ssp_device* ssp; } ;
struct ssp_device {int dummy; } ;
struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ssp_device*,int ) ;
 int FUNC_1 (struct ssp_device*,int ,int ) ;
 struct ssp_priv* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_2,
 int VAR_3)
{
 struct ssp_priv *VAR_4 = FUNC_2(VAR_2);
 struct ssp_device *VAR_5 = VAR_4->ssp;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 if (VAR_3)
  VAR_6 &= ~VAR_1;
 else
  VAR_6 |= VAR_1;
 FUNC_1(VAR_5, VAR_0, VAR_6);

 return 0;
}
