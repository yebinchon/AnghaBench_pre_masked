
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct snd_seq_queue {int queue; TYPE_3__* timer; } ;
struct TYPE_14__ {int client; } ;
struct TYPE_13__ {int port; int client; } ;
struct TYPE_11__ {int queue; } ;
struct TYPE_12__ {TYPE_4__ queue; } ;
struct TYPE_8__ {int tick; } ;
struct snd_seq_event {int flags; TYPE_7__ dest; TYPE_6__ source; TYPE_5__ data; int queue; TYPE_1__ time; } ;
struct TYPE_9__ {int cur_tick; } ;
struct TYPE_10__ {TYPE_2__ tick; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct snd_seq_event*,int,int) ;

__attribute__((used)) static void FUNC_1(struct snd_seq_queue *VAR_5, struct snd_seq_event *VAR_6,
      int VAR_7, int VAR_8)
{
 struct snd_seq_event VAR_9;

 VAR_9 = *VAR_6;

 VAR_9.flags = VAR_4|VAR_3;
 VAR_9.time.tick = VAR_5->timer->tick.cur_tick;
 VAR_9.queue = VAR_5->queue;
 VAR_9.data.queue.queue = VAR_5->queue;


 VAR_9.source.client = VAR_1;
 VAR_9.source.port = VAR_2;
 VAR_9.dest.client = VAR_0;
 FUNC_0(VAR_1, &VAR_9, VAR_7, VAR_8);
}
