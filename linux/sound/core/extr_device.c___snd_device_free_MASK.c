
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_device {TYPE_2__* card; TYPE_1__* ops; int list; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ (* dev_free ) (struct snd_device*) ;} ;


 int FUNC_0 (struct snd_device*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_device*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct snd_device*) ;

__attribute__((used)) static void FUNC_5(struct snd_device *VAR_0)
{

 FUNC_3(&VAR_0->list);

 FUNC_0(VAR_0);
 if (VAR_0->ops->dev_free) {
  if (VAR_0->ops->dev_free(VAR_0))
   FUNC_1(VAR_0->card->dev, "device free failure\n");
 }
 FUNC_2(VAR_0);
}
