
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5651_priv {int pressed; int press_reported; int bp_work; scalar_t__ release_count; scalar_t__ press_count; scalar_t__ poll_count; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (int *,int ) ;
 struct rt5651_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_1)
{
 struct rt5651_priv *VAR_2 = FUNC_3(VAR_1);

 VAR_2->poll_count = 0;
 VAR_2->press_count = 0;
 VAR_2->release_count = 0;
 VAR_2->pressed = 0;
 VAR_2->press_reported = 0;
 FUNC_1(VAR_1);
 FUNC_2(&VAR_2->bp_work, FUNC_0(VAR_0));
}
