
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int subs ;
struct TYPE_2__ {int port; int client; } ;
struct snd_seq_port_subscribe {int queue; int flags; TYPE_1__ dest; TYPE_1__ sender; } ;
struct seq_oss_midi {int opened; int flags; int use_lock; struct seq_oss_devinfo* devinfo; int port; int client; } ;
struct seq_oss_devinfo {int cseq; int queue; TYPE_1__ addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct seq_oss_midi* FUNC_0 (struct seq_oss_devinfo*,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct snd_seq_port_subscribe*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,struct snd_seq_port_subscribe*) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct seq_oss_devinfo *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10;
 struct seq_oss_midi *VAR_11;
 struct snd_seq_port_subscribe VAR_12;

 if ((VAR_11 = FUNC_0(VAR_7, VAR_8)) == ((void*)0))
  return -VAR_1;


 if (VAR_11->opened && VAR_11->devinfo != VAR_7) {
  FUNC_5(&VAR_11->use_lock);
  return -VAR_0;
 }

 VAR_10 = 0;
 if (FUNC_2(VAR_9))
  VAR_10 |= VAR_4;
 if (FUNC_1(VAR_9))
  VAR_10 |= VAR_3;
 VAR_10 &= VAR_11->flags;
 if (VAR_10 == 0) {
  FUNC_5(&VAR_11->use_lock);
  return -VAR_2;
 }


 if ((VAR_11->opened & VAR_10) == VAR_10) {
  FUNC_5(&VAR_11->use_lock);
  return 0;
 }

 VAR_10 &= ~VAR_11->opened;

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));

 if (VAR_10 & VAR_4) {
  VAR_12.sender = VAR_7->addr;
  VAR_12.dest.client = VAR_11->client;
  VAR_12.dest.port = VAR_11->port;
  if (FUNC_4(VAR_7->cseq, VAR_5, &VAR_12) >= 0)
   VAR_11->opened |= VAR_4;
 }
 if (VAR_10 & VAR_3) {
  VAR_12.sender.client = VAR_11->client;
  VAR_12.sender.port = VAR_11->port;
  VAR_12.dest = VAR_7->addr;
  VAR_12.flags = VAR_6;
  VAR_12.queue = VAR_7->queue;
  if (FUNC_4(VAR_7->cseq, VAR_5, &VAR_12) >= 0)
   VAR_11->opened |= VAR_3;
 }

 if (! VAR_11->opened) {
  FUNC_5(&VAR_11->use_lock);
  return -VAR_2;
 }

 VAR_11->devinfo = VAR_7;
 FUNC_5(&VAR_11->use_lock);
 return 0;
}
