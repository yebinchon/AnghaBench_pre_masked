
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sof_route {int list; struct snd_sof_route* private; } ;
struct snd_soc_dobj {struct snd_sof_route* private; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (struct snd_sof_route*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_0,
       struct snd_soc_dobj *VAR_1)
{
 struct snd_sof_route *VAR_2;

 VAR_2 = VAR_1->private;
 if (!VAR_2)
  return 0;


 FUNC_0(VAR_2->private);
 FUNC_1(&VAR_2->list);
 FUNC_0(VAR_2);

 return 0;
}
