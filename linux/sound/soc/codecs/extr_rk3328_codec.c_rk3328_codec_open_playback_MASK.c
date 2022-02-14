
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rk3328_codec_priv {int regmap; int spk_depop_time; } ;
struct TYPE_3__ {int val; int msk; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_8 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct rk3328_codec_priv*,int) ;

__attribute__((used)) static int FUNC_5(struct rk3328_codec_priv *VAR_9)
{
 int VAR_10;

 FUNC_3(VAR_9->regmap, VAR_2,
      VAR_0,
      VAR_1);

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8); VAR_10++) {
  FUNC_3(VAR_9->regmap,
       VAR_8[VAR_10].reg,
       VAR_8[VAR_10].msk,
       VAR_8[VAR_10].val);
  FUNC_1(1);
 }

 FUNC_2(VAR_9->spk_depop_time);
 FUNC_4(VAR_9, 1);

 FUNC_3(VAR_9->regmap, VAR_3,
      VAR_4, VAR_7);
 FUNC_3(VAR_9->regmap, VAR_5,
      VAR_6, VAR_7);

 return 0;
}
