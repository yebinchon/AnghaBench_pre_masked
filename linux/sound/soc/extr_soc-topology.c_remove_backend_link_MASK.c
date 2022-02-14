
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dobj {int list; int type; TYPE_1__* ops; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int (* link_unload ) (struct snd_soc_component*,struct snd_soc_dobj*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_soc_component*,struct snd_soc_dobj*) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_2,
 struct snd_soc_dobj *VAR_3, int VAR_4)
{
 if (VAR_4 != VAR_1)
  return;

 if (VAR_3->ops && VAR_3->ops->link_unload)
  VAR_3->ops->link_unload(VAR_2, VAR_3);






 VAR_3->type = VAR_0;
 FUNC_0(&VAR_3->list);
}
