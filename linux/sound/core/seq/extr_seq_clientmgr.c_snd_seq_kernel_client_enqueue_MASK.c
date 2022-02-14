
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int client; } ;
struct snd_seq_event {scalar_t__ type; TYPE_1__ source; } ;
struct snd_seq_client {int ioctl_mutex; int accept_output; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct snd_seq_event*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct snd_seq_client*,struct snd_seq_event*,struct file*,int,int,int ,int *) ;
 int FUNC_5 (struct snd_seq_client*) ;
 struct snd_seq_client* FUNC_6 (int) ;

int FUNC_7(int VAR_4, struct snd_seq_event *VAR_5,
      struct file *VAR_6, bool VAR_7)
{
 struct snd_seq_client *VAR_8;
 int VAR_9;

 if (FUNC_3(!VAR_5))
  return -VAR_0;

 if (VAR_5->type == VAR_3)
  return 0;
 if (VAR_5->type == VAR_2)
  return -VAR_0;


 VAR_5->source.client = VAR_4;

 if (FUNC_0(VAR_5))
  return -VAR_0;

 VAR_8 = FUNC_6(VAR_4);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 if (!VAR_8->accept_output) {
  VAR_9 = -VAR_1;
 } else {
  FUNC_1(&VAR_8->ioctl_mutex);
  VAR_9 = FUNC_4(VAR_8, VAR_5, VAR_6, VAR_7,
            0, 0,
            &VAR_8->ioctl_mutex);
  FUNC_2(&VAR_8->ioctl_mutex);
 }

 FUNC_5(VAR_8);
 return VAR_9;
}
