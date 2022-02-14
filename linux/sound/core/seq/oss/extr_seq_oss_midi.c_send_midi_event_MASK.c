
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tick; } ;
struct snd_seq_event {scalar_t__ type; TYPE_1__ time; } ;
struct seq_oss_midi {int seq_device; int coder; } ;
struct seq_oss_devinfo {int readq; TYPE_2__* timer; int seq_mode; } ;
typedef int msg ;
struct TYPE_4__ {int running; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,struct snd_seq_event*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (int ,int ,struct snd_seq_event*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(struct seq_oss_devinfo *VAR_1, struct snd_seq_event *VAR_2, struct seq_oss_midi *VAR_3)
{
 char VAR_4[32];
 int VAR_5;

 FUNC_1(VAR_1->readq, VAR_2->time.tick, VAR_1->seq_mode);
 if (!VAR_1->timer->running)
  VAR_5 = FUNC_4(VAR_1->timer);
 if (VAR_2->type == VAR_0) {
  FUNC_3(VAR_1->readq, VAR_3->seq_device, VAR_2);
 } else {
  VAR_5 = FUNC_0(VAR_3->coder, VAR_4, sizeof(VAR_4), VAR_2);
  if (VAR_5 > 0)
   FUNC_2(VAR_1->readq, VAR_3->seq_device, VAR_4, VAR_5);
 }

 return 0;
}
