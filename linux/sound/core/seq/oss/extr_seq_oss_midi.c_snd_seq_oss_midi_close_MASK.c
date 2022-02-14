
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int subs ;
struct TYPE_2__ {int port; int client; } ;
struct snd_seq_port_subscribe {TYPE_1__ dest; TYPE_1__ sender; } ;
struct seq_oss_midi {int opened; int use_lock; struct seq_oss_devinfo* devinfo; int port; int client; } ;
struct seq_oss_devinfo {int cseq; TYPE_1__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct seq_oss_midi* FUNC_0 (struct seq_oss_devinfo*,int) ;
 int FUNC_1 (struct snd_seq_port_subscribe*,int ,int) ;
 int FUNC_2 (int ,int ,struct snd_seq_port_subscribe*) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct seq_oss_devinfo *VAR_4, int VAR_5)
{
 struct seq_oss_midi *VAR_6;
 struct snd_seq_port_subscribe VAR_7;

 if ((VAR_6 = FUNC_0(VAR_4, VAR_5)) == ((void*)0))
  return -VAR_0;
 if (! VAR_6->opened || VAR_6->devinfo != VAR_4) {
  FUNC_3(&VAR_6->use_lock);
  return 0;
 }

 FUNC_1(&VAR_7, 0, sizeof(VAR_7));
 if (VAR_6->opened & VAR_2) {
  VAR_7.sender = VAR_4->addr;
  VAR_7.dest.client = VAR_6->client;
  VAR_7.dest.port = VAR_6->port;
  FUNC_2(VAR_4->cseq, VAR_3, &VAR_7);
 }
 if (VAR_6->opened & VAR_1) {
  VAR_7.sender.client = VAR_6->client;
  VAR_7.sender.port = VAR_6->port;
  VAR_7.dest = VAR_4->addr;
  FUNC_2(VAR_4->cseq, VAR_3, &VAR_7);
 }

 VAR_6->opened = 0;
 VAR_6->devinfo = ((void*)0);

 FUNC_3(&VAR_6->use_lock);
 return 0;
}
