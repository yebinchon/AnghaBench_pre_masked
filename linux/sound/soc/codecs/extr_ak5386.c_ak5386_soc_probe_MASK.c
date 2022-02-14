
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct ak5386_priv {int supplies; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct ak5386_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_0)
{
 struct ak5386_priv *VAR_1 = FUNC_2(VAR_0);
 return FUNC_1(FUNC_0(VAR_1->supplies), VAR_1->supplies);
}
