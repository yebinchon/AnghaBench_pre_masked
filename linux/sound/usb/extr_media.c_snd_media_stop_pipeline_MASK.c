
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_usb_substream {struct media_ctl* media_ctl; } ;
struct media_ctl {TYPE_1__* media_dev; int media_entity; } ;
struct TYPE_2__ {int graph_mutex; int (* disable_source ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct snd_usb_substream *VAR_0)
{
 struct media_ctl *VAR_1 = VAR_0->media_ctl;

 if (!VAR_1)
  return;

 FUNC_0(&VAR_1->media_dev->graph_mutex);
 if (VAR_1->media_dev->disable_source)
  VAR_1->media_dev->disable_source(&VAR_1->media_entity);
 FUNC_1(&VAR_1->media_dev->graph_mutex);
}
