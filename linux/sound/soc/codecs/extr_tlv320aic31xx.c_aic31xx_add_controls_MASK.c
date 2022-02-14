
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct aic31xx_priv {int codec_type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;
 struct aic31xx_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_5)
{
 int VAR_6 = 0;
 struct aic31xx_priv *VAR_7 = FUNC_2(VAR_5);

 if (!(VAR_7->codec_type & VAR_1))
  VAR_6 = FUNC_1(
   VAR_5, VAR_4,
   FUNC_0(VAR_4));
 if (VAR_6)
  return VAR_6;

 if (VAR_7->codec_type & VAR_0)
  VAR_6 = FUNC_1(
   VAR_5, VAR_3,
   FUNC_0(VAR_3));
 else
  VAR_6 = FUNC_1(
   VAR_5, VAR_2,
   FUNC_0(VAR_2));

 return VAR_6;
}
