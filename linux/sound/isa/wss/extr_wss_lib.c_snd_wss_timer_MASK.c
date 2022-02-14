
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_wss {struct snd_timer* timer; TYPE_1__* card; } ;
struct snd_timer_id {int device; scalar_t__ subdevice; int card; int dev_sclass; int dev_class; } ;
struct snd_timer {int hw; int private_free; struct snd_wss* private_data; int name; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,struct snd_timer_id*,struct snd_timer**) ;
 int FUNC_1 (struct snd_wss*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct snd_wss *VAR_4, int VAR_5)
{
 struct snd_timer *VAR_6;
 struct snd_timer_id VAR_7;
 int VAR_8;


 VAR_7.dev_class = VAR_0;
 VAR_7.dev_sclass = VAR_1;
 VAR_7.card = VAR_4->card->number;
 VAR_7.device = VAR_5;
 VAR_7.subdevice = 0;
 if ((VAR_8 = FUNC_0(VAR_4->card, "CS4231", &VAR_7, &VAR_6)) < 0)
  return VAR_8;
 FUNC_2(VAR_6->name, FUNC_1(VAR_4));
 VAR_6->private_data = VAR_4;
 VAR_6->private_free = VAR_2;
 VAR_6->hw = VAR_3;
 VAR_4->timer = VAR_6;
 return 0;
}
