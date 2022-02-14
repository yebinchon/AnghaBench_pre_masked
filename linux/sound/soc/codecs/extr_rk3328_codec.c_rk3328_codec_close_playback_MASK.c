
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rk3328_codec_priv {int regmap; } ;
struct TYPE_3__ {int val; int msk; int reg; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_7 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct rk3328_codec_priv*,int ) ;
 int FUNC_4 (struct rk3328_codec_priv*) ;

__attribute__((used)) static int FUNC_5(struct rk3328_codec_priv *VAR_8)
{
 size_t VAR_9;

 FUNC_3(VAR_8, 0);

 FUNC_2(VAR_8->regmap, VAR_3,
      VAR_4, 0);
 FUNC_2(VAR_8->regmap, VAR_5,
      VAR_6, 0);

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_7); VAR_9++) {
  FUNC_2(VAR_8->regmap,
       VAR_7[VAR_9].reg,
       VAR_7[VAR_9].msk,
       VAR_7[VAR_9].val);
  FUNC_1(1);
 }


 FUNC_4(VAR_8);

 FUNC_2(VAR_8->regmap, VAR_2,
      VAR_0,
      VAR_1);

 return 0;
}
