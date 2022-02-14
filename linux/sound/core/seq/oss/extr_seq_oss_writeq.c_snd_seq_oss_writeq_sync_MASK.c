
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ time; int code; } ;
union evrec {TYPE_3__ t; } ;
struct TYPE_4__ {scalar_t__ tick; } ;
struct snd_seq_event {int data; TYPE_1__ time; int type; scalar_t__ flags; } ;
struct seq_oss_writeq {scalar_t__ sync_time; int sync_event_put; int sync_sleep; struct seq_oss_devinfo* dp; } ;
struct TYPE_5__ {int port; int client; } ;
struct seq_oss_devinfo {int cseq; TYPE_2__ addr; int timer; } ;
typedef int ev ;
typedef scalar_t__ abstime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_seq_event*,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct snd_seq_event*,int *,int) ;
 int FUNC_3 (struct seq_oss_devinfo*,struct snd_seq_event*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int ) ;

int
FUNC_6(struct seq_oss_writeq *VAR_4)
{
 struct seq_oss_devinfo *VAR_5 = VAR_4->dp;
 abstime_t VAR_6;

 VAR_6 = FUNC_4(VAR_5->timer);
 if (VAR_4->sync_time >= VAR_6)
  return 0;

 if (! VAR_4->sync_event_put) {
  struct snd_seq_event VAR_7;
  union evrec *VAR_8;


  FUNC_0(&VAR_7, 0, sizeof(VAR_7));
  VAR_7.flags = 0;
  VAR_7.type = VAR_2;
  VAR_7.time.tick = VAR_6;

  FUNC_3(VAR_5, &VAR_7, VAR_5->addr.client, VAR_5->addr.port);
  VAR_8 = (union evrec *)&VAR_7.data;
  VAR_8->t.code = VAR_1;
  VAR_8->t.time = VAR_6;
  VAR_4->sync_event_put = 1;
  FUNC_2(VAR_5->cseq, &VAR_7, ((void*)0), 1);
 }

 FUNC_5(VAR_4->sync_sleep, ! VAR_4->sync_event_put, VAR_0);
 if (FUNC_1(VAR_3))

  VAR_4->sync_event_put = 0;
 if (! VAR_4->sync_event_put || VAR_4->sync_time >= VAR_6)
  return 0;
 return 1;
}
