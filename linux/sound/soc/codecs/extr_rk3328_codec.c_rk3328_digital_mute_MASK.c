
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct rk3328_codec_priv {int regmap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int,unsigned int) ;
 struct rk3328_codec_priv* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_7, int VAR_8)
{
 struct rk3328_codec_priv *VAR_9 =
  FUNC_1(VAR_7->component);
 unsigned int VAR_10;

 if (VAR_8)
  VAR_10 = VAR_0 | VAR_3;
 else
  VAR_10 = VAR_2 | VAR_5;

 FUNC_0(VAR_9->regmap, VAR_6,
      VAR_1 | VAR_4, VAR_10);

 return 0;
}
