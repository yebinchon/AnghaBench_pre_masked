
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int irq; struct snd_card* card; int mixer_mutex; struct snd_vx_ops* ops; int type; struct snd_vx_hardware* hw; int lock; } ;
struct snd_vx_ops {int dummy; } ;
struct snd_vx_hardware {char* name; int type; } ;
struct snd_card {int shortname; int driver; struct vx_core* private_data; } ;


 int VAR_0 ;
 struct vx_core* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct vx_core*) ;

struct vx_core *FUNC_6(struct snd_card *VAR_1, struct snd_vx_hardware *VAR_2,
         struct snd_vx_ops *VAR_3,
         int VAR_4)
{
 struct vx_core *VAR_5;

 if (FUNC_2(!VAR_1 || !VAR_2 || !VAR_3))
  return ((void*)0);

 VAR_5 = FUNC_0(sizeof(*VAR_5) + VAR_4, VAR_0);
 if (! VAR_5)
  return ((void*)0);
 FUNC_1(&VAR_5->lock);
 VAR_5->irq = -1;
 VAR_5->hw = VAR_2;
 VAR_5->type = VAR_2->type;
 VAR_5->ops = VAR_3;
 FUNC_1(&VAR_5->mixer_mutex);

 VAR_5->card = VAR_1;
 VAR_1->private_data = VAR_5;
 FUNC_4(VAR_1->driver, VAR_2->name);
 FUNC_3(VAR_1->shortname, "Digigram %s", VAR_2->name);

 FUNC_5(VAR_5);

 return VAR_5;
}
