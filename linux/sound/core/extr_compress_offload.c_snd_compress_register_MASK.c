
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_compr {int lock; TYPE_1__* ops; int * name; } ;
struct TYPE_2__ {int trigger; int set_params; int free; int open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct snd_compr*) ;

int FUNC_6(struct snd_compr *VAR_2)
{
 int VAR_3;

 if (VAR_2->name == ((void*)0) || VAR_2->ops == ((void*)0))
  return -VAR_0;

 FUNC_3("Registering compressed device %s\n", VAR_2->name);
 if (FUNC_4(!VAR_2->ops->open))
  return -VAR_0;
 if (FUNC_4(!VAR_2->ops->free))
  return -VAR_0;
 if (FUNC_4(!VAR_2->ops->set_params))
  return -VAR_0;
 if (FUNC_4(!VAR_2->ops->trigger))
  return -VAR_0;

 FUNC_0(&VAR_2->lock);


 FUNC_1(&VAR_1);
 VAR_3 = FUNC_5(VAR_2);
 FUNC_2(&VAR_1);
 return VAR_3;
}
