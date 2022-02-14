
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_timer_id {int device; scalar_t__ subdevice; int card; int dev_sclass; int dev_class; } ;
struct TYPE_4__ {int ticks; int resolution; } ;
struct snd_timer {TYPE_2__ hw; struct snd_azf3328* private_data; int name; } ;
struct snd_azf3328 {struct snd_timer* timer; TYPE_1__* card; } ;
struct TYPE_3__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_0 (struct snd_timer*) ;
 int FUNC_1 (TYPE_1__*,char*,struct snd_timer_id*,struct snd_timer**) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(struct snd_azf3328 *VAR_4, int VAR_5)
{
 struct snd_timer *VAR_6 = ((void*)0);
 struct snd_timer_id VAR_7;
 int VAR_8;

 VAR_7.dev_class = VAR_0;
 VAR_7.dev_sclass = VAR_1;
 VAR_7.card = VAR_4->card->number;
 VAR_7.device = VAR_5;
 VAR_7.subdevice = 0;

 VAR_3.resolution *= VAR_2;
 VAR_3.ticks /= VAR_2;

 VAR_8 = FUNC_1(VAR_4->card, "AZF3328", &VAR_7, &VAR_6);
 if (VAR_8 < 0)
  goto out;

 FUNC_2(VAR_6->name, "AZF3328 timer");
 VAR_6->private_data = VAR_4;
 VAR_6->hw = VAR_3;

 VAR_4->timer = VAR_6;

 FUNC_0(VAR_6);

 VAR_8 = 0;

out:
 return VAR_8;
}
