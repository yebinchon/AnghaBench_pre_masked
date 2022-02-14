
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct cx20442_priv {int por; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int const FUNC_4 (struct snd_soc_component*) ;
 struct cx20442_priv* FUNC_5 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_component *VAR_0,
  enum snd_soc_bias_level VAR_1)
{
 struct cx20442_priv *VAR_2 = FUNC_5(VAR_0);
 int VAR_3 = 0;

 switch (VAR_1) {
 case 129:
  if (FUNC_4(VAR_0) != 128)
   break;
  if (FUNC_0(VAR_2->por))
   VAR_3 = FUNC_1(VAR_2->por);
  else
   VAR_3 = FUNC_3(VAR_2->por);
  break;
 case 128:
  if (FUNC_4(VAR_0) != 129)
   break;
  if (FUNC_0(VAR_2->por))
   VAR_3 = FUNC_1(VAR_2->por);
  else
   VAR_3 = FUNC_2(VAR_2->por);
  break;
 default:
  break;
 }

 return VAR_3;
}
