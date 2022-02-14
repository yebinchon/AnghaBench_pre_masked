
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int list; struct snd_soc_card* card; } ;
struct snd_soc_card {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_soc_card*,int) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_0)
{
 struct snd_soc_card *VAR_1 = VAR_0->card;

 if (VAR_1)
  FUNC_1(VAR_1, 0);

 FUNC_0(&VAR_0->list);
}
