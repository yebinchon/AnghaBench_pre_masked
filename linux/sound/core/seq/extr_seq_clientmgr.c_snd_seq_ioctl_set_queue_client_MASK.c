
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_seq_queue_client {scalar_t__ used; int queue; } ;
struct snd_seq_client {int number; } ;


 int FUNC_0 (struct snd_seq_client*,void*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct snd_seq_client *VAR_0,
       void *VAR_1)
{
 struct snd_seq_queue_client *VAR_2 = VAR_1;
 int VAR_3;

 if (VAR_2->used >= 0) {
  VAR_3 = FUNC_1(VAR_2->queue, VAR_0->number, VAR_2->used);
  if (VAR_3 < 0)
   return VAR_3;
 }

 return FUNC_0(VAR_0, VAR_1);
}
