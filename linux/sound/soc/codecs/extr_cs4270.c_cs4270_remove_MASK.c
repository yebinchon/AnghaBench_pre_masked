
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct cs4270_private {int supplies; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 struct cs4270_private* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_0)
{
 struct cs4270_private *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(FUNC_0(VAR_1->supplies), VAR_1->supplies);
}
