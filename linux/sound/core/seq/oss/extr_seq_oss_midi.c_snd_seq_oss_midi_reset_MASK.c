
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int channel; scalar_t__ value; int param; } ;
struct TYPE_8__ {TYPE_3__ control; } ;
struct TYPE_6__ {int port; } ;
struct TYPE_5__ {int port; int client; } ;
struct snd_seq_event {TYPE_4__ data; int type; TYPE_2__ source; int queue; TYPE_1__ dest; } ;
struct seq_oss_midi {int opened; int use_lock; int port; int client; } ;
struct seq_oss_devinfo {scalar_t__ seq_mode; int port; int queue; } ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct seq_oss_midi* FUNC_0 (struct seq_oss_devinfo*,int) ;
 int FUNC_1 (struct snd_seq_event*,int ,int) ;
 int FUNC_2 (struct seq_oss_devinfo*,struct snd_seq_event*,int ,int ) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct seq_oss_devinfo *VAR_8, int VAR_9)
{
 struct seq_oss_midi *VAR_10;

 if ((VAR_10 = FUNC_0(VAR_8, VAR_9)) == ((void*)0))
  return;
 if (! VAR_10->opened) {
  FUNC_3(&VAR_10->use_lock);
  return;
 }

 if (VAR_10->opened & VAR_2) {
  struct snd_seq_event VAR_11;
  int VAR_12;

  FUNC_1(&VAR_11, 0, sizeof(VAR_11));
  VAR_11.dest.client = VAR_10->client;
  VAR_11.dest.port = VAR_10->port;
  VAR_11.queue = VAR_8->queue;
  VAR_11.source.port = VAR_8->port;
  if (VAR_8->seq_mode == VAR_7) {
   VAR_11.type = VAR_5;
   FUNC_2(VAR_8, &VAR_11, 0, 0);
  }
  for (VAR_12 = 0; VAR_12 < 16; VAR_12++) {
   VAR_11.type = VAR_3;
   VAR_11.data.control.channel = VAR_12;
   VAR_11.data.control.param = VAR_0;
   FUNC_2(VAR_8, &VAR_11, 0, 0);
   if (VAR_8->seq_mode == VAR_6) {
    VAR_11.data.control.param =
     VAR_1;
    FUNC_2(VAR_8, &VAR_11, 0, 0);
    VAR_11.type = VAR_4;
    VAR_11.data.control.value = 0;
    FUNC_2(VAR_8, &VAR_11, 0, 0);
   }
  }
 }

 FUNC_3(&VAR_10->use_lock);
}
