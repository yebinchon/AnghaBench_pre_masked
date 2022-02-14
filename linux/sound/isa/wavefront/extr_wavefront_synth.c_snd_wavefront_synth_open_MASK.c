
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_hwdep {TYPE_1__* card; } ;
struct file {struct snd_hwdep* private_data; } ;
struct TYPE_2__ {int module; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

int
FUNC_1 (struct snd_hwdep *VAR_1, struct file *VAR_2)

{
 if (!FUNC_0(VAR_1->card->module))
  return -VAR_0;
 VAR_2->private_data = VAR_1;
 return 0;
}
