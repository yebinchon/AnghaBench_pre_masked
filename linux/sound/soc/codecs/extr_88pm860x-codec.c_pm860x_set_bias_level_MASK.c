
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct pm860x_priv {int i2c; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct snd_soc_component*) ;
 struct pm860x_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_4,
     enum snd_soc_bias_level VAR_5)
{
 struct pm860x_priv *VAR_6 = FUNC_3(VAR_4);
 int VAR_7;

 switch (VAR_5) {
 case 130:
  break;

 case 129:
  break;

 case 128:
  if (FUNC_2(VAR_4) == 131) {

   VAR_7 = VAR_0 | VAR_1;
   FUNC_0(VAR_6->i2c, VAR_3, VAR_7);
   FUNC_4(300);
   VAR_7 = VAR_0 | VAR_2
    | VAR_1;
   FUNC_0(VAR_6->i2c, VAR_3, VAR_7);
  }
  break;

 case 131:
  VAR_7 = VAR_0 | VAR_2 | VAR_1;
  FUNC_1(VAR_6->i2c, VAR_3, VAR_7, 0);
  break;
 }
 return 0;
}
