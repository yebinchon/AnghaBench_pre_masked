
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_i2s {unsigned int format; int regmap; TYPE_1__* variant; } ;
struct snd_soc_dai {int dev; } ;
struct TYPE_2__ {int (* set_fmt ) (struct sun4i_i2s*,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int,int) ;
 struct sun4i_i2s* FUNC_4 (struct snd_soc_dai*) ;
 int FUNC_5 (struct sun4i_i2s*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_3, unsigned int VAR_4)
{
 struct sun4i_i2s *VAR_5 = FUNC_4(VAR_3);
 int VAR_6;

 VAR_6 = VAR_5->variant->set_fmt(VAR_5, VAR_4);
 if (VAR_6) {
  FUNC_2(VAR_3->dev, "Unsupported format configuration\n");
  return VAR_6;
 }


 FUNC_3(VAR_5->regmap, VAR_0,
      VAR_2 |
      VAR_1,
      FUNC_1(1) |
      FUNC_0(1));

 VAR_5->format = VAR_4;

 return 0;
}
