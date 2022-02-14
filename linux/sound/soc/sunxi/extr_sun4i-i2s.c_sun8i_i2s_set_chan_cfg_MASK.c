
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_i2s {int slots; int format; int regmap; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;



 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 int VAR_5 ;
 int FUNC_2 (unsigned int) ;
 int VAR_6 ;
 int FUNC_3 (unsigned int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (unsigned int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_5 (struct snd_pcm_hw_params const*) ;
 unsigned int FUNC_6 (struct snd_pcm_hw_params const*) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static int FUNC_9(const struct sun4i_i2s *VAR_13,
      const struct snd_pcm_hw_params *VAR_14)
{
 unsigned int VAR_15 = FUNC_5(VAR_14);
 unsigned int VAR_16 = VAR_15;
 unsigned int VAR_17;

 if (VAR_13->slots)
  VAR_16 = VAR_13->slots;


 FUNC_8(VAR_13->regmap, VAR_11, 0x76543210);
 FUNC_8(VAR_13->regmap, VAR_8, 0x76543210);


 FUNC_7(VAR_13->regmap, VAR_12,
      VAR_2,
      FUNC_0(VAR_15));
 FUNC_7(VAR_13->regmap, VAR_9,
      VAR_2,
      FUNC_0(VAR_15));

 FUNC_7(VAR_13->regmap, VAR_4,
      VAR_6,
      FUNC_2(VAR_15));
 FUNC_7(VAR_13->regmap, VAR_4,
      VAR_5,
      FUNC_1(VAR_15));

 switch (VAR_13->format & VAR_1) {
 case 132:
 case 131:
 case 129:
 case 128:
  VAR_17 = FUNC_6(VAR_14) * VAR_16;
  break;

 case 130:
  VAR_17 = FUNC_6(VAR_14);
  break;

 default:
  return -VAR_0;
 }

 FUNC_7(VAR_13->regmap, VAR_3,
      VAR_7,
      FUNC_3(VAR_17));

 FUNC_7(VAR_13->regmap, VAR_12,
      VAR_10,
      FUNC_4(VAR_15));

 return 0;
}
