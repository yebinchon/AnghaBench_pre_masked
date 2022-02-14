
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; int client; } ;
struct snd_seq_event {TYPE_1__ source; } ;
struct seq_oss_midi {int opened; int use_lock; int seq_device; } ;
struct seq_oss_devinfo {scalar_t__ seq_mode; int * readq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct seq_oss_midi* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct seq_oss_devinfo*,struct snd_seq_event*,struct seq_oss_midi*) ;
 int FUNC_2 (struct seq_oss_devinfo*,struct snd_seq_event*,int ) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct snd_seq_event *VAR_2, int VAR_3, void *VAR_4)
{
 struct seq_oss_devinfo *VAR_5 = (struct seq_oss_devinfo *)VAR_4;
 struct seq_oss_midi *VAR_6;
 int VAR_7;

 if (VAR_5->readq == ((void*)0))
  return 0;
 if ((VAR_6 = FUNC_0(VAR_2->source.client, VAR_2->source.port)) == ((void*)0))
  return 0;
 if (! (VAR_6->opened & VAR_0)) {
  FUNC_3(&VAR_6->use_lock);
  return 0;
 }

 if (VAR_5->seq_mode == VAR_1)
  VAR_7 = FUNC_2(VAR_5, VAR_2, VAR_6->seq_device);
 else
  VAR_7 = FUNC_1(VAR_5, VAR_2, VAR_6);

 FUNC_3(&VAR_6->use_lock);
 return VAR_7;
}
