
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; int dev; } ;
struct q6afe_dai_data {int ** port; } ;


 struct q6afe_dai_data* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0)
{
 struct q6afe_dai_data *VAR_1 = FUNC_0(VAR_0->dev);

 FUNC_1(VAR_1->port[VAR_0->id]);
 VAR_1->port[VAR_0->id] = ((void*)0);

 return 0;
}
