
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_addr {int port; int client; } ;
struct seq_oss_midi {int use_lock; int port; int client; } ;
struct seq_oss_devinfo {int dummy; } ;


 struct seq_oss_midi* FUNC_0 (struct seq_oss_devinfo*,int) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct seq_oss_devinfo *VAR_0, int VAR_1, struct snd_seq_addr *VAR_2)
{
 struct seq_oss_midi *VAR_3;

 if ((VAR_3 = FUNC_0(VAR_0, VAR_1)) == ((void*)0))
  return;
 VAR_2->client = VAR_3->client;
 VAR_2->port = VAR_3->port;
 FUNC_1(&VAR_3->use_lock);
}
