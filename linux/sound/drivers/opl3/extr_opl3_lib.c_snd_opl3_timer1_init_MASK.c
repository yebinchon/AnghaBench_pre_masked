
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_timer_id {int device; scalar_t__ subdevice; int card; int dev_sclass; int dev_class; } ;
struct snd_timer {int hw; struct snd_opl3* private_data; int name; } ;
struct snd_opl3 {struct snd_timer* timer1; TYPE_1__* card; } ;
struct TYPE_2__ {int number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*,struct snd_timer_id*,struct snd_timer**) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_opl3 * VAR_3, int VAR_4)
{
 struct snd_timer *VAR_5 = ((void*)0);
 struct snd_timer_id VAR_6;
 int VAR_7;

 VAR_6.dev_class = VAR_0;
 VAR_6.dev_sclass = VAR_1;
 VAR_6.card = VAR_3->card->number;
 VAR_6.device = VAR_4;
 VAR_6.subdevice = 0;
 if ((VAR_7 = FUNC_0(VAR_3->card, "AdLib timer #1", &VAR_6, &VAR_5)) >= 0) {
  FUNC_1(VAR_5->name, "AdLib timer #1");
  VAR_5->private_data = VAR_3;
  VAR_5->hw = VAR_2;
 }
 VAR_3->timer1 = VAR_5;
 return VAR_7;
}
