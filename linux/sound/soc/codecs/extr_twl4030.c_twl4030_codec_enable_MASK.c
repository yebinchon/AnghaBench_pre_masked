
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_priv {int codec_powered; } ;
struct snd_soc_component {int dummy; } ;


 int VAR_0 ;
 struct twl4030_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_1, int VAR_2)
{
 struct twl4030_priv *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 if (VAR_2 == VAR_3->codec_powered)
  return;

 if (VAR_2)
  VAR_4 = FUNC_2(VAR_0);
 else
  VAR_4 = FUNC_1(VAR_0);

 if (VAR_4 >= 0)
  VAR_3->codec_powered = VAR_2;



 FUNC_3(10);
}
