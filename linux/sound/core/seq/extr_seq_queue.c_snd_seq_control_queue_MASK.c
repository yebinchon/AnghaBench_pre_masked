
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_seq_queue {int dummy; } ;
struct TYPE_6__ {int client; } ;
struct TYPE_4__ {int queue; } ;
struct TYPE_5__ {TYPE_1__ queue; } ;
struct snd_seq_event {TYPE_3__ source; TYPE_2__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_seq_queue*,int ) ;
 int FUNC_1 (struct snd_seq_queue*) ;
 int FUNC_2 (struct snd_seq_queue*) ;
 struct snd_seq_queue* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct snd_seq_queue*,struct snd_seq_event*,int,int) ;

int FUNC_6(struct snd_seq_event *VAR_2, int VAR_3, int VAR_4)
{
 struct snd_seq_queue *VAR_5;

 if (FUNC_4(!VAR_2))
  return -VAR_0;
 VAR_5 = FUNC_3(VAR_2->data.queue.queue);

 if (VAR_5 == ((void*)0))
  return -VAR_0;

 if (! FUNC_0(VAR_5, VAR_2->source.client)) {
  FUNC_2(VAR_5);
  return -VAR_1;
 }

 FUNC_5(VAR_5, VAR_2, VAR_3, VAR_4);

 FUNC_1(VAR_5);
 FUNC_2(VAR_5);
 return 0;
}
