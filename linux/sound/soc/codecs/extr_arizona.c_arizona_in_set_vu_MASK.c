
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct arizona_priv {int num_inputs; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 struct arizona_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,scalar_t__,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_2, int VAR_3)
{
 struct arizona_priv *VAR_4 = FUNC_0(VAR_2);
 unsigned int VAR_5;
 int VAR_6;

 if (VAR_3)
  VAR_5 = VAR_1;
 else
  VAR_5 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4->num_inputs; VAR_6++)
  FUNC_1(VAR_2,
        VAR_0 + (VAR_6 * 4),
        VAR_1, VAR_5);
}
