
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue_client {int used; int client; int queue; } ;
struct snd_seq_client {int number; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_seq_client *VAR_1,
       void *VAR_2)
{
 struct snd_seq_queue_client *VAR_3 = VAR_2;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->queue, VAR_1->number);
 if (VAR_4 < 0)
  return -VAR_0;
 VAR_3->used = VAR_4;
 VAR_3->client = VAR_1->number;

 return 0;
}
