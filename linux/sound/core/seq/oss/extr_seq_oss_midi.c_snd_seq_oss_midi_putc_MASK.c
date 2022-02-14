
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_event {int dummy; } ;
struct seq_oss_midi {int use_lock; int port; int client; int coder; } ;
struct seq_oss_devinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct seq_oss_midi* FUNC_0 (struct seq_oss_devinfo*,int) ;
 scalar_t__ FUNC_1 (int ,unsigned char,struct snd_seq_event*) ;
 int FUNC_2 (struct seq_oss_devinfo*,struct snd_seq_event*,int ,int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct seq_oss_devinfo *VAR_2, int VAR_3, unsigned char VAR_4, struct snd_seq_event *VAR_5)
{
 struct seq_oss_midi *VAR_6;

 if ((VAR_6 = FUNC_0(VAR_2, VAR_3)) == ((void*)0))
  return -VAR_1;
 if (FUNC_1(VAR_6->coder, VAR_4, VAR_5)) {
  FUNC_2(VAR_2, VAR_5, VAR_6->client, VAR_6->port);
  FUNC_3(&VAR_6->use_lock);
  return 0;
 }
 FUNC_3(&VAR_6->use_lock);
 return -VAR_0;
}
