
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_seq_queue {int timer; int timeq; int tickq; } ;
struct TYPE_9__ {int base; int value; } ;
struct TYPE_8__ {int time; int tick; } ;
struct TYPE_10__ {TYPE_3__ skew; TYPE_2__ time; int value; } ;
struct TYPE_11__ {TYPE_4__ param; } ;
struct TYPE_12__ {TYPE_5__ queue; } ;
struct TYPE_7__ {int client; } ;
struct snd_seq_event {int type; TYPE_6__ data; TYPE_1__ source; } ;
 int FUNC_0 (struct snd_seq_queue*,struct snd_seq_event*,int,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct snd_seq_queue *VAR_0,
     struct snd_seq_event *VAR_1,
     int VAR_2, int VAR_3)
{
 switch (VAR_1->type) {
 case 130:
  FUNC_1(VAR_0->tickq, VAR_1->source.client, 1);
  FUNC_1(VAR_0->timeq, VAR_1->source.client, 1);
  if (! FUNC_7(VAR_0->timer))
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  break;

 case 134:
  if (! FUNC_2(VAR_0->timer))
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  break;

 case 129:
  FUNC_8(VAR_0->timer);
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  break;

 case 128:
  FUNC_6(VAR_0->timer, VAR_1->data.queue.param.value);
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  break;

 case 132:
  if (FUNC_3(VAR_0->timer, VAR_1->data.queue.param.time.tick) == 0) {
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  }
  break;

 case 131:
  if (FUNC_4(VAR_0->timer, VAR_1->data.queue.param.time.time) == 0) {
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  }
  break;
 case 133:
  if (FUNC_5(VAR_0->timer,
        VAR_1->data.queue.param.skew.value,
        VAR_1->data.queue.param.skew.base) == 0) {
   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  }
  break;
 }
}
