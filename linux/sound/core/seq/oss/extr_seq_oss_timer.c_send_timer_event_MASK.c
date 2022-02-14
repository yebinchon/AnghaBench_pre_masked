
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int value; } ;
struct TYPE_9__ {TYPE_3__ param; int queue; } ;
struct TYPE_10__ {TYPE_4__ queue; } ;
struct TYPE_7__ {int port; int client; } ;
struct TYPE_6__ {scalar_t__ port; int client; } ;
struct snd_seq_event {int type; TYPE_5__ data; int queue; TYPE_2__ dest; TYPE_1__ source; } ;
struct seq_oss_devinfo {int cseq; int queue; } ;
typedef int ev ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_seq_event*,int ,int) ;
 int FUNC_1 (int ,struct snd_seq_event*,int,int ) ;

__attribute__((used)) static int
FUNC_2(struct seq_oss_devinfo *VAR_2, int VAR_3, int VAR_4)
{
 struct snd_seq_event VAR_5;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.type = VAR_3;
 VAR_5.source.client = VAR_2->cseq;
 VAR_5.source.port = 0;
 VAR_5.dest.client = VAR_0;
 VAR_5.dest.port = VAR_1;
 VAR_5.queue = VAR_2->queue;
 VAR_5.data.queue.queue = VAR_2->queue;
 VAR_5.data.queue.param.value = VAR_4;
 return FUNC_1(VAR_2->cseq, &VAR_5, 1, 0);
}
