
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct rk3328_codec_priv {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;




 unsigned int VAR_14 ;


 unsigned int VAR_15 ;

 int FUNC_0 (int ,int ,int,unsigned int) ;
 struct rk3328_codec_priv* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_16, unsigned int VAR_17)
{
 struct rk3328_codec_priv *VAR_18 =
  FUNC_1(VAR_16->component);
 unsigned int VAR_19;

 switch (VAR_17 & VAR_15) {
 case 133:
  VAR_19 = VAR_11 | VAR_2;
  break;
 case 134:
  VAR_19 = VAR_13 | VAR_1;
  break;
 default:
  return -VAR_10;
 }

 FUNC_0(VAR_18->regmap, VAR_3,
      VAR_12 | VAR_0, VAR_19);

 switch (VAR_17 & VAR_14) {
 case 132:
 case 131:
  VAR_19 = VAR_8;
  break;
 case 130:
  VAR_19 = VAR_5;
  break;
 case 128:
  VAR_19 = VAR_9;
  break;
 case 129:
  VAR_19 = VAR_6;
  break;
 default:
  return -VAR_10;
 }

 FUNC_0(VAR_18->regmap, VAR_4,
      VAR_7, VAR_19);

 return 0;
}
