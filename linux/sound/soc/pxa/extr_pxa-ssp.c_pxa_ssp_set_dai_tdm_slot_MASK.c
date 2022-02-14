
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct ssp_priv {struct ssp_device* ssp; } ;
struct ssp_device {int dummy; } ;
struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_2 (struct ssp_device*,int ) ;
 int FUNC_3 (struct ssp_device*,int ,unsigned int) ;
 struct ssp_priv* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_6,
 unsigned int VAR_7, unsigned int VAR_8, int VAR_9, int VAR_10)
{
 struct ssp_priv *VAR_11 = FUNC_4(VAR_6);
 struct ssp_device *VAR_12 = VAR_11->ssp;
 u32 VAR_13;

 VAR_13 = FUNC_2(VAR_12, VAR_0);
 VAR_13 &= ~(VAR_3 | FUNC_1(8) | VAR_2 | VAR_1);


 if (VAR_10 > 16)
  VAR_13 |= VAR_2 | FUNC_0(VAR_10 - 16);
 else
  VAR_13 |= FUNC_0(VAR_10);

 if (VAR_9 > 1) {

  VAR_13 |= VAR_3;


  VAR_13 |= FUNC_1(VAR_9);


  FUNC_3(VAR_12, VAR_5, VAR_7);
  FUNC_3(VAR_12, VAR_4, VAR_8);
 }
 FUNC_3(VAR_12, VAR_0, VAR_13);

 return 0;
}
