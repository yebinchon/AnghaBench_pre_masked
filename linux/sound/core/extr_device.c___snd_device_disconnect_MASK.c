
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_device {scalar_t__ state; TYPE_2__* card; TYPE_1__* ops; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ (* dev_disconnect ) (struct snd_device*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct snd_device*) ;

__attribute__((used)) static void FUNC_2(struct snd_device *VAR_2)
{
 if (VAR_2->state == VAR_1) {
  if (VAR_2->ops->dev_disconnect &&
      VAR_2->ops->dev_disconnect(VAR_2))
   FUNC_0(VAR_2->card->dev, "device disconnect failure\n");
  VAR_2->state = VAR_0;
 }
}
