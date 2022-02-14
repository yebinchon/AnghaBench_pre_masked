
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sun4i_i2s {int regmap; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params const*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(const struct sun4i_i2s *VAR_5,
      const struct snd_pcm_hw_params *VAR_6)
{
 unsigned int VAR_7 = FUNC_1(VAR_6);


 FUNC_3(VAR_5->regmap, VAR_3, 0x76543210);
 FUNC_3(VAR_5->regmap, VAR_1, 0x00003210);


 FUNC_2(VAR_5->regmap, VAR_4,
      VAR_0,
      FUNC_0(VAR_7));
 FUNC_2(VAR_5->regmap, VAR_2,
      VAR_0,
      FUNC_0(VAR_7));

 return 0;
}
