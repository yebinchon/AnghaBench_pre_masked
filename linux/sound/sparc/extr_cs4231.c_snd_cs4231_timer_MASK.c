
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_timer_id {scalar_t__ subdevice; scalar_t__ device; int card; int dev_sclass; int dev_class; } ;
struct snd_timer {int hw; struct snd_cs4231* private_data; int name; } ;
struct snd_cs4231 {struct snd_timer* timer; } ;
struct snd_card {int number; struct snd_cs4231* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_card*,char*,struct snd_timer_id*,struct snd_timer**) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_card *VAR_3)
{
 struct snd_cs4231 *VAR_4 = VAR_3->private_data;
 struct snd_timer *VAR_5;
 struct snd_timer_id VAR_6;
 int VAR_7;


 VAR_6.dev_class = VAR_0;
 VAR_6.dev_sclass = VAR_1;
 VAR_6.card = VAR_3->number;
 VAR_6.device = 0;
 VAR_6.subdevice = 0;
 VAR_7 = FUNC_0(VAR_3, "CS4231", &VAR_6, &VAR_5);
 if (VAR_7 < 0)
  return VAR_7;
 FUNC_1(VAR_5->name, "CS4231");
 VAR_5->private_data = VAR_4;
 VAR_5->hw = VAR_2;
 VAR_4->timer = VAR_5;

 return 0;
}
