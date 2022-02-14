
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue_tempo {int dummy; } ;
struct snd_seq_client {int number; } ;


 int FUNC_0 (int ,struct snd_seq_queue_tempo*) ;

__attribute__((used)) static int FUNC_1(struct snd_seq_client *VAR_0,
      void *VAR_1)
{
 struct snd_seq_queue_tempo *VAR_2 = VAR_1;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->number, VAR_2);
 return VAR_3 < 0 ? VAR_3 : 0;
}
